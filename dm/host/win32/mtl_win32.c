// Windows null/HLE graphics backend for nxnative
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nvn_mtl.h"
#include "nvn_obj.h"
#include "dm.h"

static uint64_t g_fence_counter = 1;
static uint64_t g_cur_frame = 0;

void mtl_init(void) {}
void mtl_vbuf_stats(uint64_t *resolve, uint64_t *reuse, uint64_t *set, uint64_t *skip, uint64_t *copies, uint64_t *copy_bytes) {
    if (resolve) *resolve = 0; if (reuse) *reuse = 0; if (set) *set = 0; if (skip) *skip = 0; if (copies) *copies = 0; if (copy_bytes) *copy_bytes = 0;
}
void mtl_set_depth_zero(int on) { (void)on; }
void mtl_set_origin_lower_left(int on) { (void)on; }
void mtl_set_queue_origin_lower_left(int on) { (void)on; }
void mtl_queue_activate(uint64_t s) { (void)s; }
void mtl_queue_forget(uint64_t s) { (void)s; }
void bf_want_note(const char *key) { (void)key; }

void mtl_pool_add(const void *mem, uint64_t size) { (void)mem; (void)size; }
void mtl_pool_del(const void *mem) { (void)mem; }
void mtl_alias_drop_pool(const void *pool) { (void)pool; }
int mtl_addr(uint64_t addr, uint64_t len, void **buf, uint64_t *off) {
    (void)addr; (void)len;
    if (buf) *buf = (void *)(uintptr_t)addr;
    if (off) *off = 0;
    return 1;
}

void mtl_res_counts(uint32_t tick, const char *why) { (void)tick; (void)why; }
void mtl_res_snapshot(mtl_res_count *out) { if (out) memset(out, 0, sizeof(*out)); }

void mtl_sub_begin(void) {}
void mtl_sub_copy(uint64_t src, uint64_t dst, uint64_t n) { (void)src; (void)dst; (void)n; }
void mtl_sub_fill(uint64_t dst, uint64_t n, uint32_t value) { (void)dst; (void)n; (void)value; }
void mtl_sub_event(volatile uint32_t *val, uint32_t mode, uint32_t v) {
    if (val) {
        if (mode == 0) *val = v;
        else *val += v;
    }
}
void mtl_sub_counter(uint64_t addr, uint32_t type) { (void)addr; (void)type; }
uint64_t mtl_sub_commit(void) { return ++g_fence_counter; }

uint64_t mtl_last_fence(void) { return g_fence_counter; }
int mtl_wait(uint64_t fence, uint64_t timeout_ns) { (void)fence; (void)timeout_ns; return 1; }
int mtl_wait_acq(uint64_t fence, uint64_t timeout_ns) { (void)fence; (void)timeout_ns; return 1; }
void mtl_finish(void) {}
void mtl_drain(void) {}
void mtl_xv_window_tex(uint64_t serial) { (void)serial; }

void *mtl_device(void) { return NULL; }
void *mtl_device_classic(void) { return NULL; }
uint64_t mtl_ext_tex(void *tex) { (void)tex; return 0; }
uint64_t mtl_present_ext(uint64_t serial, double period, void *ev, uint64_t ev_val, const int crop[4]) {
    (void)serial; (void)period; (void)ev; (void)ev_val; (void)crop;
    return ++g_fence_counter;
}
void mtl_present_wait(uint64_t ticket) { (void)ticket; }

void mtl_exec(const uint8_t *handle) { (void)handle; }
void mtl_exec_rest(const uint64_t *handles, int n) { (void)handles; (void)n; }
uint64_t mtl_present(const tex_t *t, double period_s, const int crop[4]) {
    (void)t; (void)period_s; (void)crop;
    g_cur_frame++;
    return ++g_fence_counter;
}
void mtl_present_flush(void) {}
void mtl_present_test_stall(uint64_t ns) { (void)ns; }
int mtl_display_hz(void) { return 60; }
void mtl_set_tex_pool_n(int n) { (void)n; }
void mtl_set_frame(uint64_t f) { g_cur_frame = f; }
void mtl_ub_present(double iv_ms) { (void)iv_ms; }
double mtl_gpu_ms(uint64_t f) { (void)f; return 0.0; }
void mtl_ab_gpu(uint64_t f, double gpu_ms, double frame_ms) { (void)f; (void)gpu_ms; (void)frame_ms; }
void mtl_sub_index(const uint64_t *h, int n) { (void)h; (void)n; }
int mtl_gpu_span(uint64_t f, uint64_t *t0, uint64_t *t1) { (void)f; if (t0) *t0 = 0; if (t1) *t1 = 0; return 0; }
void mtl_stats(uint64_t *passes, uint64_t *draws) { if (passes) *passes = 0; if (draws) *draws = 0; }
void mtl_args_stats(uint64_t *enc, uint64_t *reuse) { if (enc) *enc = 0; if (reuse) *reuse = 0; }
void mtl_use_stats(uint64_t *call, uint64_t *skip) { if (call) *call = 0; if (skip) *skip = 0; }
uint64_t mtl_ds_omit(void) { return 0; }
uint64_t mtl_drawable_ns_take(void) { return 0; }
void mtl_bw(uint64_t *load, uint64_t *store, uint64_t *full_rw_passes) {
    if (load) *load = 0; if (store) *store = 0; if (full_rw_passes) *full_rw_passes = 0;
}
uint64_t mtl_udc_saved_bytes(void) { return 0; }
int mtl_has_window(void) { return 1; }
int mtl_fps_target(void) { return 60; }
int mtl_warm_wait(int timeout_ms) { (void)timeout_ms; return 0; }
int mtl_link_active(void) { return 1; }
int mtl_link_wait_tick(int vsyncs, uint64_t timeout_ns) { (void)vsyncs; (void)timeout_ns; return 1; }
int mtl_link_wait_ticks(int ticks, uint64_t timeout_ns) { (void)ticks; (void)timeout_ns; return 1; }
int mtl_link_rate(void) { return 60; }
double mtl_presented_time(uint64_t n) { (void)n; return 0.0; }
int mtl_link_tick(uint64_t n, double *target, double *lead_ms, int *ticks, double *gap_ms) {
    (void)n; if (target) *target = 0.0; if (lead_ms) *lead_ms = 0.0; if (ticks) *ticks = 1; if (gap_ms) *gap_ms = 16.66;
    return 1;
}
int mtl_link_stalled(void) { return 0; }
int mtl_snap_on(void) { return 0; }
uint64_t mtl_snap_acquire_wait(void) { return 0; }
void mtl_tex_init(const tex_t *t) { (void)t; }
void mtl_tex_release(tex_t *t) { (void)t; }
void mtl_pkg_stats(uint64_t *uploads, uint64_t *reuploads) { if (uploads) *uploads = 0; if (reuploads) *reuploads = 0; }
unsigned mtl_cpu_tex_count(void) { return 0; }
uint64_t mtl_pkg_edge_skips(void) { return 0; }
uint64_t mtl_pkg_miss(void) { return 0; }
uint64_t mtl_upload_ns_take(void) { return 0; }
uint64_t mtl_upload_gpu_ns_take(void) { return 0; }
void mtl_create_stats(uint64_t *lib, uint64_t *pso) { if (lib) *lib = 0; if (pso) *pso = 0; }
void mtl_read_texels(const tex_t *t, unsigned level, unsigned layer0, const NVNcopyRegion *r, uint8_t *dst, size_t row, size_t img) {
    (void)t; (void)level; (void)layer0; (void)r; (void)dst; (void)row; (void)img;
}
void mtl_reg_tex(int id, const tex_t *t, const view_t *v) { (void)id; (void)t; (void)v; }
void mtl_reg_image(int id, const tex_t *t, const view_t *v) { (void)id; (void)t; (void)v; }
void mtl_tex_cpu_written(const tex_t *t) { (void)t; }
int mtl_tex_gpu_owned(uint64_t serial) { (void)serial; return 0; }
void mtl_reg_samp(int id, const samp_par *p) { (void)id; (void)p; }
void mtl_prog_release(prog_t *p) { (void)p; }

void mtl_res_stats(char *out, size_t n) { if (out && n) snprintf(out, n, "pools=0 tex=0"); }
uint32_t mtl_present_qos(void) { return 0; }
void mtl_mem_stat(unsigned long long f, unsigned long long mb) { (void)f; (void)mb; }
void mtl_create_ns(uint64_t *lib_ns, uint64_t *pso_ns) { if (lib_ns) *lib_ns = 0; if (pso_ns) *pso_ns = 0; }
void mtl_hybrid_stats(uint64_t *draws, uint64_t *made, uint64_t *none) {
    if (draws) *draws = 0; if (made) *made = 0; if (none) *none = 0;
}
uint64_t mtl_upload_bytes(void) { return 0; }
void mtl_barrier_stats(uint64_t *skip, uint64_t *full) { if (skip) *skip = 0; if (full) *full = 0; }
uint64_t mtl_cut_count(void) { return 0; }
uint64_t mtl_copy_cut_count(void) { return 0; }
uint64_t mtl_blit_splits(void) { return 0; }
void mtl_ubd_stats(uint64_t *a, uint64_t *b) { if (a) *a = 0; if (b) *b = 0; }
void mtl_ubp_stats(uint64_t *a, uint64_t *b, uint64_t *c) { if (a) *a = 0; if (b) *b = 0; if (c) *c = 0; }
void mtl_lc_stats(uint64_t *a, uint64_t *b) { if (a) *a = 0; if (b) *b = 0; }
void mtl_ubp_why(uint64_t w[5]) { if (w) memset(w, 0, 5 * sizeof(uint64_t)); }
void mtl_sm_stats(uint64_t *a, uint64_t *b, uint64_t *c) { if (a) *a = 0; if (b) *b = 0; if (c) *c = 0; }
void mtl_cshoist_stats(uint64_t *a, uint64_t *b, uint64_t c[8]) {
    if (a) *a = 0; if (b) *b = 0; if (c) memset(c, 0, 8 * sizeof(uint64_t));
}
void mtl_pso_line(char *pl, size_t sz) { if (pl && sz) snprintf(pl, sz, "pso=0"); }
int mtl_pso_prebuild_tool(void) { return 0; }
void mtl_alloc_stats(uint64_t *aw, uint64_t *ag, int *an) { if (aw) *aw = 0; if (ag) *ag = 0; if (an) *an = 0; }

void dm_gfx_passdump_next(long n) { (void)n; }
void dm_gfx_shot_at(long k, const char *path) { (void)k; (void)path; }
void dm_gfx_texdump_next(const char *path) { (void)path; }
void dm_gfx_texlist(int target) { (void)target; }
void dm_gfx_texraw(uint64_t serial, const char *path) { (void)serial; (void)path; }

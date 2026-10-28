#pragma once
#include <windows.h>
#include <wincrypt.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint32_t CC_LONG;
#define CC_SHA256_DIGEST_LENGTH 32

typedef struct {
    HCRYPTPROV hProv;
    HCRYPTHASH hHash;
} CC_SHA256_CTX;

static inline int CC_SHA256_Init(CC_SHA256_CTX *c) {
    c->hProv = 0;
    c->hHash = 0;
    if (!CryptAcquireContextW(&c->hProv, NULL, NULL, PROV_RSA_AES, CRYPT_VERIFYCONTEXT)) return 0;
    if (!CryptCreateHash(c->hProv, CALG_SHA_256, 0, 0, &c->hHash)) {
        CryptReleaseContext(c->hProv, 0);
        return 0;
    }
    return 1;
}

static inline int CC_SHA256_Update(CC_SHA256_CTX *c, const void *data, CC_LONG len) {
    if (!c->hHash) return 0;
    return CryptHashData(c->hHash, (const BYTE *)data, len, 0) ? 1 : 0;
}

static inline int CC_SHA256_Final(unsigned char *md, CC_SHA256_CTX *c) {
    if (!c->hHash) return 0;
    DWORD len = 32;
    int ok = CryptGetHashParam(c->hHash, HP_HASHVAL, md, &len, 0) ? 1 : 0;
    CryptDestroyHash(c->hHash);
    CryptReleaseContext(c->hProv, 0);
    c->hHash = 0;
    c->hProv = 0;
    return ok;
}

static inline unsigned char *CC_SHA256(const void *data, CC_LONG len, unsigned char *md) {
    CC_SHA256_CTX ctx;
    if (CC_SHA256_Init(&ctx)) {
        CC_SHA256_Update(&ctx, data, len);
        CC_SHA256_Final(md, &ctx);
    }
    return md;
}

#ifdef __cplusplus
}
#endif

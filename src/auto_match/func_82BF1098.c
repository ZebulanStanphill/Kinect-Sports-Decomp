#include <string.h>

typedef struct Client_82BF1098 {
    char pad0[0x6c];
    const unsigned char *digest;
} Client_82BF1098;

extern char lbl_82196582[];
extern const unsigned char *fn_82BF1C20(const void *data, int size);
extern int fn_82BE5240(Client_82BF1098 *self, int code, const char *fmt, ...);

int fn_82BF1098(Client_82BF1098 *self, const void *data, int size)
{
    const unsigned char *hash;

    if (data == 0 || size == 0) {
        return 0x1f6;
    }
    hash = fn_82BF1C20(data, size);
    if (memcmp(hash, self->digest, 0x14) != 0) {
        return fn_82BE5240(self, 0x1f6, lbl_82196582);
    }
    return 0;
}

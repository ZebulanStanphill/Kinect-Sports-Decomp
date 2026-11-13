#include <string.h>

typedef struct { char pad[0x50]; unsigned char flags; } Ctx_82835968;
typedef struct { char pad[0x10]; unsigned int size; } Info_82835968;
typedef struct {
    int f0;
    int handle;
    int f8;
    int fc;
    Info_82835968 *info;
} Obj_82835968;

extern Ctx_82835968 *fn_828315F0(int handle);
extern int fn_82F6A3F8(char *dst, unsigned int size, const char *src, unsigned int count);
extern void fn_82820EF8(void *p, unsigned int size);

void fn_82835968(Obj_82835968 *self, const char *src, char *out)
{
    Ctx_82835968 *ctx = fn_828315F0(self->handle);
    unsigned int n;
    memset(out, 0, 8);
    n = self->info->size > 8 ? 8 : self->info->size;
    if (n != 0) {
        fn_82F6A3F8(out, 8, src, n);
        if (ctx->flags & 1) {
            fn_82820EF8(out, n);
        }
    }
}

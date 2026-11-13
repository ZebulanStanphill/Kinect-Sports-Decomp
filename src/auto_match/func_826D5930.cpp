#include "game/Vec_82698FC8.h"

struct Source_826D5930;
struct SourceVt_826D5930 {
    void *pad[10];
    int (*Count)(Source_826D5930 *self); /* 0x28 */
};
struct Source_826D5930 { SourceVt_826D5930 *vt; };

struct Host_826D5930;
struct HostVt_826D5930 {
    void *pad[54];
    void *(*Allocator)(Host_826D5930 *self); /* 0xd8 */
};
struct Host_826D5930 { HostVt_826D5930 *vt; };

struct Cache_826D5930 {
    char pad0[0x10];
    int count;              /* 0x10 */
    char pad14[4];
    unsigned char stale;    /* 0x18 */
};

struct Self_826D5930;

/* Update context passed to the per-index callbacks; fn_826CD9A0 tears it down. */
struct Link_826D5930 {
    Link_826D5930 *next;
    Link_826D5930 *prev;
};
struct Ctx_826D5930 {
    int a0;
    int a4;
    int capacity;           /* 0x08: 50 */
    int ac;
    void *alloc;            /* 0x10 */
    int b4;
    int b8;
    int bc;
    void *alloc2;           /* 0x20 */
    Link_826D5930 head;     /* 0x24 */
    Self_826D5930 *owner;   /* 0x2c */
    int forward;            /* 0x30 */
};

struct Self_826D5930 {
    char pad0[0x9c];
    Source_826D5930 *source;    /* 0x9c */
    Host_826D5930 *host;        /* 0xa0 */
    char padA4[4];
    Vec_82698FC8 vecA8;         /* 0xa8 */
    int dirty;                  /* 0xb0 */
    int b4;
    int b8;                     /* 0xb8 */
    unsigned int current;       /* 0xbc */
    char padC0[0x1ac - 0xc0];
    Cache_826D5930 *cache;      /* 0x1ac */
};

extern "C" {
void fn_826D0878(Self_826D5930 *self, int a);
void fn_826C6DA8(Self_826D5930 *self, Ctx_826D5930 *ctx, unsigned int first, unsigned int last);
void fn_826C6E68(Self_826D5930 *self, unsigned int index);
void fn_826D46F0(Self_826D5930 *self, Ctx_826D5930 *ctx, int kind);
void fn_826CD9A0(Ctx_826D5930 *ctx);
void fn_826C90C8(Self_826D5930 *self, unsigned int index);
void fn_8269A110(Vec_82698FC8 *vec);
}

static __forceinline void InitCtx(Ctx_826D5930 *ctx, Self_826D5930 *self, int forward)
{
    void *alloc = self->host->vt->Allocator(self->host);
    ctx->a0 = 0;
    ctx->a4 = 0;
    ctx->capacity = 50;
    ctx->ac = 0;
    ctx->alloc = alloc;
    ctx->b4 = 0;
    ctx->b8 = 0;
    ctx->bc = 0;
    ctx->alloc2 = alloc;
    ctx->head.next = &ctx->head;
    ctx->head.prev = &ctx->head;
    ctx->owner = self;
    ctx->forward = forward;
}

extern "C" void fn_826D5930(Self_826D5930 *self, int index)
{
    int count;
    int last;
    unsigned int target;
    Cache_826D5930 *cache = self->cache;

    if (cache != 0 && cache->stale == 0)
        count = cache->count;
    else
        count = self->source->vt->Count(self->source);
    last = count - 1;
    if (index < last)
        last = index;
    target = last < 0 ? 0 : last;
    fn_826D0878(self, 0);
    if (target < self->current) {
        self->vecA8.Method_82698FC8(target != 0 ? target - 1 : 0);
        if (target >= 1) {
            Ctx_826D5930 ctx;
            InitCtx(&ctx, self, 1);
            fn_826C6DA8(self, &ctx, 0, target - 1);
            self->current = target;
            fn_826D46F0(self, &ctx, 4);
            fn_826CD9A0(&ctx);
        } else {
            self->current = target;
        }
        fn_826C90C8(self, target);
        fn_8269A110(&self->vecA8);
    } else if (target > self->current) {
        if (target > 1 && target > self->current + 1) {
            Ctx_826D5930 ctx;
            unsigned int i;
            InitCtx(&ctx, self, 0);
            fn_826C6DA8(self, &ctx, self->current + 1, target - 1);
            for (i = self->current + 1; i < target; i++)
                fn_826C6E68(self, i);
            self->current = target;
            fn_826D46F0(self, &ctx, 4);
            fn_826CD9A0(&ctx);
        } else {
            self->current = target;
        }
        fn_826C90C8(self, target);
    }
    self->b8 = 1;
}

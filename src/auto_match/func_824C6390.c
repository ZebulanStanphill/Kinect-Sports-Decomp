typedef struct Impl_824C6390 Impl_824C6390;

typedef struct ImplVtbl_824C6390 {
    void *slot0;
    int (*call)(Impl_824C6390 *self);
} ImplVtbl_824C6390;

struct Impl_824C6390 {
    ImplVtbl_824C6390 *vt;
};

typedef struct Func_824C6390 {
    int space[4];
    Impl_824C6390 *impl;
} Func_824C6390;

typedef struct State_824C6390 {
    int ctx;
    char pad04[0x1a4 - 0x4];
    int params[(0x1cc - 0x1a4) / 4];
    int **table;
    Func_824C6390 func;
    int pad1e4;
    int mode;
    int alt;
    int active;
    int dirty;
    int current;
} State_824C6390;

typedef struct Owner_824C6390 {
    char pad[0x1c];
    State_824C6390 *state;
    char pad20[0x34 - 0x20];
    void *pending;
} Owner_824C6390;

extern void fn_8234D950(void *pending);
extern void fn_827EF828(int ctx);
extern __declspec(noreturn) void fn_82F63108(void);
extern void fn_827EFFE8(int ctx);
extern void fn_8255EBE0(int ctx, int *params);
extern void fn_8255EDD0(int ctx, int *params);
extern void fn_827F0180(int ctx, int value, int a, int b, int c);

void fn_824C6390(Owner_824C6390 *param_1)
{
    State_824C6390 *s;
    Func_824C6390 *f;
    int idx;
    int *entry;

    if (param_1->pending != 0) {
        fn_8234D950(param_1->pending);
    }
    s = param_1->state;
    if (s->alt == 0) {
        fn_827EF828(s->ctx);
    }
    f = &s->func;
    if (f->impl == 0) {
        fn_82F63108();
    }
    idx = f->impl->vt->call(f->impl);
    entry = s->table[idx + 0x20];
    if (s->mode != 0) {
        if (s->alt != 0) {
            fn_8255EDD0(s->ctx, s->params);
        } else {
            fn_8255EBE0(s->ctx, s->params);
        }
    } else {
        fn_827EFFE8(s->ctx);
    }
    fn_827F0180(s->ctx, *entry, 1, 0, 0);
    s->current = idx;
    s->active = 1;
    s->dirty = 0;
}

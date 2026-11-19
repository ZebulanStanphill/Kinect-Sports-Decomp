typedef struct Renderer_82525CC0 Renderer_82525CC0;

typedef struct RendererVtable_82525CC0 {
    void *slots[43];
    int (*IsEnabled)(Renderer_82525CC0 *self); /* 0xac */
} RendererVtable_82525CC0;

struct Renderer_82525CC0 {
    RendererVtable_82525CC0 *vtable; /* 0x000 */
    unsigned char pad4[0xa40];
    void *buffers[16]; /* 0xa44 */
    void *primary[16]; /* 0xa84 */
    void *handles[16]; /* 0xac4 */
    unsigned char padB04[0x20];
    void *secondary[16]; /* 0xb24 */
};

extern int fn_82522838();
extern char *fn_82522CF8();
extern int fn_8259A230();
extern char *fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern void *fn_82549798(int size, int alignment, int count, int flags);
extern void *fn_82532AD0(int kind, void *buffer, void *primary, void *secondary);
extern int lbl_8326B7D0[];
extern int *lbl_832767CC;

static __forceinline char *Allocate_82525CC0(unsigned int size)
{
    int *g;
    char *s;
    char *r;
    unsigned int v;
    unsigned int n;

    if (lbl_832767CC == 0) {
        fn_82522838();
        if (lbl_832767CC == 0) {
            fn_82522838();
        }
    }
    g = lbl_832767CC;
    if (*g == 0) {
        fn_82522838();
    }
    fn_8259C5D8(g + 2, 1, fn_82A1BB18() + 1);
    fn_82A1BB18();
    s = fn_8259C458(lbl_8326B7D0[fn_8259A230()]);
    v = *(unsigned int *)(s + 0x28);
    *(unsigned int *)(s + 0x28) = 0x10;
    r = fn_82522CF8(s, size);
    n = v;
    if (n > 0x10) {
        n = 0x10;
    }
    *(unsigned int *)(s + 0x28) = n;
    fn_82A1BB18();
    fn_8259C738(g + 2);
    return r;
}

void fn_82525CC0(Renderer_82525CC0 *self, int set)
{
    int i;

    for (i = 0; i < 4; i++) {
        self->buffers[set * 4 + i] = Allocate_82525CC0(0x94);
        self->primary[set * 4 + i] = fn_82549798(0x11c0, 0x10, 4, 0);
        if (self->vtable->IsEnabled(self) != 0) {
            self->secondary[set * 4 + i] = fn_82549798(0x11c0, 0x10, 4, 0);
        } else {
            self->secondary[set * 4 + i] = 0;
        }
        self->handles[set * 4 + i] = fn_82532AD0(0x47, self->buffers[set * 4 + i], self->primary[set * 4 + i],
                                                 self->secondary[set * 4 + i]);
    }
}

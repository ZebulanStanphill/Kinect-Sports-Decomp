typedef struct Listener_825B53F8 Listener_825B53F8;

typedef struct Vtable_825B53F8 {
    void (*unused)();
    void (*notify)(Listener_825B53F8 *, int, int, int, float, int, int, float, float);
} Vtable_825B53F8;

struct Listener_825B53F8 {
    Vtable_825B53F8 *vt;
};

extern void fn_82851250(unsigned int, unsigned int, int, int, int, int, int, float, float);
extern unsigned int fn_8284D840(unsigned int);
extern void fn_8260B5C0(unsigned int *, int, int, float);

void fn_825B53F8(void *self, int a, int b, int c, float x, int d, int e, float y, float z)
{
    unsigned int *pair = *(unsigned int **)((char *)self + 8);
    void *owner;
    fn_82851250(pair[0], pair[1], b, c, d, e, a, y, z);
    if (fn_8284D840(pair[0]) & 8) {
        fn_8260B5C0(pair, b, c, x);
    }
    owner = *(void **)((char *)*(void **)((char *)self + 20) + 0x1fc);
    if (owner) {
        Listener_825B53F8 *listener = *(Listener_825B53F8 **)((char *)owner + 0x1a8);
        listener->vt->notify(listener, a, b, c, x, d, e, y, z);
    }
}

extern void *memset(void *, int, unsigned);
extern unsigned short lbl_820E975C;

typedef struct Impl_8228A540 Impl_8228A540;
struct Impl_8228A540 {
    struct {
        void *f0;
        void (*call)(Impl_8228A540 *self, int a, int b, unsigned short *buf, int size);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_8228A540 *impl;
} Func_8228A540;

typedef struct {
    char pad0[0x680];
    Func_8228A540 getText;
    char pad694[0x118];
    void *text;
} Obj_8228A540;

extern __declspec(noreturn) void fn_82F63108(void);
extern void fn_822A5480(void *obj, unsigned short *text);

void fn_8228A540(Obj_8228A540 *self, int a)
{
    unsigned short buf[0x800];
    Func_8228A540 *f;

    if (self->text != 0) {
        buf[0] = lbl_820E975C;
        memset(buf + 1, 0, 0xffe);
        if (self->getText.impl != 0) {
            f = &self->getText;
            if (f->impl == 0) {
                fn_82F63108();
            }
            f->impl->vt->call(f->impl, 0, a, buf, 0x800);
        }
        fn_822A5480(self->text, buf);
    }
}

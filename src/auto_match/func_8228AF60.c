extern void *memset(void *, int, unsigned);
extern unsigned short lbl_820E975C;

typedef struct Impl_8228AF60 Impl_8228AF60;
struct Impl_8228AF60 {
    struct {
        void *f0;
        void (*call)(Impl_8228AF60 *self, int a, int b, unsigned short *buf, int size);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_8228AF60 *impl;
} Func_8228AF60;

typedef struct {
    char pad0[0x680];
    Func_8228AF60 getText;
    char pad694[0x11c];
    void *text;
} Obj_8228AF60;

extern __declspec(noreturn) void fn_82F63108(void);
extern void fn_822A5480(void *obj, unsigned short *text);

void fn_8228AF60(Obj_8228AF60 *self, int a)
{
    unsigned short buf[0x800];
    Func_8228AF60 *f;

    buf[0] = lbl_820E975C;
    memset(buf + 1, 0, 0xffe);
    f = &self->getText;
    if (f->impl == 0) {
        fn_82F63108();
    }
    f->impl->vt->call(f->impl, 0, a, buf, 0x800);
    fn_822A5480(self->text, buf);
}

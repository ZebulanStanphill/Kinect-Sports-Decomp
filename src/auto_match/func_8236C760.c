typedef struct Impl_8236C760 Impl_8236C760;
typedef struct ImplVt_8236C760 {
    void *pad[3];
    void (*Delete_this)(Impl_8236C760 *self, int deallocate);
} ImplVt_8236C760;
struct Impl_8236C760 {
    ImplVt_8236C760 *vt;
};
typedef struct Func_8236C760 {
    union {
        Impl_8236C760 obj;
        void *pad[4];
    } space;
    Impl_8236C760 *impl;
} Func_8236C760;
typedef struct Cfg_8236C760 {
    int pad;
    unsigned char enabled;
} Cfg_8236C760;

extern Cfg_8236C760 *lbl_832975B0;
extern Cfg_8236C760 *fn_82250A18(void);
extern ImplVt_8236C760 lbl_821B2FF0;
extern void fn_82358D38(void *self, Func_8236C760 *func);

void fn_8236C760(void *self)
{
    Cfg_8236C760 *c = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
    Func_8236C760 f;
    if (c->enabled != 0) {
        f.impl = &f.space.obj;
        f.space.obj.vt = &lbl_821B2FF0;
        fn_82358D38(self, &f);
        if (f.impl != 0)
            f.impl->vt->Delete_this(f.impl, f.impl != &f.space.obj);
    }
}

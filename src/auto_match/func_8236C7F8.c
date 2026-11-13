typedef struct Impl_8236C7F8 Impl_8236C7F8;
typedef struct {
    void *copy;
    void *move;
    void *call;
    void (*delete_this)(Impl_8236C7F8 *, int);
} ImplVt_8236C7F8;
struct Impl_8236C7F8 {
    ImplVt_8236C7F8 *vt;
    unsigned char value;
};

typedef struct Fn_8236C7F8 {
    union {
        Impl_8236C7F8 impl;
        char space[16];
    } u;
    Impl_8236C7F8 *impl;
    int pad;
} Fn_8236C7F8;

typedef struct Inst_8236C7F8 {
    char pad0[4];
    unsigned char active;
} Inst_8236C7F8;

extern ImplVt_8236C7F8 lbl_821B3008;
extern Inst_8236C7F8 *lbl_832975B0;
extern Inst_8236C7F8 *fn_82250A18(void);
extern void fn_82358D38(void *self, Fn_8236C7F8 *fn);

void fn_8236C7F8(void *self)
{
    if ((lbl_832975B0 ? lbl_832975B0 : fn_82250A18())->active != 0) {
        Fn_8236C7F8 f;
        f.u.impl.vt = &lbl_821B3008;
        f.impl = &f.u.impl;
        fn_82358D38(self, &f);
        if (f.impl != 0) {
            f.impl->vt->delete_this(f.impl, f.impl != &f.u.impl);
        }
    }
}

typedef struct Scope_82A8CF68 Scope_82A8CF68;

struct Scope_82A8CF68 {
    void *vtbl;
    Scope_82A8CF68 *prev;
};

extern char lbl_8217E9E8[];
extern Scope_82A8CF68 lbl_832234FC;
extern unsigned int lbl_8315FAC8;
extern void *KeTlsGetValue(unsigned int index);
extern int KeTlsSetValue(unsigned int index, void *value);

Scope_82A8CF68 *fn_82A8CF68(Scope_82A8CF68 *self)
{
    Scope_82A8CF68 *cur;

    self->vtbl = lbl_8217E9E8;
    self->prev = 0;
    if (self != &lbl_832234FC) {
        cur = (Scope_82A8CF68 *)KeTlsGetValue(lbl_8315FAC8);
        self->prev = cur != 0 ? cur : &lbl_832234FC;
        KeTlsSetValue(lbl_8315FAC8, self);
    }
    return self;
}

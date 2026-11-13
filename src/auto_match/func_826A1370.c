typedef struct Shared_826A1370 {
    int refs;
    int owner;
} Shared_826A1370;

typedef struct Sub_826A1370 {
    void *vt;
} Sub_826A1370;

typedef struct Obj_826A1370 {
    void *vt0;
    int pad4[2];
    void *vtC;
    int pad10[22];
    Sub_826A1370 sub;
    int pad6c[4];
    void *f7c;
    Shared_826A1370 *shared;
    void *f84;
    char list[4];
} Obj_826A1370;

extern char lbl_82006BA8[];
extern char lbl_82006B9C[];
extern char lbl_82006B48[];
extern char lbl_82006850[];
extern char lbl_82005700[];
extern void fn_8267BE38(void *p);
extern void fn_826A0A70(void *list);
extern void fn_8269A608(Shared_826A1370 *s);
extern void fn_82687270(void *p);
extern void fn_826BF548(Sub_826A1370 *sub);
extern void fn_8267C540(Obj_826A1370 *self);

void fn_826A1370(Obj_826A1370 *self)
{
    Shared_826A1370 *shared;
    Shared_826A1370 *first = self->shared;
    self->vt0 = lbl_82006BA8;
    self->vtC = lbl_82006B9C;
    self->sub.vt = lbl_82006B48;
    if ((int)first != 0)
        first->owner = 0;
    if (self->f84 != 0)
        fn_8267BE38(self->f84);
    fn_826A0A70(self->list);
    shared = self->shared;
    if (shared != 0) {
        if (--shared->refs <= 0) {
            fn_8269A608(shared);
            fn_8267BE38(shared);
        }
    }
    if (self->f7c != 0)
        fn_82687270(self->f7c);
    fn_826BF548(&self->sub);
    self->vt0 = lbl_82006850;
    self->vtC = lbl_82005700;
    fn_8267C540(self);
}

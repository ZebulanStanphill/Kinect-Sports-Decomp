typedef struct List_82BEEDC8 {
    void *head;
    void *tail;
    int cur;
} List_82BEEDC8;

typedef struct Obj_82BEEDC8 {
    void *vtable;
    int f04[4];
    void *handle;
    int f18;
    List_82BEEDC8 list1;
    int f28[9];
    List_82BEEDC8 list2;
} Obj_82BEEDC8;

extern void fn_82BE5230(Obj_82BEEDC8 *self);
extern void *fn_82BE5340(List_82BEEDC8 *list);
extern void *fn_82BE5350(List_82BEEDC8 *list);
extern void *fn_82BE5378(List_82BEEDC8 *list);
extern void fn_82BE5478(List_82BEEDC8 *list);
extern void fn_82BE54C0(List_82BEEDC8 *list);
extern void fn_830B4CB8(void *p, int v);
extern char lbl_820EB148[];
extern void (*lbl_831751CC)(void *p);

void fn_82BEEDC8(Obj_82BEEDC8 *self)
{
    self->vtable = lbl_820EB148;
    if (self->handle != 0) {
        lbl_831751CC(self->handle);
        self->handle = 0;
    }
    for (fn_82BE5340(&self->list2); self->list2.cur != 0; fn_82BE5350(&self->list2)) {
        lbl_831751CC(fn_82BE5378(&self->list2));
    }
    fn_82BE5478(&self->list2);
    for (fn_82BE5340(&self->list1); self->list1.cur != 0; fn_82BE5350(&self->list1)) {
        fn_830B4CB8(fn_82BE5378(&self->list1), 0);
    }
    fn_82BE5478(&self->list1);
    fn_82BE54C0(&self->list2);
    fn_82BE54C0(&self->list1);
    fn_82BE5230(self);
}

extern void fn_8267C4F0(void *p);
extern void fn_826D7428(void *p);
extern char lbl_82005928[];
extern char lbl_8200BD80[];
extern char lbl_8200C610[];
extern char lbl_8200C628[];

typedef struct {
    void *vt0;
    int pad4;
    int pad8;
    void *vtC;
    void *p10;
    void *p14;
    void *p18;
    void *p1C;
} Obj;

void fn_826D8258(Obj *self)
{
    void *p;
    self->vt0 = lbl_8200C628;
    self->vtC = lbl_8200C610;
    fn_826D7428(self->p1C);
    if ((p = self->p1C) != 0) {
        fn_8267C4F0(p);
    }
    if ((p = self->p18) != 0) {
        fn_8267C4F0(p);
    }
    if ((p = self->p14) != 0) {
        fn_8267C4F0(p);
    }
    if ((p = self->p10) != 0) {
        fn_8267C4F0(p);
    }
    self->vtC = lbl_82005928;
    self->vt0 = lbl_8200BD80;
}

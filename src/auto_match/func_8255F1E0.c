extern void fn_82359C18(void *);
extern void fn_8251FA58(void *);
extern void fn_827F2BF0(void *);
extern char lbl_821C5284[];

typedef struct {
    void *vtbl;
    int pad[0x57];
    int f160;
    void *f164;
    int f168;
    int pad2[9];
    int f190;
} Obj;

void fn_8255F1E0(Obj *p)
{
    p->vtbl = lbl_821C5284;
    if (p->f168 == 0 && p->f164 != 0) {
        fn_8251FA58(p->f164);
    }
    p->f164 = 0;
    p->f168 = 0;
    p->f160 = 0;
    fn_82359C18(&p->f190);
    fn_827F2BF0(p);
}

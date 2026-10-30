typedef struct Obj {
    char pad[0x134];
    int x134;
} Obj;

extern void *fn_82BE56B0(unsigned int size);
extern Obj *fn_82BE9000(void *mem);
extern Obj *lbl_8322B22C;

Obj *fn_82BE9078(void)
{
    if (lbl_8322B22C == 0) {
        void *m = fn_82BE56B0(0x138);
        lbl_8322B22C = m ? fn_82BE9000(m) : 0;
        if (lbl_8322B22C != 0)
            lbl_8322B22C->x134 = 0;
    }
    return lbl_8322B22C;
}

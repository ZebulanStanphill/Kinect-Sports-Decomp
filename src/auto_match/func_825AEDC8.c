extern void *fn_8265C9E0(unsigned int size);
extern void fn_828B5608(void *p);
extern void fn_828BDDA0(void *p);
extern void *lbl_821C8118[];
extern void *lbl_821C8198[];

typedef struct {
    void **vt;
    char pad[0x4c];
    void **vt2;
    char pad2[0x2c];
    int x80;
    char sub[0xc];
} Obj_825AEDC8;

Obj_825AEDC8 *fn_825AEDC8(void)
{
    Obj_825AEDC8 *p = (Obj_825AEDC8 *)fn_8265C9E0(0x90);
    if (p != 0) {
        fn_828BDDA0(p);
        p->vt = lbl_821C8118;
        p->vt2 = lbl_821C8198;
        p->x80 = 0;
        fn_828B5608(p->sub);
        return p;
    }
    return 0;
}

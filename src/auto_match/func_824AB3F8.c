extern void *fn_8265C9E0(int size);
extern void fn_82F53A20(void *p, int a);
extern char lbl_821BFB88[];

typedef struct Obj_824AB3F8 {
    char *vt;
    int pad[0xe];
    int f3c;
    int f40;
    int f44;
} Obj_824AB3F8;

Obj_824AB3F8 *fn_824AB3F8(int a)
{
    Obj_824AB3F8 *p = (Obj_824AB3F8 *)fn_8265C9E0(0x48);
    if (p != 0) {
        fn_82F53A20(p, a);
        p->f3c = 0;
        p->vt = lbl_821BFB88;
        p->f40 = 0;
        p->f44 = 0;
        return p;
    }
    return 0;
}

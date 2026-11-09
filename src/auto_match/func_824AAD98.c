extern void *fn_8265C9E0(int size);
extern void fn_82F53A20(void *p, int a);
extern char lbl_821BFAF4[];

typedef struct Obj_824AAD98 {
    char *vt;
    int pad[0xe];
    int f3c;
} Obj_824AAD98;

Obj_824AAD98 *fn_824AAD98(int a)
{
    Obj_824AAD98 *p = (Obj_824AAD98 *)fn_8265C9E0(0x40);
    if (p != 0) {
        fn_82F53A20(p, a);
        p->f3c = 0;
        p->vt = lbl_821BFAF4;
        return p;
    }
    return 0;
}

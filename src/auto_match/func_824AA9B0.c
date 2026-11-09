extern void *fn_8265C9E0(int size);
extern void fn_82F53A20(void *p, int a);
extern char lbl_821BFA5C[];

typedef struct Obj_824AA9B0 {
    char *vt;
    int pad[0xe];
    int f3c;
    int f40;
    int f44;
} Obj_824AA9B0;

Obj_824AA9B0 *fn_824AA9B0(int a)
{
    Obj_824AA9B0 *p = (Obj_824AA9B0 *)fn_8265C9E0(0x48);
    if (p != 0) {
        fn_82F53A20(p, a);
        p->f3c = 0;
        p->vt = lbl_821BFA5C;
        p->f40 = 0;
        p->f44 = 0;
        return p;
    }
    return 0;
}

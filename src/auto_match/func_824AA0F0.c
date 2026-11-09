extern void *fn_8265C9E0(int size);
extern void fn_82F53A20(void *p, int a);
extern char lbl_821BF9E8[];

typedef struct Obj_824AA0F0 {
    char *vt;
    int pad[0xe];
    int f3c;
    int f40;
    int f44;
} Obj_824AA0F0;

Obj_824AA0F0 *fn_824AA0F0(int a)
{
    Obj_824AA0F0 *p = (Obj_824AA0F0 *)fn_8265C9E0(0x48);
    if (p != 0) {
        fn_82F53A20(p, a);
        p->f3c = 0;
        p->vt = lbl_821BF9E8;
        p->f40 = 0;
        p->f44 = 0;
        return p;
    }
    return 0;
}

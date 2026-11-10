extern void *fn_8265C9E0(int size);
extern void fn_82F53A20(void *p, void *src);
extern char lbl_821BF8A8[];

typedef struct {
    int pad[0x12];
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
} Src_824A8AA8;

typedef struct {
    char *vt;
    int pad[0xe];
    float f3c;
    float f40;
    float f44;
    float f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
} Obj_824A8AA8;

Obj_824A8AA8 *fn_824A8AA8(Src_824A8AA8 *src)
{
    Obj_824A8AA8 *p = (Obj_824A8AA8 *)fn_8265C9E0(0x60);
    if (p != 0) {
        fn_82F53A20(p, src);
        p->vt = lbl_821BF8A8;
        p->f3c = src->f48;
        p->f40 = src->f4c;
        p->f44 = src->f50;
        p->f48 = src->f54;
        p->f4c = src->f58;
        p->f50 = 0;
        p->f54 = 0;
        p->f58 = 0;
        p->f5c = 0;
        return p;
    }
    return 0;
}

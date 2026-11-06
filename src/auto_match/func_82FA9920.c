typedef struct Obj_82FA9920 {
    int pad0[2];
    int n8;
    int nc;
    int pad1[4];
    int n20;
    int n24;
    int pad2[3];
    int n34;
    int pad3[2];
    int p40;
    int n44;
} Obj_82FA9920;
typedef struct Src_82FA9920 { int n0; int n4; int n8; } Src_82FA9920;

extern int fn_82FAE140(int a);
extern int fn_82FACCE8(int a, int pos, unsigned char flag);

int fn_82FA9920(Obj_82FA9920 *o, int pos, Src_82FA9920 *s, unsigned char flag)
{
    int r = 0;
    int v;
    if (o->p40 != 0) {
        int np;
        o->n44 = pos;
        np = pos;
        if (s->n0 > 0) {
            np = s->n8 + pos;
        } else if (flag) {
            np = pos - fn_82FAE140(*(int *)(o->p40 + 0x60));
        }
        r = fn_82FACCE8(o->p40, np, flag) + (pos - np);
    }
    v = -r;
    o->n20 = v;
    o->n24 = 0;
    if (v >= o->n34) {
        v = o->n34;
    }
    o->n8 = v;
    o->nc = r;
    return r;
}

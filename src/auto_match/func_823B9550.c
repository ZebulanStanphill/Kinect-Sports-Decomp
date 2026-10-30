typedef struct { void *vt; int val; } Sub_823B9550;
typedef struct {
    void *vt;
    int uses;
    int weaks;
    Sub_823B9550 sub;
} Blk_823B9550;
extern Blk_823B9550 *fn_8265C9E0(unsigned int);
extern char lbl_821AD588[];
extern char lbl_821B9BC8[];

void **fn_823B9550(void **out, void *unused, int param_3)
{
    Blk_823B9550 *p = fn_8265C9E0(0x14);
    if (p != 0) {
        Sub_823B9550 *s;
        p->uses = 1;
        p->vt = lbl_821AD588;
        p->weaks = 1;
        s = &p->sub;
        if (s != 0) {
            s->val = param_3;
            s->vt = lbl_821B9BC8;
        }
    } else {
        p = 0;
    }
    out[1] = p;
    out[0] = &p->sub;
    return out;
}

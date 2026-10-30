typedef struct { void *vt; int val; } Sub_823611E8;
typedef struct {
    void *vt;
    int uses;
    int weaks;
    int pad;
    Sub_823611E8 sub;
} Blk_823611E8;
extern Blk_823611E8 *fn_8265C9E0(unsigned int);
extern char lbl_821A8D8C[];
extern char lbl_821B9BC8[];

void **fn_823611E8(void **out, void *unused, int param_3)
{
    Blk_823611E8 *p = fn_8265C9E0(0x80);
    if (p != 0) {
        Sub_823611E8 *s;
        p->uses = 1;
        p->vt = lbl_821A8D8C;
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

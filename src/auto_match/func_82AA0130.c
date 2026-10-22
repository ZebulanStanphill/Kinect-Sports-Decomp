typedef struct Rec {
    unsigned int type : 6;
    unsigned int rest0 : 26;
    unsigned int f31 : 1;
    unsigned int f30 : 1;
    unsigned int dirty : 1;
    unsigned int rest1 : 29;
    union {
        struct {
            unsigned int n0 : 1;
            unsigned int n1 : 1;
            unsigned int n2 : 1;
            unsigned int kind : 5;
            unsigned int pad : 24;
        } bits;
        unsigned char b[4];
        unsigned int w;
    } u;
} Rec;
extern int lbl_831606B8[];
extern int lbl_83160870[];
extern unsigned char fn_82AA0090(int ctx, unsigned char v);

static unsigned char Rec_isDirty(Rec *r)
{
    return !r->f31 && !r->f30 && r->dirty;
}

void fn_82AA0130(Rec *r, unsigned char enable, unsigned char skip, int a4, int a5, int ctx)
{
    unsigned int kind;

    if (!enable)
        return;
    if (skip)
        return;
    if (Rec_isDirty(r)) {
        kind = r->u.bits.kind;
        if (lbl_831606B8[kind] >= 1 && !r->u.bits.n0)
            r->u.b[1] = fn_82AA0090(ctx, r->u.b[1]);
        if (lbl_831606B8[kind] >= 2 && !r->u.bits.n1)
            r->u.b[2] = fn_82AA0090(ctx, r->u.b[2]);
        if ((lbl_831606B8[kind] >= 3 || lbl_83160870[r->type] == 1) && !r->u.bits.n2)
            r->u.b[3] = fn_82AA0090(ctx, (unsigned char)r->u.w);
        if (lbl_83160870[r->type] == 2)
            r->u.b[3] = fn_82AA0090(ctx, r->u.b[3]);
        r->dirty = 0;
    }
}

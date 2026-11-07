typedef struct Obj_8257DE30 Obj_8257DE30;
typedef struct Ctx_8257DE30 Ctx_8257DE30;

typedef struct VT_8257DE30 {
    void *f0;
    void *f4;
    void *f8;
    void (*fC)(Obj_8257DE30 *o, Ctx_8257DE30 *ctx, int a);
    void (*f10)(Obj_8257DE30 *o, Ctx_8257DE30 *ctx, int a);
} VT_8257DE30;

struct Obj_8257DE30 {
    VT_8257DE30 *vt;
};

typedef struct Node_8257DE30 {
    int f0;
    struct Node_8257DE30 *next;
} Node_8257DE30;

typedef struct Bucket_8257DE30 {
    int f0;
    Node_8257DE30 *head;
} Bucket_8257DE30;

typedef struct Container_8257DE30 {
    int f0;
    Bucket_8257DE30 *buckets;
} Container_8257DE30;

struct Ctx_8257DE30 {
    int f0;
    int f4;
    int f8;
    int idx;
};

typedef struct Range_8257DE30 {
    int a;
    int start;
    int end;
} Range_8257DE30;

extern Range_8257DE30 lbl_8218E308[];

void fn_8257DE30(Container_8257DE30 *c, int k, Ctx_8257DE30 *ctx, int p4, int p5)
{
    Bucket_8257DE30 *b = c->buckets;
    int idx = ctx->idx;
    int i;

    for (i = lbl_8218E308[k].start; i < lbl_8218E308[k].end; i++) {
        Node_8257DE30 *n = b[i].head;
        int called = 0;
        while (n != 0) {
            Obj_8257DE30 *o = (n != 0) ? (Obj_8257DE30 *)((char *)n - 0x10) : 0;
            if (((int *)o)[idx + 12] != 0 &&
                *((unsigned char *)o + p4 + 0x48) != 0) {
                if (called == 0) {
                    o->vt->fC(o, ctx, p5);
                    called = 1;
                }
                o->vt->f10(o, ctx, p4);
            }
            n = n->next;
        }
    }
}

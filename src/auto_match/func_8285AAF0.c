typedef struct Xform_8285AAF0 {
    char pad[0x10];
    float matrix[0x21];
    void *link;
} Xform_8285AAF0;

typedef struct Out_8285AAF0 {
    int pad;
    float pos[3];
} Out_8285AAF0;

typedef struct Node_8285AAF0 {
    int pad[2];
    int outOffset;
} Node_8285AAF0;

typedef struct Ctx_8285AAF0 {
    char pad[0x64];
    int xformBase;
    char *outBase;
} Ctx_8285AAF0;

extern void fn_8280AD30(float *m, float *in, float *out);
extern void fn_82810360(float *in, float *out);

void fn_8285AAF0(Ctx_8285AAF0 *self, Node_8285AAF0 *node, float *pos)
{
    Xform_8285AAF0 *xf = (Xform_8285AAF0 *)(self->xformBase + (int)node);
    Out_8285AAF0 *out = (Out_8285AAF0 *)(self->outBase + node->outOffset);
    if (xf->link != 0)
        fn_8280AD30(xf->matrix, pos, out->pos);
    else
        fn_82810360(pos, out->pos);
}

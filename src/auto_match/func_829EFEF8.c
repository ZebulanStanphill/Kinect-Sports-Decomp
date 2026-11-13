// NUI frame processing entry: validates the arguments and the two surfaces (a 320x240
// and an 80x60 one of format 0x1A220058, E_INVALIDARG otherwise; 0x83010068 when the
// frame types are not 1 and 0), copies the entry's mode/settings, runs the per-entry
// set-up (fn_829F4B50), snapshots two vectors and processes the entry (fn_829EFDB0).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct SurfaceDesc_829EFEF8 {
    int format;                 /* 0x00 */
    int pad4[5];
    unsigned int width;         /* 0x18 */
    unsigned int height;        /* 0x1c */
} SurfaceDesc_829EFEF8;

typedef struct Frame_829EFEF8 {
    char pad0[0x10];
    int type;                   /* 0x10 */
    void *surface;              /* 0x14 */
} Frame_829EFEF8;

typedef struct Entry_829EFEF8 {
    char pad0[0x30];
    int mode;                   /* 0x30 */
    int a;                      /* 0x34 */
    int pad38;
    int b;                      /* 0x3c */
    char pad40[0x10];
    char body[0x15c];           /* 0x50 */
    int flagA;                  /* 0x1ac */
    int pad1b0[3];
    int flagB;                  /* 0x1bc */
} Entry_829EFEF8;

typedef struct Data_829EFEF8 {
    char pad0[0x20];
    __vector4 v;                /* 0x20 */
} Data_829EFEF8;

typedef struct Context_829EFEF8 {
    char pad0[0x140];
    char setup[0x10];           /* 0x140 */
    __vector4 v150;             /* 0x150 */
    char pad160[0x90];
    __vector4 v1f0;             /* 0x1f0 */
    char pad200[0x1c0];
    __vector4 saved150;         /* 0x3c0 */
    __vector4 saved1f0;         /* 0x3d0 */
    char pad3e0[0x30];
    int a;                      /* 0x410 */
    int b;                      /* 0x414 */
    int notMode2;               /* 0x418 */
} Context_829EFEF8;

extern void fn_8263C548(void *surface, int level, SurfaceDesc_829EFEF8 *desc);
extern int fn_829F4B50(void *a, void *b, int idx, char *base, void *extra, void *p6, void *p7);
extern int fn_829EFDB0(void *entry, int a, int b, Context_829EFEF8 *ctx, __vector4 v, float f);


int fn_829EFEF8(Context_829EFEF8 *ctx, int index, char *data, Frame_829EFEF8 *color, int unused,
                Frame_829EFEF8 *depth)
{
    SurfaceDesc_829EFEF8 colorDesc;
    SurfaceDesc_829EFEF8 depthDesc;
    Entry_829EFEF8 *entry;
    void *body;

    if (ctx == 0 || data == 0 || color == 0 || depth == 0 || color->surface == 0 || depth->surface == 0)
        return 0x80070057;
    if (color->type != 1 || depth->type != 0)
        return 0x83010068;

    fn_8263C548(color->surface, 0, &colorDesc);
    fn_8263C548(depth->surface, 0, &depthDesc);
    if (colorDesc.format != 0x1A220058 || depthDesc.format != 0x1A220058 || colorDesc.width != 320 ||
        colorDesc.height != 240 || depthDesc.width != 80 || depthDesc.height != 60)
        return 0x80070057;

    entry = (Entry_829EFEF8 *)(data + index * 0x1c0);
    body = entry->body;
    if (entry->mode == 2)
        ctx->notMode2 = 0;
    else
        ctx->notMode2 = 1;
    ctx->a = entry->a;
    ctx->b = entry->b;
    fn_829F4B50(color->surface, depth->surface, index, data, ctx->setup, 0, 0);
    ctx->saved150 = ctx->v150;
    ctx->saved1f0 = ctx->v1f0;
    return fn_829EFDB0(body, entry->flagA != 0, entry->flagB != 0, ctx, ((Data_829EFEF8 *)data)->v,
                       58.512135f);
}

typedef struct Info_8279A488 {
    int pad0[2];
    float width;   /* 0x08 */
    float height;  /* 0x0c */
    float depth;   /* 0x10 */
} Info_8279A488;

typedef struct Src_8279A488 {
    int pad0[3];
    Info_8279A488 *info; /* 0x0c */
} Src_8279A488;

typedef struct Obj_8279A488 {
    int pad0[16];
    float maxWidth;  /* 0x40 */
    float maxHeight; /* 0x44 */
    float maxDepth;  /* 0x48 */
} Obj_8279A488;

extern float lbl_82014E48;
extern float lbl_82014E4C;

void fn_8279A488(Obj_8279A488 *self, Src_8279A488 *src, float scale)
{
    float width = src->info->width;
    float height = src->info->height;
    float v;
    if (width == 0.0f)
        width = lbl_82014E4C;
    if (height == 0.0f)
        height = lbl_82014E48;
    v = width * scale;
    self->maxWidth = v < self->maxWidth ? self->maxWidth : v;
    v = height * scale;
    self->maxHeight = v >= self->maxHeight ? v : self->maxHeight;
    v = src->info->depth * scale;
    self->maxDepth = v >= self->maxDepth ? v : self->maxDepth;
}

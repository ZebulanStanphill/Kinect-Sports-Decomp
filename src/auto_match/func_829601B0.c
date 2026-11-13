typedef struct Rect_829601B0 {
    int pad;
    int x4;
    int x8;
    int xc;
    int x10;
} Rect_829601B0;

typedef struct Obj_829601B0 {
    char pad[0x104];
    Rect_829601B0 *rect;
} Obj_829601B0;

extern int fn_8295FA70(Obj_829601B0 *self, int mode, int a, int b, int c, int d, int e, int f);

int fn_829601B0(Obj_829601B0 *self)
{
    Rect_829601B0 *r = self->rect;
    return fn_8295FA70(self, 0xf, r->x10, r->x8, r->xc, r->x4, 0, 0);
}

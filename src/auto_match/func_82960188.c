typedef struct Rect_82960188 {
    int pad;
    int x4;
    int x8;
    int xc;
    int x10;
} Rect_82960188;

typedef struct Obj_82960188 {
    char pad[0x104];
    Rect_82960188 *rect;
} Obj_82960188;

extern int fn_8295FA70(Obj_82960188 *self, int mode, int a, int b, int c, int d, int e, int f);

int fn_82960188(Obj_82960188 *self)
{
    Rect_82960188 *r = self->rect;
    return fn_8295FA70(self, 0xe, r->x10, r->x8, r->xc, r->x4, 0, 0);
}

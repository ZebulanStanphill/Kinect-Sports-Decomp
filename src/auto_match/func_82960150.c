typedef struct Rect_82960150 {
    int pad;
    int x4;
    int x8;
    int xc;
    int x10;
} Rect_82960150;

typedef struct Obj_82960150 {
    char pad[0x104];
    Rect_82960150 *rect;
} Obj_82960150;

extern int fn_8295FA70(Obj_82960150 *self, int mode, int a, int b, int c, int d, int e, int f);

int fn_82960150(Obj_82960150 *self)
{
    Rect_82960150 *r = self->rect;
    return fn_8295FA70(self, 6, r->x10, r->x8, r->xc, r->x4, 0, 0);
}

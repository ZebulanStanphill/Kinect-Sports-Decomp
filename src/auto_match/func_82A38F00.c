typedef struct VT_82A38F00 {
    void *s[5];
    int (*f14)(unsigned int, int, int, int, int, int, int, int);
} VT_82A38F00;
typedef struct Obj_82A38F00 { VT_82A38F00 *vt; char pad[0x4c]; char sub[4]; } Obj_82A38F00;
typedef struct Node_82A38F00 Node_82A38F00;
extern Node_82A38F00 *fn_82A381F0(void *, unsigned int, int);
extern int fn_82A33FC0(Obj_82A38F00 *, Node_82A38F00 *, int, int, int, int, int, int, int);
extern Obj_82A38F00 *lbl_83219598;

int fn_82A38F00(unsigned int handle, int a, int b, int c, int d, int e, int f, int g)
{
    Obj_82A38F00 *o = lbl_83219598;
    Node_82A38F00 *n = fn_82A381F0(o->sub, handle, 0);

    if (n != 0) {
        return fn_82A33FC0(o, n, e, f, d, g, a, 0, 1);
    }
    return o->vt->f14(handle, a, b, c, d, e, f, g);
}

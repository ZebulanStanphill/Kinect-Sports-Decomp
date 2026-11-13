typedef struct VT_82A38FB0 {
    void *s[4];
    int (*f10)(unsigned int, int, unsigned int, int, int, int, int, int);
} VT_82A38FB0;
typedef struct Obj_82A38FB0 { VT_82A38FB0 *vt; char pad[0x4c]; char sub[4]; } Obj_82A38FB0;
typedef struct Node_82A38FB0 Node_82A38FB0;
extern Node_82A38FB0 *fn_82A381F0(void *, unsigned int, int);
extern int fn_82A33FC0(Obj_82A38FB0 *, Node_82A38FB0 *, int, int, int, int, int, int, int);
extern Obj_82A38FB0 *lbl_83219598;

int fn_82A38FB0(unsigned int handle, int a, unsigned int b, int c, int d, int e, int f, int g)
{
    Obj_82A38FB0 *o = lbl_83219598;
    Node_82A38FB0 *n = fn_82A381F0(o->sub, handle, 0);

    if (n != 0) {
        if (b == 0)
            return fn_82A33FC0(o, n, e, f, d, g, a, 0, 0);
        return fn_82A33FC0(o, n, e, f, d, g, a, c, 0);
    }
    return o->vt->f10(handle, a, b, c, d, e, f, g);
}

typedef struct Node_82BB4F18 Node_82BB4F18;
typedef unsigned char (*Pred_82BB4F18)(Node_82BB4F18 *);
struct Node_82BB4F18 {
    Pred_82BB4F18 *vt;
};
typedef struct Self_82BB4F18 {
    int pad0;
    int kind;
} Self_82BB4F18;

unsigned char fn_82BB4F18(Self_82BB4F18 *self, Node_82BB4F18 *n)
{
    if (self->kind == 3) {
        return !n->vt[0x18 / 4](n) && !n->vt[0x38 / 4](n);
    } else if (self->kind == 2) {
        return !n->vt[0x14 / 4](n) && !n->vt[0x38 / 4](n);
    }
    return 1;
}

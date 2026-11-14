typedef struct Inner_82414F58 {
    int unk0;
    int unk4;
    int value;
} Inner_82414F58;

typedef struct Node_82414F58 {
    unsigned int value;
    int unk4;
    int inner;
} Node_82414F58;

typedef struct Expr_82414F58 Expr_82414F58;
typedef struct {
    unsigned char (*evaluate)(Expr_82414F58 *self);
} ExprVtbl_82414F58;

struct Expr_82414F58 {
    ExprVtbl_82414F58 *vt;
    Node_82414F58 *left;
    Node_82414F58 *right;
};

unsigned char fn_82414F58(Expr_82414F58 *self)
{
    Node_82414F58 *left = self->left;
    unsigned char sum = left != 0 && self->right != 0 && self->right->value + left->value == 10;
    unsigned char single;
    if (sum)
        return self->right->inner != 0;
    single = left != 0 && left->value == 10;
    if (single)
        return left->inner != 0 && ((Inner_82414F58 *)left->inner)->value != 0;
    return self->vt->evaluate(self);
}

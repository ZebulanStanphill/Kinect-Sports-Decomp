// Transforms every point of the node by the matrix (XMVector3Transform shape, w cleared
// through the game's reserved zero vector v77 and select mask v67), then recurses into each
// child's node (the sub-object at +0x98 of the child's object) with the child's own matrix.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Matrix_82556448 {
    __vector4 r[4];
} Matrix_82556448;

typedef struct Child_82556448 {
    char *object;               // 0x00
    int pad04;
    Matrix_82556448 *matrix;    // 0x08
} Child_82556448;

typedef struct Node_82556448 {
    char pad00[0x14];
    __vector4 *points;          // 0x14
    int pointCount;             // 0x18
    char pad1c[8];
    Child_82556448 **children;  // 0x24
    int childCount;             // 0x28
} Node_82556448;

static __forceinline __vector4 Transform3(__vector4 v, Matrix_82556448 m)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmaddfp(m.r[2], z, m.r[3]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}

void fn_82556448(Node_82556448 *self, const Matrix_82556448 *matrix)
{
    int i;
    int j;

    for (i = 0; i < self->pointCount; i++) {
        __vector4 *point = &self->points[i];
        __vector4 v, zero, mask;

        v = Transform3(*point, *matrix);
        zero = __VMXGetReg(77);
        mask = __VMXGetReg(67);
        *point = __vsel(v, zero, mask);
    }
    for (j = 0; j < self->childCount; j++) {
        Child_82556448 *child = self->children[j];
        Node_82556448 *node = (Node_82556448 *)(child->object + 0x98);

        if (node != 0) {
            fn_82556448(node, child->matrix);
        }
    }
}

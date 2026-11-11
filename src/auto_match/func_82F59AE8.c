// XNA Math style helper: rotation matrix of a quaternion (fn_82F59508) multiplied by the
// translation matrix of an offset (XMMatrixTranslationFromVector, inlined; fn_82F59668 is
// XMMatrixMultiply with both matrices by value).
// The matrix results are written as explicit result pointers (the ABI's hidden return
// pointer in r3): the original forwards its own result pointer to fn_82F59668 and returns
// what that call returns, and keeps the first store to the translation's last row, which
// only the pointer form reproduces (a by-value XMMATRIX return copies through a temporary
// in C, and reloads r3 from the saved register in C++).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

#define VPACK_NORMSHORT2 1

__vector4 __vspltisw(int value);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

typedef struct {
    __vector4 r[4];
} XMMATRIX;

XMMATRIX *fn_82F59508(XMMATRIX *result, const __vector4 *quaternion);
XMMATRIX *fn_82F59668(XMMATRIX *result, XMMATRIX a, XMMATRIX b);

static __forceinline XMMATRIX *TranslationFromVector(XMMATRIX *m, __vector4 offset)
{
    m->r[3] = __vupkd3d(__vspltisw(0), VPACK_NORMSHORT2);
    m->r[0] = __vpermwi(m->r[3], 234);
    m->r[1] = __vpermwi(m->r[3], 186);
    m->r[2] = __vpermwi(m->r[3], 174);
    m->r[3] = __vrlimi(m->r[3], offset, 0xe, 0);
    return m;
}

XMMATRIX *fn_82F59AE8(XMMATRIX *result, __vector4 offset, __vector4 rotation)
{
    XMMATRIX translation;
    XMMATRIX rotationMatrix;

    TranslationFromVector(&translation, offset);
    return fn_82F59668(result, *fn_82F59508(&rotationMatrix, &rotation), translation);
}

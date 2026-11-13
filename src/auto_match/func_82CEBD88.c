/* hkMatrix3::transpose(): swaps the off-diagonal elements in place (columns are 16-byte hkVector4s). */
typedef struct hkMatrix3_82CEBD88 {
    float m_col[3][4];
} hkMatrix3_82CEBD88;

/* hkAlgorithm::swap */
static __forceinline void swap_82CEBD88(float *x, float *y)
{
    float t = *x;
    *x = *y;
    *y = t;
}

#define M(r, c) self->m_col[c][r]

void fn_82CEBD88(hkMatrix3_82CEBD88 *self)
{
    swap_82CEBD88(&M(0, 1), &M(1, 0));
    swap_82CEBD88(&M(0, 2), &M(2, 0));
    swap_82CEBD88(&M(1, 2), &M(2, 1));
}

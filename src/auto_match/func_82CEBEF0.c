#include "xdk/vectorintrinsics.h"

typedef struct Matrix3_82CEBEF0 {
    __vector4 col[3];
} Matrix3_82CEBEF0;

void fn_82CEBEF0(Matrix3_82CEBEF0 *out, const __vector4 *diag, const Matrix3_82CEBEF0 *m)
{
    out->col[0] = __vmulfp(m->col[0], *diag);
    out->col[1] = __vmulfp(m->col[1], *diag);
    out->col[2] = __vmulfp(m->col[2], *diag);
}

#include "xdk/vectorintrinsics.h"

struct Matrix_8280D310 {
    __vector4 columns[4];

    Matrix_8280D310()
    {
    }

    Matrix_8280D310(const Matrix_8280D310 &other)
    {
        columns[0] = other.columns[0];
        columns[1] = other.columns[1];
        columns[2] = other.columns[2];
        columns[3] = other.columns[3];
    }

    Matrix_8280D310 &operator=(const Matrix_8280D310 &other)
    {
        columns[0] = other.columns[0];
        columns[1] = other.columns[1];
        columns[2] = other.columns[2];
        columns[3] = other.columns[3];
        return *this;
    }
};

extern "C" Matrix_8280D310 *fn_8253B8E8(Matrix_8280D310 *out, float angle);
extern "C" Matrix_8280D310 *fn_8253BAB8(Matrix_8280D310 *out, float angle);
extern "C" Matrix_8280D310 *fn_8253BC88(Matrix_8280D310 *out, float angle);

extern "C" void fn_8280D310(Matrix_8280D310 *out, char axis, float angle)
{
    Matrix_8280D310 temporary;
    Matrix_8280D310 result;

    switch (axis) {
    case 'X':
    case 'x':
        result = *fn_8253BC88(&temporary, angle);
        break;
    case 'Y':
    case 'y':
        result = *fn_8253BAB8(&temporary, angle);
        break;
    case 'Z':
    case 'z':
        result = *fn_8253B8E8(&temporary, angle);
        break;
    }
    *out = result;
}

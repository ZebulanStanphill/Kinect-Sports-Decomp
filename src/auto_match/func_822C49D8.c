/* Reports whether direction is within 2.5 degrees (0.0436 rad) of the object's facing direction. */

#include "xdk/vectorintrinsics.h"

double fabs(double x);

extern __vector4 *fn_822B69A0(__vector4 *out, const void *object);
extern float fn_8255A260(__vector4 first, __vector4 second);

int fn_822C49D8(const void *object, __vector4 direction)
{
    __vector4 facing;

    return (float)fabs(fn_8255A260(*fn_822B69A0(&facing, object), direction)) < 0.043633234f;
}

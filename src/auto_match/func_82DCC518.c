#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82132D10;
extern const __vector4 lbl_8209AB20;

void fn_82DCC518(const __vector4 *first, const __vector4 *second, __vector4 *outFirst, __vector4 *outSecond)
{
    __vector4 a = *first;
    __vector4 difference = __vsubfp(a, *second);
    __vector4 reciprocal = __vrefp(difference);
    reciprocal = __vmaddfp(__vnmsubfp(reciprocal, difference, lbl_82132D10), reciprocal, reciprocal);
    *outFirst = __vmulfp(a, reciprocal);
    *outSecond = __vmulfp(*second, reciprocal);
    *outSecond = __vxor(*outSecond, lbl_8209AB20);
}

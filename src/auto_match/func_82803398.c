#include "xdk/vectorintrinsics.h"

__vector4 fn_82803398(__vector4 shift, __vector4 v)
{
    return __vsubuwm(__vsl(__vslo(v, shift), shift), v);
}

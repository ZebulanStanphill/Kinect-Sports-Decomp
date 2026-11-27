#include "xdk/vectorintrinsics.h"

typedef struct Parameters_82D0B218 {
    char padding[8];
    const char *vectors; /* 0x8 */
} Parameters_82D0B218;

typedef struct Coordinates_82D0B218 {
    char padding[0x20];
    int x; /* 0x20 */
    int y; /* 0x24 */
    int z; /* 0x28 */
} Coordinates_82D0B218;

void fn_82D0B218(__vector4 *out, const Parameters_82D0B218 *parameters,
                 const Coordinates_82D0B218 *coordinates)
{
    __vector4 point;
    point.vector4_f32[0] = (float)coordinates->x;
    point.vector4_f32[1] = (float)coordinates->y;
    point.vector4_f32[2] = (float)coordinates->z;
    point.vector4_f32[3] = 0.0f;
    *out = __vmaddfp(point, *(const __vector4 *)(parameters->vectors + 0x110),
                     *(const __vector4 *)(parameters->vectors + 0xf0));
}

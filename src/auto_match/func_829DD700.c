#include "xdk/vectorintrinsics.h"

double fabs(double x);

typedef struct Settings_829DD700 {
    char pad0[0x8f0cc];
    float minDot;         /* 0x8f0cc */
    float maxWDifference; /* 0x8f0d0 */
} Settings_829DD700;

extern Settings_829DD700 *lbl_832179FC;

int fn_829DD700(__vector4 a, __vector4 b)
{
    Settings_829DD700 *settings = lbl_832179FC;
    __vector4 dot = __vmsum3fp(a, b);

    if (dot.vector4_f32[0] < settings->minDot) {
        return 0;
    }
    if (fabs(a.vector4_f32[3] - b.vector4_f32[3]) > settings->maxWDifference) {
        return 0;
    }
    return 1;
}

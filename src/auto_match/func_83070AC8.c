#include "xdk/vectorintrinsics.h"

typedef struct Tester_83070AC8 {
    char unk000[0xd20];
    float radius; /* 0xD20 */
    int enabled;  /* 0xD24 */
} Tester_83070AC8;

extern unsigned char fn_830708B8(float radius, int flag, __vector4 a, __vector4 b, __vector4 c);

unsigned char fn_83070AC8(Tester_83070AC8 *tester, __vector4 *points, int index)
{
    __vector4 point;
    __vector4 edgeA1;
    __vector4 edgeB1;
    __vector4 edgeA2;
    __vector4 edgeB2;
    unsigned char isTwo;
    unsigned char isFour;
    unsigned char hitA;
    unsigned char hitB;

    if (tester->enabled != 0) {
        edgeB1 = points[9];
        edgeA1 = points[7];
        edgeB2 = points[13];
        edgeA2 = points[11];
        point = points[index + 2];
        isTwo = index == 2;
        isFour = index == 4;
        hitA = fn_830708B8(tester->radius, isTwo || !isFour, edgeA1, edgeB1, point);
        hitB = fn_830708B8(tester->radius, isTwo || isFour, edgeA2, edgeB2, point);
        return hitA || hitB;
    }
    return 0;
}

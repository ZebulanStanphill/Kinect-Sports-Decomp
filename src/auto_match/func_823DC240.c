typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

int fn_823DC240(__vector4 *points, __vector4 *vertices, int *closest)
{
    int pairs[6][2] = {{0, 1}, {0, 2}, {1, 0}, {1, 2}, {2, 0}, {2, 1}};
    float best;
    int bestIndex;
    int i;
    __vector4 a;
    __vector4 b;
    __vector4 lengthA;
    __vector4 lengthB;
    float distance;

    a = points[0];
    b = points[1];
    best = 3.402823466e+38f;
    bestIndex = 0;
    for (i = 0; i < 6; i++) {
        __vector4 da = __vsubfp(a, vertices[pairs[i][0]]);
        __vector4 db = __vsubfp(b, vertices[pairs[i][1]]);
        lengthA = __vmsum3fp(da, da);
        lengthB = __vmsum3fp(db, db);
        distance = lengthA.vector4_f32[0] + lengthB.vector4_f32[0];
        if (distance < best) {
            best = distance;
            bestIndex = i;
        }
    }
    closest[0] = pairs[bestIndex][0];
    closest[1] = pairs[bestIndex][1];
    return 2;
}

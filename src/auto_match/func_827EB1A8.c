typedef struct Plane_827EB1A8 {
    float normal[3]; /* 0x0 */
    float distance;  /* 0xc */
} Plane_827EB1A8;

extern double fn_8281D480(Plane_827EB1A8 *plane, float *point);

int fn_827EB1A8(Plane_827EB1A8 *planes, unsigned char count, unsigned char *activeMask, float *center,
                float radius, unsigned char *lastPlane)
{
    unsigned char index = *lastPlane;
    unsigned char bit;
    unsigned char inside = 1;
    unsigned char i;
    double distance;

    if (index >= count) {
        index = 0;
    }
    bit = 0x80 >> index;

    for (i = 0; i < count; i++) {
        if ((*activeMask & bit) != 0) {
            distance = fn_8281D480(&planes[index], center);
            if (distance > radius) {
                *lastPlane = index;
                return 0;
            }
            if (distance <= -radius) {
                *activeMask &= ~bit;
            } else {
                inside = 0;
            }
        }
        index++;
        if (index == count) {
            index = 0;
            bit = 0x80;
        } else {
            bit >>= 1;
        }
    }
    return inside * 2 + (inside == 0);
}

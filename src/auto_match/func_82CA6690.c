typedef struct MotionVector_82CA6690 {
    signed char x;
    signed char y;
} MotionVector_82CA6690;

typedef struct Decoder_82CA6690 {
    char pad0[0x158];
    int stride; /* 0x158 */
    char pad15c[0x64];
    int enabled; /* 0x1c0 */
    int pad1c4;
    int disabled; /* 0x1c8 */
} Decoder_82CA6690;

int fn_82CA6690(Decoder_82CA6690 *dec, int haveLeft, int haveTop, MotionVector_82CA6690 *mv)
{
    MotionVector_82CA6690 left;
    MotionVector_82CA6690 top;
    int dx;
    int dy;
    int maxDiff;

    if (dec->enabled != 0 && haveLeft != 0 && haveTop != 0 && dec->disabled == 0) {
        left = mv[-1];
        top = mv[-dec->stride];
        dy = abs(left.y - top.y);
        dx = abs(left.x - top.x);
        maxDiff = dx > dy ? dx : dy;
        return maxDiff >= 8;
    }
    return 0;
}

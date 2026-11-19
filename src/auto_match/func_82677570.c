/* Uploads four (x, y) pairs as two shader constants starting at register start: the x values as
   they are and the y values scaled by lbl_82005328. */
typedef struct Pair_82677570 {
    float x; /* 0x0 */
    float y; /* 0x4 */
} Pair_82677570;

typedef struct Constants_82677570 {
    float x[4]; /* 0x00 */
    float y[4]; /* 0x10 */
} Constants_82677570;

typedef struct Renderer_82677570 {
    char pad0[0xd8];
    void *device; /* 0xd8 */
} Renderer_82677570;

extern float lbl_82005328;
extern void fn_826311B8(void *p, unsigned int start, void *src, unsigned int count, unsigned __int64 mask);

static __forceinline void SetConstants(void *device, unsigned int start, void *src, unsigned int count)
{
    unsigned int first = start >> 2;
    unsigned int last = (start + count - 1) >> 2;

    fn_826311B8(device, start, src, count,
                (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first);
}

void fn_82677570(Renderer_82677570 *self, const Pair_82677570 *pairs, unsigned int start)
{
    Constants_82677570 constants;

    constants.x[0] = pairs[0].x;
    constants.y[0] = pairs[0].y * lbl_82005328;
    constants.x[1] = pairs[1].x;
    constants.y[1] = pairs[1].y * lbl_82005328;
    constants.x[2] = pairs[2].x;
    constants.y[2] = pairs[2].y * lbl_82005328;
    constants.x[3] = pairs[3].x;
    constants.y[3] = pairs[3].y * lbl_82005328;
    SetConstants(self->device, start, &constants, 2);
}

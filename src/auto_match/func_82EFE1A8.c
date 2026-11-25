typedef struct Encoder_82EFE1A8 {
    char pad[0x564];
    int stride;
    char pad568[0x618 - 0x568];
    void *scratch;
    char pad61c[0x904 - 0x61c];
    void *table;
    char pad908[0x9b8 - 0x908];
    void (*copy)(const char *, int, void *, int, int, int, void *, void *, int);
    char pad9bc[0x5298 - 0x9bc];
    int (*compare)(const void *, int, const void *, int, int);
} Encoder_82EFE1A8;

typedef struct Motion_82EFE1A8 {
    int second;
    int pad;
    int x;
    int y;
    int secondX;
    int secondY;
} Motion_82EFE1A8;

extern void fn_82F261D8(Encoder_82EFE1A8 *encoder, int *x, int *y, int width, int height);

unsigned char fn_82EFE1A8(Encoder_82EFE1A8 *encoder, const void *reference, const char *pixels,
                          void *prediction, const Motion_82EFE1A8 *motion, int threshold, int width,
                          int height)
{
    int x;
    int y;
    int cost;
    unsigned char result = 1;

    x = motion->x;
    y = motion->y;
    fn_82F261D8(encoder, &x, &y, width, height);
    encoder->copy(pixels + ((y >> 2) * encoder->stride + (x >> 2)), encoder->stride, prediction, 16, x & 3,
                  y & 3, encoder->table, encoder->scratch, 16);
    cost = encoder->compare(reference, 16, prediction, 16, 16);
    if (motion->second != 0) {
        int secondCost;
        x = motion->secondX;
        y = motion->secondY;
        fn_82F261D8(encoder, &x, &y, width, height);
        encoder->copy(pixels + ((y >> 2) * encoder->stride + (x >> 2)), encoder->stride, prediction, 16,
                      x & 3, y & 3, encoder->table, encoder->scratch, 16);
        secondCost = encoder->compare(reference, 16, prediction, 16, 16);
        if (secondCost < cost) {
            cost = secondCost;
        }
    }
    if ((cost * 50 >> 8) < threshold) {
        result = 0;
    }
    return result;
}

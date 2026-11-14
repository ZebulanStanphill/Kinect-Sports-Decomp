typedef struct Stats_82ED9AF0 {
    char pad[0x4f00];
    double y;
    double u;
    double v;
    double block;
} Stats_82ED9AF0;

extern double fn_82ED4C80(Stats_82ED9AF0 *self, unsigned char *a, unsigned char *b, int count, double peak);
extern double fn_82ED95B8(Stats_82ED9AF0 *self, unsigned char *a, unsigned char *b, int bw, int bh, int stride, double peak);

void fn_82ED9AF0(Stats_82ED9AF0 *self, unsigned char *a, unsigned char *b, int width, int height)
{
    int size = width * height;
    unsigned char *ua = a + size;
    unsigned char *ub = b + size;
    int quarter;

    self->y = fn_82ED4C80(self, a, b, size, 255.0);
    quarter = size / 4;
    self->u = fn_82ED4C80(self, ua, ub, quarter, 255.0);
    self->v = fn_82ED4C80(self, ua + quarter, ub + quarter, quarter, 255.0);
    self->block = fn_82ED95B8(self, a, b, width / 8, height / 8, width, 255.0);
}

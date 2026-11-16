extern int fn_82C2B878(void *self, int mode, unsigned int a, unsigned int b, int c, unsigned short format,
                       unsigned int d, unsigned int e, unsigned int f, unsigned int g, int h,
                       unsigned short width, unsigned short height, int i, unsigned int j,
                       unsigned short *extra);
extern int fn_82C2D3F8(void *self);
extern int fn_82C2D948(void *self);
extern int fn_82C2BC00(void *self);
extern int fn_82C2C1E8(void *self);
extern int fn_82C2C240(void *self);

int fn_82C2DA38(void *self, int mode, unsigned int a, unsigned int b, int c, unsigned short format,
                unsigned int d, unsigned int e, unsigned int f, unsigned int g, int h, unsigned short width,
                unsigned short height, int i, unsigned int j, unsigned short *extra)
{
    int result = fn_82C2B878(self, mode, a, b, c, format, d, e, f, g, h, width, height, i, j, extra);
    if (result < 0) {
        return result;
    }
    result = fn_82C2D3F8(self);
    if (result < 0) {
        return result;
    }
    result = fn_82C2D948(self);
    if (result < 0) {
        return result;
    }
    result = fn_82C2BC00(self);
    if (result < 0) {
        return result;
    }
    result = fn_82C2C1E8(self);
    if (result < 0) {
        return result;
    }
    return fn_82C2C240(self);
}

extern int fn_82A69210(void *self, int mode, unsigned int a, unsigned int b, int c, unsigned short format,
                       unsigned int d, unsigned int e, unsigned int f, unsigned int g, int h,
                       unsigned short width, unsigned short height, int i, unsigned int j,
                       unsigned short *extra);
extern int fn_82A6A810(void *self);
extern int fn_82A6AE80(void *self);
extern int fn_82A69598(void *self);
extern int fn_82A69B80(void *self);
extern int fn_82C2C240(void *self);

int fn_82A6AF70(void *self, int mode, unsigned int a, unsigned int b, int c, unsigned short format,
                unsigned int d, unsigned int e, unsigned int f, unsigned int g, int h, unsigned short width,
                unsigned short height, int i, unsigned int j, unsigned short *extra)
{
    int result = fn_82A69210(self, mode, a, b, c, format, d, e, f, g, h, width, height, i, j, extra);
    if (result < 0) {
        return result;
    }
    result = fn_82A6A810(self);
    if (result < 0) {
        return result;
    }
    result = fn_82A6AE80(self);
    if (result < 0) {
        return result;
    }
    result = fn_82A69598(self);
    if (result < 0) {
        return result;
    }
    result = fn_82A69B80(self);
    if (result < 0) {
        return result;
    }
    return fn_82C2C240(self);
}

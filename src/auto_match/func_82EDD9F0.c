// Kinect Sports retail 4D5308C9, function 0x82EDD9F0 (100 bytes).
// Wrapper of the 14-argument surface blit/convert fn_82EDD678: passes the source surface's
// pitch fields (+4, +8) and zeros for the optional rectangles.

typedef struct {
    int unk0;
    int f4;
    int f8;
} Surface_82EDD9F0;

extern void fn_82EDD678(Surface_82EDD9F0 *src, void *dst, int w, int h, int a5, int a6, int a7, int a8,
                        int a9, int a10, int a11, int a12, int a13, int a14);

void fn_82EDD9F0(Surface_82EDD9F0 *src, void *dst, int w, int h, int a, int b)
{
    fn_82EDD678(src, dst, w, h, 0, 0, src->f4, src->f8, 0, 0, w, h, a, b);
}

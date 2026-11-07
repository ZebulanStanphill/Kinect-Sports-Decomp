typedef struct LockedRect_828518B8 {
    int Pitch;
    void *pBits;
} LockedRect_828518B8;

typedef struct Rect_828518B8 {
    int left;
    int top;
    int right;
    int bottom;
} Rect_828518B8;

extern void *lbl_832112F4[3];

extern void *fn_8263C7F0(int a, int b, int c, int d, int e, unsigned int fmt, int g, int h);
extern int fn_8263C7D8(void *tex, int level, LockedRect_828518B8 *lr, int rect, int flags);
extern int fn_8263C620(void *tex, int level);
extern int fn_82A98CB8(void *bits, int pitch, int a, int b, void *src, int srcPitch,
                       Rect_828518B8 *rect, int c);
void *memset(void *dst, int val, unsigned int n);

void fn_828518B8(void)
{
    LockedRect_828518B8 lr;
    Rect_828518B8 rect;
    unsigned int data[16];
    unsigned __int64 *p;
    int i;

    if (lbl_832112F4[0] == 0) {
        lbl_832112F4[0] = fn_8263C7F0(4, 4, 1, 1, 0, 0x18280186, 1, 3);
        fn_8263C7D8(lbl_832112F4[0], 0, &lr, 0, 0);
        for (i = 0; i < 16; i++) {
            data[i] = 0xffff00ff;
        }
        rect.bottom = 4;
        rect.left = 0;
        rect.top = 0;
        rect.right = 4;
        fn_82A98CB8(lr.pBits, lr.Pitch / 4, 4, 0, data, 0x10, &rect, 4);
        fn_8263C620(lbl_832112F4[0], 0);

        lbl_832112F4[1] = fn_8263C7F0(4, 4, 1, 1, 0, 0x18280186, 1, 3);
        fn_8263C7D8(lbl_832112F4[1], 0, &lr, 0, 0);
        p = (unsigned __int64 *)data;
        for (i = 0; i < 8; i++) {
            p[i] = 0;
        }
        fn_82A98CB8(lr.pBits, lr.Pitch / 4, 4, 0, data, 0x10, &rect, 4);
        fn_8263C620(lbl_832112F4[1], 0);

        lbl_832112F4[2] = fn_8263C7F0(4, 4, 1, 1, 0, 0x18280186, 1, 3);
        fn_8263C7D8(lbl_832112F4[2], 0, &lr, 0, 0);
        memset(lr.pBits, 0xff, lr.Pitch * 4);
        fn_8263C620(lbl_832112F4[2], 0);
    }
}

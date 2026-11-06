typedef struct Parser_82EE4180 Parser_82EE4180;
typedef struct {
    void *f[11];
    unsigned __int64 (*GetSize)(Parser_82EE4180 *p);
} ParserVt_82EE4180;
struct Parser_82EE4180 {
    ParserVt_82EE4180 *vt;
    int f4;
    int f8;
    void *fc;
    char f10[0x10];
    char f20[8];
    char stream[0x18];
    unsigned int avail;
    int f44;
    char list[0x174 - 0x48];
    char f174[4];
};
extern void fn_82EE3F30(Parser_82EE4180 *p);
extern int fn_82E57620(void *dst, void *stream);
extern int fn_82E576A8(void *dst, void *stream);
extern int fn_82E57738(unsigned short *dst, void *stream);
extern void *fn_82E50BE8(int size, int a, int b, int c, int d);
extern void *fn_82EE39D8(void *mem);
extern int fn_82E3C590(void *item, unsigned short v, int flag);
extern int fn_82EE32F8(void *list, void *item, int flag);
extern void fn_82EE3730(void *item);
extern void fn_82E4FE40(void *item);

int fn_82EE4180(Parser_82EE4180 *p, unsigned int *needed)
{
    int hr;
    unsigned int avail;
    void *stream;
    unsigned short w[2];
    void *item;
    void *mem;
    unsigned short i;
    unsigned short j;
    unsigned int n;
    unsigned int m;
    unsigned int used;
    if (p->fc == 0) {
        return ((int)0xC00D36B6);
    }
    if (needed == 0) {
        return ((int)0x80070057);
    }
    *needed = 0;
    avail = p->avail;
    if (avail < 0x2a) {
        *needed = 0x2a;
        hr = ((int)0xC00D36B1);
        goto Exit;
    }
    fn_82EE3F30(p);
    stream = p->stream;
    fn_82E57620(p->f10, stream);
    fn_82E576A8(p->f20, stream);
    hr = fn_82E57620(p->f174, stream);
    if (hr >= 0 && (hr = fn_82E57738(&w[0], stream)) >= 0) {
        n = w[0];
        item = 0;
        for (i = 0; i < n; i++) {
            used = avail - p->avail;
            if (p->avail < 2) {
                *needed = used + 2;
                hr = ((int)0xC00D36B1);
                goto Exit;
            }
            mem = fn_82E50BE8(0x104, 0, 0, 0, 0);
            if (mem != 0) {
                item = fn_82EE39D8(mem);
            } else {
                item = 0;
            }
            if (item == 0) {
                hr = ((int)0x8007000E);
                goto Done;
            }
            hr = fn_82E57738(&w[0], stream);
            if (hr < 0) {
                goto Cleanup;
            }
            m = w[0];
            used = avail - p->avail;
            if (p->avail < m * 2) {
                hr = ((int)0xC00D36B1);
                *needed = m * 2 + used;
                goto Cleanup;
            }
            for (j = 0; j < m; j++) {
                hr = fn_82E57738(&w[1], stream);
                if (hr < 0) {
                    goto Cleanup;
                }
                if (fn_82E3C590(item, w[1], 0) == 0) {
                    hr = ((int)0x8007000E);
                    break;
                }
            }
            if (hr < 0) {
                goto Cleanup;
            }
            if (fn_82EE32F8(p->list, item, 0) == 0) {
                hr = ((int)0x8007000E);
                break;
            }
            item = 0;
        }
        if (hr < 0) {
Cleanup:
            if (item != 0) {
                fn_82EE3730(item);
                fn_82E4FE40(item);
            }
        }
    }
    if (hr == ((int)0xC00D36B1)) {
        goto Exit;
    }
Done:
    *needed = avail - p->avail;
    if (hr >= 0 && p->vt->GetSize(p) != *needed) {
        hr = ((int)0xC00D3A9A);
    }
Exit:
    return hr;
}

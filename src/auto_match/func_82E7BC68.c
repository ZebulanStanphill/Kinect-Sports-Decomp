typedef struct Inner {
    int f0, f4;
    int *vbptr;
} Inner;
typedef struct Outer {
    char pad[0x20];
    Inner *inner;
} Outer;
extern int fn_82EEE678(void *base, int a, int b, int c, unsigned short *buf, unsigned short *count, int d);
extern int fn_82EEF368(void *base, int a, unsigned short v, int d);
extern unsigned short *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void fn_82E4FE40(void *p);

#define VBASE(o) ((char *)((o)->inner->vbptr[2] + (int)(o)->inner + 8))

int fn_82E7BC68(Outer *o, int a, int b)
{
    int hr;
    unsigned short count;
    unsigned short *buf;
    unsigned int size;

    count = 0;
    hr = fn_82EEE678(VBASE(o), a, b, 0, 0, &count, 1);
    if (hr >= 0) {
        if (count == 0) {
            hr = 0xc00d3e8d;
        } else {
            size = count * 2;
            buf = fn_82E50BE8(size, 0, 0, 0, 0);
            if (buf == 0) {
                hr = 0x8007000e;
            } else {
                hr = fn_82EEE678(VBASE(o), a, b, 0, buf, &count, 1);
                if (hr >= 0) {
                    while (count != 0) {
                        count--;
                        hr = fn_82EEF368(VBASE(o), a, buf[count], 1);
                        if (hr < 0)
                            break;
                    }
                }
                fn_82E4FE40(buf);
            }
        }
    }
    return hr;
}

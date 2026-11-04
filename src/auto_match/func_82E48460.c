extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void *fn_82E47870(void *, int);
extern unsigned int fn_82F64CE0(const unsigned short *);
extern void *memcpy(void *, const void *, unsigned int);

typedef struct { unsigned short kind; unsigned short pad[3]; const unsigned short *str; } Entry_82E48460;

int fn_82E48460(char *self, int key, void *dst, unsigned int cap, unsigned int *outLen)
{
    Entry_82E48460 *e;
    unsigned int len;
    int hr;

    hr = 0;
    RtlEnterCriticalSection(self + 4);
    e = (Entry_82E48460 *)fn_82E47870(self, key);
    if (e != 0) {
        if (e->kind == 0x1f) {
            len = fn_82F64CE0(e->str);
            if (len >= 0x7ffffffe) {
                hr = 0x8007000E;
            } else {
                if (outLen != 0) {
                    *outLen = len;
                }
                if (len + 1 > cap) {
                    hr = 0x8007007A;
                } else {
                    memcpy(dst, e->str, (len + 1) * 2);
                }
            }
        } else {
            hr = 0xC00D36BD;
        }
    } else {
        hr = 0xC00D36E6;
    }
    RtlLeaveCriticalSection(self + 4);
    return hr;
}

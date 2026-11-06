typedef struct Entry_82EF27F0 {
    unsigned __int64 a;
    unsigned __int64 b;
    unsigned int c;
    unsigned int pad14;
    unsigned short *data;
    unsigned int count;
    unsigned __int64 f20;
} Entry_82EF27F0;

extern int fn_82EF1D58(void *list, unsigned int index, Entry_82EF27F0 **out);
extern void *memcpy(void *dst, const void *src, unsigned int n);

int fn_82EF27F0(char *self, unsigned int index, unsigned __int64 *outA,
                unsigned __int64 *outB, unsigned int *outC,
                unsigned short *buf, unsigned int *count)
{
    Entry_82EF27F0 *p;
    Entry_82EF27F0 e;

    if (count == 0) {
        return 0x80070057;
    }
    if ((*count > 0 && buf == 0) || index >= *(unsigned int *)(self + 0x3b8)) {
        return 0x80070057;
    }
    fn_82EF1D58(self + 0x50, index, &p);
    e = *p;
    if (outA != 0) {
        *outA = e.a;
    }
    if (outB != 0) {
        *outB = e.b;
    }
    if (outC != 0) {
        *outC = e.c;
    }
    if (*count < e.count && buf != 0) {
        *count = e.count;
        return 0xC00D36B1;
    }
    *count = e.count;
    if (e.data != 0) {
        if (buf != 0) {
            memcpy(buf, e.data, e.count << 1);
        }
    } else if (buf != 0) {
        *buf = 0;
    }
    return 0;
}

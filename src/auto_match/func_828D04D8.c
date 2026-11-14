
typedef struct Buffer_828D04D8 {
    char header[16];
    void *data;
    int size;
    void *heap;
    int capacity, flags;
} Buffer_828D04D8;

extern void fn_828E9D28(Buffer_828D04D8 *, int, int);
extern void fn_828AC508(void *, void *);
extern void fn_828D0300(void *, Buffer_828D04D8 *);
extern int fn_828E9D78(Buffer_828D04D8 *);
extern void fn_82CE0730(void *, void *, int, int, int);
extern void fn_8265CA20(void *);

void fn_828D04D8(char *self, unsigned char a, unsigned char b, unsigned short c, void *d, unsigned char e)
{
    Buffer_828D04D8 buf;
    int size;
    void *data;
    buf.heap = 0;
    buf.capacity = 0;
    buf.flags = 0;
    buf.data = 0;
    buf.size = 0;
    fn_828E9D28(&buf, 0, 0);
    self[0x11] = a;
    self[0x12] = b;
    *(unsigned short *)(self + 0x14) = c;
    fn_828AC508(self + 0x18, d);
    self[0x30] = e;
    fn_828D0300(self + 0x10, &buf);
    size = fn_828E9D78(&buf);
    data = buf.data;
    if (!data)
        data = buf.heap;
    fn_82CE0730(self, data, size, 0, 4);
    if (buf.heap)
        fn_8265CA20(buf.heap);
}

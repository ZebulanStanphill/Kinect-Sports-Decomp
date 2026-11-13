typedef struct WString_826638E8 {
    unsigned short buf[8];
    unsigned int size;
    unsigned int capacity;
} WString_826638E8;

extern const unsigned int lbl_821961F0;

extern unsigned int fn_8265DED8(WString_826638E8 *self);
extern void fn_82663F28(WString_826638E8 *self);
extern WString_826638E8 *fn_82663C28(WString_826638E8 *self, unsigned int offset, unsigned int count);
extern unsigned char fn_82663A00(WString_826638E8 *self, unsigned int size, int keep);
extern unsigned short *fn_82663B70(WString_826638E8 *self);
extern unsigned short *fn_82297D98(unsigned short *dst, const unsigned short *src, unsigned int count);
extern void fn_82663848(WString_826638E8 *self, unsigned int size);

WString_826638E8 *fn_826638E8(WString_826638E8 *self, WString_826638E8 *right, unsigned int offset, unsigned int count)
{
    unsigned int num;

    if (fn_8265DED8(right) < offset) {
        fn_82663F28(self);
    }
    num = fn_8265DED8(right) - offset;
    if (count < num) {
        num = count;
    }
    if (self == right) {
        fn_82663C28(self, offset + num, lbl_821961F0);
        fn_82663C28(self, 0, offset);
    } else if (fn_82663A00(self, num, 0)) {
        fn_82297D98(fn_82663B70(self), fn_82663B70(right) + offset, num);
        fn_82663848(self, num);
    }
    return self;
}

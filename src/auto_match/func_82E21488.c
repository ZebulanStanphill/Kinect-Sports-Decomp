typedef struct TextBuf_82E21488 TextBuf_82E21488;

extern unsigned short lbl_8323FE20[0x25];
extern unsigned char lbl_8323FE6A;
extern void *fn_8265C9E0(unsigned int size);
extern void fn_8265CA20(void *p);
extern int fn_82E212B0(TextBuf_82E21488 *self, const unsigned short *text);
extern int fn_82F64840(unsigned short *dst, unsigned int dstCount, const unsigned short *src,
                       unsigned int count);
extern unsigned int fn_82F64CE0(const unsigned short *s);
extern unsigned int fn_82F6FE60(const unsigned short *s, const unsigned short *set);
extern int fn_82F6FEB8(unsigned short *dst, unsigned int size, const unsigned short *src, unsigned int count);

int fn_82E21488(TextBuf_82E21488 *self, const unsigned short *text)
{
    unsigned int length;
    unsigned int position;
    unsigned int count;
    unsigned short *copy;
    char i;

    if (text == 0) {
        return 0;
    }
    length = fn_82F64CE0(text);
    if (lbl_8323FE6A == 0) {
        for (i = 0; i < 0x20; i++) {
            lbl_8323FE20[i] = 0x1f - i;
        }
        fn_82F6FEB8(lbl_8323FE20, 0x25, L"\"'<>&", 5);
        lbl_8323FE20[0x24] = 0;
        lbl_8323FE6A = 1;
    }
    position = fn_82F6FE60(text, lbl_8323FE20);
    if (position == length) {
        return fn_82E212B0(self, text);
    }
    count = length + 1;
    copy = (unsigned short *)fn_8265C9E0(count <= 0x7fffffff ? count * sizeof(unsigned short) : 0xffffffff);
    if (fn_82F64840(copy, count, text, length) != 0) {
        return 0;
    }
    copy[length] = 0;
    while (position < length) {
        copy[position] = '.';
        position = fn_82F6FE60(copy, lbl_8323FE20);
    }
    fn_82E212B0(self, copy);
    fn_8265CA20(copy);
    return 1;
}

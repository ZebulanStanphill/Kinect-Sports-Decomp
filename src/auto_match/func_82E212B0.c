typedef struct TextBuf_82E212B0 {
    unsigned char wide;
    unsigned int len;
    unsigned int cap;
    int xc;
    void *data;
} TextBuf_82E212B0;

extern unsigned int fn_82F64CE0(const unsigned short *s);
extern unsigned short *fn_82E21160(TextBuf_82E212B0 *b, int n);
extern char *fn_82E211B0(TextBuf_82E212B0 *b, int n);
extern int fn_82F64840(unsigned short *dst, unsigned int dstCount, const unsigned short *src, unsigned int count);
extern int fn_82A2A378(unsigned int codePage, unsigned int flags, const unsigned short *src, int srcLen,
                       char *dst, int dstLen, const char *defaultChar, int *usedDefault);

int fn_82E212B0(TextBuf_82E212B0 *self, const unsigned short *text)
{
    unsigned int len = fn_82F64CE0(text);
    if (len == 0) {
        return 0;
    }
    if (self->wide != 0) {
        unsigned short *dst = fn_82E21160(self, len);
        unsigned int room;
        room = self->cap - self->len;
        fn_82F64840(dst, room, text, len);
    } else {
        char *dst = fn_82E211B0(self, len);
        fn_82A2A378(0, 0, text, len, dst, len, 0, 0);
    }
    self->len += len;
    return 1;
}

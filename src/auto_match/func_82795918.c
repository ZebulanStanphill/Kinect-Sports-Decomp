typedef struct Text_82795918 {
    unsigned short *data;
    unsigned int count;
    char pad8[8];
    char attrs[1];
} Text_82795918;

extern unsigned char fn_8278FD18(Text_82795918 *text);
extern void fn_827923E8(void *attrs, unsigned int at, int n);
extern void fn_827954C0(void *attrs, unsigned int at, int n);

void fn_82795918(Text_82795918 *text)
{
    if (fn_8278FD18(text)) {
        unsigned int count = text->count;
        unsigned int len = count;
        if (count != 0 && fn_8278FD18(text))
            len = count - 1;
        fn_827923E8(text->attrs, len, 1);
        fn_827954C0(text->attrs, len + 1, 1);
    }
}

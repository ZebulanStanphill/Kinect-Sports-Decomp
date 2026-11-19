typedef struct Text_827A2850 {
    const char *data;      /* 0x00 */
    unsigned int length;   /* 0x04 */
    unsigned int capacity; /* 0x08 */
    unsigned int flags;    /* 0x0c */
} Text_827A2850;

typedef struct Document_827A2850 {
    char pad0[0x8];
    void *content; /* 0x08 */
    char padc[0x13d - 0xc];
    unsigned char flags; /* 0x13d */
} Document_827A2850;

typedef struct Range_827A2850 {
    char pad0[0x8];
    Document_827A2850 *document; /* 0x08 */
    int clipboard;               /* 0x0c */
} Range_827A2850;

extern char lbl_820E975C[];
extern void fn_827921B8(void *content, Text_827A2850 *text, unsigned int first, unsigned int last);
extern void *fn_827998E8(void *content, unsigned int first, unsigned int last);
extern void fn_8272A920(int clipboard, const char *data, unsigned int length, void *styles);
extern void fn_827226F0(int clipboard, const char *data, unsigned int length);
extern void fn_8267C498(void *styles);
extern void fn_82773930(Text_827A2850 *text);

void fn_827A2850(Range_827A2850 *self, unsigned int first, unsigned int last, unsigned char withStyles)
{
    unsigned int t;
    Text_827A2850 text;
    void *styles;

    if (self->clipboard == 0) {
        return;
    }
    if (self->document->flags & 0x10) {
        return;
    }
    if (last < first) {
        t = last;
        last = first;
        first = t;
    }
    text.data = 0;
    text.length = 0;
    text.capacity = 0;
    text.flags = 0;
    fn_827921B8(self->document->content, &text, first, last);
    if (withStyles) {
        styles = fn_827998E8(self->document->content, first, last);
        fn_8272A920(self->clipboard, text.data ? text.data : lbl_820E975C, text.length, styles);
        if (styles != 0) {
            fn_8267C498(styles);
        }
    } else {
        fn_827226F0(self->clipboard, text.data ? text.data : lbl_820E975C, text.length);
    }
    fn_82773930(&text);
}

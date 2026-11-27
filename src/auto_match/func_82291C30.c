typedef struct Screen_82291C30 {
    char pad0[0x1c];
    void *strings; /* 0x1c */
    char pad20[0x2c];
    void *middle;    /* 0x4c */
    void *top;       /* 0x50 */
    void *bottom;    /* 0x54 */
    void *middleAlt; /* 0x58 */
    void *topAlt;    /* 0x5c */
    void *bottomAlt; /* 0x60 */
} Screen_82291C30;

extern const char *lbl_831CECC8[0x48];

extern void fn_82358FD8(void *strings, unsigned short *buffer, int size, const char *key);
extern void fn_82299E90(void *label, void *style, unsigned short *title, unsigned short *text);
extern void fn_82299BF0(void *label, void *style, unsigned short *title);

void fn_82291C30(Screen_82291C30 *self, int titleId, int textId, unsigned int line, void *style,
                 int alternate)
{
    unsigned short title[0x400] = L"";
    unsigned short text[0x400] = L"";

    if (titleId != 0) {
        fn_82358FD8(self->strings, title, 0x400, lbl_831CECC8[titleId]);
    }
    if (textId != 0) {
        fn_82358FD8(self->strings, text, 0x400, lbl_831CECC8[textId]);
        switch (line) {
        case 2:
            if (alternate) {
                fn_82299E90(self->bottomAlt, style, title, text);
            } else {
                fn_82299E90(self->bottom, style, title, text);
            }
            break;
        case 1:
            if (alternate) {
                fn_82299E90(self->middleAlt, style, title, text);
            } else {
                fn_82299E90(self->middle, style, title, text);
            }
            break;
        case 0:
            if (alternate) {
                fn_82299E90(self->topAlt, style, title, text);
            } else {
                fn_82299E90(self->top, style, title, text);
            }
            break;
        }
    } else {
        switch (line) {
        case 2:
            if (alternate) {
                fn_82299BF0(self->bottomAlt, style, title);
            } else {
                fn_82299BF0(self->bottom, style, title);
            }
            break;
        case 1:
            if (alternate) {
                fn_82299BF0(self->middleAlt, style, title);
            } else {
                fn_82299BF0(self->middle, style, title);
            }
            break;
        case 0:
            if (alternate) {
                fn_82299BF0(self->topAlt, style, title);
            } else {
                fn_82299BF0(self->top, style, title);
            }
            break;
        }
    }
}

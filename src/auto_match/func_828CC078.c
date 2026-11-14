typedef struct Stream_828CC078 Stream_828CC078;

typedef struct Sizer_828CC078 Sizer_828CC078;
typedef struct {
    void *slot0;
    void *slot1;
    int (*bitCount)(Sizer_828CC078 *);
} SizerVtbl_828CC078;
struct Sizer_828CC078 { SizerVtbl_828CC078 *vtbl; };

typedef struct {
    char pad0[0x6c];
    int context;                /* 0x6c */
    char pad70[0x10];
    char header[8];             /* 0x80 */
    unsigned int value;         /* 0x88 */
    unsigned char hasExtra;     /* 0x8c */
    unsigned char extraIsEmpty; /* 0x8d */
    char pad8e[2];
    char extra[0x10];           /* 0x90 */
    unsigned int id;            /* 0xa0 */
} Message_828CC078;

extern void fn_8223C478(Stream_828CC078 *s, int bits, int zero);
extern void fn_828E9DB8(Stream_828CC078 *s, unsigned int value, int bits);
extern void fn_828B5C88(void *header, int context, Stream_828CC078 *s);
extern void fn_82891F28(Stream_828CC078 *s, void *extra);
extern Sizer_828CC078 *fn_8288A398(void);

void fn_828CC078(Message_828CC078 *self, Stream_828CC078 *s)
{
    int flag = self->hasExtra != 0;
    unsigned int v;
    int bits;
    Sizer_828CC078 *sizer;

    fn_8223C478(s, 1, 0);
    fn_828E9DB8(s, flag, 1);
    fn_828B5C88(self->header, self->context, s);
    v = self->value;
    fn_8223C478(s, 8, 0);
    fn_828E9DB8(s, v, 8);
    if (self->hasExtra != 0) {
        flag = self->extraIsEmpty != 0;
        fn_8223C478(s, 1, 0);
        fn_828E9DB8(s, flag, 1);
        if (self->extraIsEmpty == 0) {
            fn_82891F28(s, self->extra);
        }
    } else {
        sizer = fn_8288A398();
        bits = sizer->vtbl->bitCount(sizer);
        v = self->id;
        fn_8223C478(s, bits, 0);
        fn_828E9DB8(s, v, bits);
    }
}

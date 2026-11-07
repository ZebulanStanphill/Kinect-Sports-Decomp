typedef unsigned char undefined1;
typedef unsigned char bool;

extern int fn_8268B738();
extern int fn_8268BEA8();
extern int fn_826E7800();
extern unsigned int lbl_8200D6D8;

typedef struct Reader_826E8660 {
    unsigned char pad0[0x15];
    unsigned char flag;          /* 0x15 */
    unsigned char pad16[0x2c - 0x16];
    int pos;                     /* 0x2c */
    int end;                     /* 0x30 */
    unsigned char pad34[0x3c - 0x34];
    unsigned char *buf;          /* 0x3c */
} Reader_826E8660;

typedef struct Callback_826E8660 {
    void *vt;
    Reader_826E8660 *owner;
} Callback_826E8660;

bool fn_826E8660(Reader_826E8660 *r, int arg)
{
    Callback_826E8660 cb;
    int c;

    r->flag = 0;
    if (r->end - r->pos < 1) {
        fn_826E7800(r, 1);
    }
    c = r->buf[r->pos];
    r->pos = r->pos + 1;
    if (c <= 0) {
        fn_8268BEA8(arg);
        return 0;
    }
    cb.vt = &lbl_8200D6D8;
    cb.owner = r;
    fn_8268B738(arg, &cb, c);
    return 1;
}

extern void *memcpy(void *dst, const void *src, unsigned int n);
extern int fn_8300F128(void);
extern void fn_8300F208(void *queue, void *msg, unsigned short size);
extern void *lbl_832642E4;

typedef struct Msg_82FE6628 {
    unsigned short pad;
    unsigned short type;
    int arg;
    unsigned char data[0x18];
    int extra;
} Msg_82FE6628;

void fn_82FE6628(int arg, const void *data, int extra)
{
    Msg_82FE6628 m;

    m.arg = arg;
    m.type = 8;
    memcpy(m.data, data, 0x18);
    m.extra = extra;
    fn_8300F208(lbl_832642E4, &m, fn_8300F128());
}

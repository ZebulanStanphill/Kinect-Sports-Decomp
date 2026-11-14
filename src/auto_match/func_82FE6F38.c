typedef struct Msg_82FE6F38 {
    unsigned char hdr[2];      /* 0x00 */
    unsigned short len;        /* 0x02 */
    unsigned int owner;      /* 0x04 */
    unsigned int id;         /* 0x08 */
    unsigned int f0C;        /* 0x0C */
    unsigned int f10;        /* 0x10 */
    unsigned int f14;        /* 0x14 */
    unsigned int f18;        /* 0x18 */
    unsigned int handle;     /* 0x1C */
    unsigned int pad[4];     /* 0x20 */
} Msg_82FE6F38;

extern unsigned int lbl_83264348;
extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264304;

extern unsigned int fn_83014B70(unsigned int id, unsigned int arg);
extern unsigned short fn_8300F198(void);
extern int fn_8300F208(unsigned int h, void *msg, unsigned int size);
extern int fn_82FF4858(unsigned int h, unsigned int *msg, unsigned int a, unsigned int b, unsigned int flags, unsigned int id);

unsigned int fn_82FE6F38(unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5)
{
    Msg_82FE6F38 s;
    unsigned int id;
    unsigned int h;

    s.len = 0x16;
    id = ++lbl_83264348;
    s.id = id;
    s.handle = h = fn_83014B70(id, param_5);
    if (h != 0) {
        s.owner = param_1;
        s.f14 = 0;
        *(unsigned __int64 *)&s.f0C = 0;
        if (fn_8300F208(lbl_832642E4, &s, fn_8300F198()) == 1) {
            if ((param_3 == 0 && (param_2 & 0x10000) == 0) ||
                fn_82FF4858(lbl_83264304, &s.owner, param_3, param_4, param_2, s.id) == 1) {
                return s.id;
            }
        }
    }
    return 0;
}

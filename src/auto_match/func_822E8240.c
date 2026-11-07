typedef void (*VFunc_822E8240)(void *self, void *arg);

typedef struct Reader_822E8240 {
    unsigned char state[16];
    unsigned char *ptr;
    int flag;
    void *alloc;
    int f1;
    int f2;
} Reader_822E8240;

extern unsigned int lbl_821ADFDC[];
extern unsigned int lbl_821ADFA0[];

extern void fn_828E9D28(Reader_822E8240 *r, unsigned char *p, int n);
extern void fn_8223C610(Reader_822E8240 *r, unsigned int bits, int a, int b);
extern void fn_8223C478(Reader_822E8240 *r, unsigned int bits, int a);
extern void fn_828E9DB8(Reader_822E8240 *r, unsigned int value, unsigned int bits);
extern void fn_82329468(int *obj, unsigned char *buf);
extern void fn_8265CA20(void *p);

void fn_822E8240(int *param_1, unsigned int param_2, int param_3)
{
    unsigned char buf[16];
    Reader_822E8240 r;
    unsigned int bytes;
    unsigned int rem;
    unsigned int width;

    bytes = lbl_821ADFDC[param_3] >> 3;
    rem = lbl_821ADFDC[param_3] & 7;
    (*(VFunc_822E8240 *)(*param_1 + 0x40))(param_1, buf);
    r.ptr = buf + bytes;
    r.alloc = 0;
    r.f1 = 0;
    r.f2 = 0;
    r.flag = 1;
    fn_828E9D28(&r, r.ptr, 1);
    if (rem != 0) {
        fn_8223C610(&r, rem, 0, 0);
    }
    width = lbl_821ADFA0[param_3];
    fn_8223C478(&r, width, 0);
    fn_828E9DB8(&r, param_2, width);
    fn_82329468(param_1, buf);
    if (r.alloc != 0) {
        fn_8265CA20(r.alloc);
    }
}

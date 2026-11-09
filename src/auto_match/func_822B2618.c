typedef void (*VFunc_822B2618)(void *self, void *arg);

typedef struct Reader_822B2618 {
    unsigned char state[16];
    unsigned char *ptr;
    int flag;
    void *alloc;
    int f1;
    int f2;
} Reader_822B2618;

extern unsigned int lbl_821AC910[];
extern unsigned int lbl_821AC8D4[];

extern void fn_828E9D28(Reader_822B2618 *r, unsigned char *p, int n);
extern void fn_8223C610(Reader_822B2618 *r, unsigned int bits, int a, int b);
extern void fn_8223C478(Reader_822B2618 *r, unsigned int bits, int a);
extern void fn_828E9DB8(Reader_822B2618 *r, unsigned int value, unsigned int bits);
extern void fn_8233EBE0(int *obj, unsigned char *buf);
extern void fn_8265CA20(void *p);

void fn_822B2618(int *param_1, unsigned int param_2, int param_3)
{
    unsigned char buf[16];
    Reader_822B2618 r;
    unsigned int bytes;
    unsigned int rem;
    unsigned int width;

    bytes = lbl_821AC910[param_3] >> 3;
    rem = lbl_821AC910[param_3] & 7;
    (*(VFunc_822B2618 *)(*param_1 + 0x40))(param_1, buf);
    r.ptr = buf + bytes;
    r.alloc = 0;
    r.f1 = 0;
    r.f2 = 0;
    r.flag = 5;
    fn_828E9D28(&r, r.ptr, 5);
    if (rem != 0) {
        fn_8223C610(&r, rem, 0, 0);
    }
    width = lbl_821AC8D4[param_3];
    fn_8223C478(&r, width, 0);
    fn_828E9DB8(&r, param_2, width);
    fn_8233EBE0(param_1, buf);
    if (r.alloc != 0) {
        fn_8265CA20(r.alloc);
    }
}

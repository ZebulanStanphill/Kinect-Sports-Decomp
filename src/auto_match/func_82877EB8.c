extern int fn_8223CFC0(void *p, int a, int b);
extern int fn_8223DCC8(void *p);
extern int fn_82240158(void *p, char *s);
extern int fn_822403C8(void *dst, void *src);

extern char lbl_82022799[];

typedef struct {
    int hdr;
    unsigned char body[156];
} Buf;

void *fn_82877EB8(void *param_1)
{
    Buf b;

    fn_8223CFC0(&b, 2, 1);
    fn_82240158(&b, lbl_82022799);
    fn_822403C8(param_1, b.body);
    fn_8223DCC8(&b);
    return param_1;
}

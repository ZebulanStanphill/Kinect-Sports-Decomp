typedef unsigned int size_t;
size_t strlen(const char *s);

typedef struct Str_8234B190 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int res;
} Str_8234B190;

typedef struct StrBuf_8234B190 {
    Str_8234B190 s;
    unsigned int pad[4];
} StrBuf_8234B190;

extern Str_8234B190 *fn_82230110(Str_8234B190 *s, const char *text);
extern void fn_82230300(Str_8234B190 *s, int a, int b);
extern Str_8234B190 *fn_8223DFF0(Str_8234B190 *s, const char *text, unsigned int len);
extern int fn_82560010(int a, const char *name);

int fn_8234B190(int **param_1, const char *param_2)
{
    StrBuf_8234B190 tmp;
    Str_8234B190 *s;
    int *obj;
    const char *name;
    int r;

    s = fn_82230110(&tmp.s, "faceanim_");
    s = fn_8223DFF0(s, param_2, strlen(param_2));
    obj = *param_1;
    name = s->res >= 0x10 ? s->u.ptr : s->u.buf;
    r = fn_82560010(*obj, name);
    fn_82230300(&tmp.s, 1, 0);
    return r;
}

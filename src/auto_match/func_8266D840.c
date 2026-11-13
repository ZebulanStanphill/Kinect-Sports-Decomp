typedef struct { int a, b, c; } E;
typedef struct { int a, b, c, d, e; } R;
extern R *fn_8266D710(R *out, E *first, E *last, R *c, unsigned char tag);
extern void fn_8266D440(R *c);

R *fn_8266D840(R *out, E *first, E *last, R *c)
{
    R tmp;
    unsigned char tag;
    tmp.a = 0;
    tmp.b = 0;
    tmp.c = 0;
    tmp.d = 0;
    tmp.e = c->e;
    fn_8266D710(out, first, last, &tmp, tag);
    fn_8266D440(c);
    return out;
}

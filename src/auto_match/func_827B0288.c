typedef struct Key_827B0288 { unsigned short a, b; } Key_827B0288;
unsigned char fn_827B0288(const Key_827B0288 *x, const Key_827B0288 *y)
{
    if (x->a != y->a) return x->a < y->a;
    return x->b < y->b;
}

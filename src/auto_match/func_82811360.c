typedef struct Key_82811360 {
    int a;
    unsigned b, c, d, e, f;
} Key_82811360;

unsigned char fn_82811360(Key_82811360 *x, Key_82811360 *y)
{
    return x->a != y->a || x->b != y->b || x->c != y->c || x->d != y->d || x->e != y->e || x->f != y->f;
}

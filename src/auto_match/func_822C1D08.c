extern void fn_82359C18(void *p);
extern void fn_8265CA20(void *p);

typedef struct Sub {
    char pad[0x60];
    void *p;
    int a;
    int b;
} Sub;

void fn_822C1D08(char *o)
{
    Sub *s = (Sub *)(o + 0x10);
    if (s->p != 0) {
        fn_8265CA20(s->p);
    }
    s->p = 0;
    s->a = 0;
    s->b = 0;
    fn_82359C18(s);
}

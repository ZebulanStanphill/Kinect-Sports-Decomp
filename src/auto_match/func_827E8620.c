typedef unsigned int size_t;
void *memcpy(void *dst, const void *src, size_t n);

typedef struct Inner {
    char data[0x18];
} Inner;

typedef struct Outer {
    int a;
    Inner b;
} Outer;

typedef struct Tmp {
    char data[40];
} Tmp;

Outer *fn_827DE048(Tmp *t);
void fn_82811400(Inner *p, int n);
void fn_827E8580(void *self, Outer *o);

void *fn_827E8620(void *self)
{
    Tmp tmp;
    Outer o;
    Outer *src;

    src = fn_827DE048(&tmp);
    fn_82811400(&o.b, 0x10);
    o.a = src->a;
    memcpy(&o.b, &src->b, 0x18);
    fn_827E8580(self, &o);
    return self;
}

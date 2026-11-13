extern char lbl_8201046C[];

typedef struct Visitor_82720D48 {
    void *vtable;
    int a;
    int index;
    int c;
    int d;
    int e;
    unsigned char f;
} Visitor_82720D48;

typedef struct Self_82720D48 {
    char pad[0x78];
    void **slots;
} Self_82720D48;

extern unsigned char fn_82720090(Self_82720D48 *self, void *node, void *ctx, Visitor_82720D48 *visitor);

void fn_82720D48(char *owner, Self_82720D48 *self, int a, int index, int c, int d, int e, unsigned char f)
{
    Visitor_82720D48 v;

    v.vtable = lbl_8201046C;
    v.a = a;
    v.index = index;
    v.c = c;
    v.d = d;
    v.e = e;
    v.f = f;
    fn_82720090(self, owner ? owner + 0x10 : 0, &self->slots[index + 2], &v);
}

typedef struct {
    char pad0[0x6c];
    int f6c;
    char pad70[0x80 - 0x70];
    int sub80[2];
    unsigned int f88;
    unsigned int f8c;
    int sub90[5];
    unsigned char pada4;
    unsigned char fa5;
} Obj;

extern void fn_8223C478(void *s, int n, int z);
extern void fn_828E9DB8(void *s, unsigned int v, int n);
extern void fn_82891F28(void *s, void *p);
extern void fn_828B5C88(void *p, int a, void *s);

static void writeBits(void *s, unsigned int v, int n)
{
    fn_8223C478(s, n, 0);
    fn_828E9DB8(s, v, n);
}

static void writeBool(void *s, unsigned char b)
{
    fn_8223C478(s, 1, 0);
    fn_828E9DB8(s, b != 0, 1);
}

void fn_828C7978(Obj *o, void *s)
{
    fn_828B5C88(o->sub80, o->f6c, s);
    writeBool(s, o->fa5);
    writeBits(s, o->f88, 8);
    writeBits(s, o->f8c, 16);
    fn_82891F28(s, o->sub90);
}

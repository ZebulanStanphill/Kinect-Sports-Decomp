// Script handler: checks the target is a TextSnapshot (kind 0x29), then converts its first argument
// to a colour, forces the colour's first byte (alpha) to 0xff and passes it to
// Object_82755C20::SetValue (func_82755C20.cpp) of the snapshot's object at 0x30.
struct Object_82755C20 {
    void SetValue(int *in);
};

struct Parser_827380E8 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
};

union Color_827380E8 {
    int value;
    unsigned char bytes[4];
};

extern "C" {
unsigned char fn_82695468(Parser_827380E8 *p, int kind);
void fn_826954C0(Parser_827380E8 *p, const char *name, int a, int b);
int fn_826957D0(Parser_827380E8 *p, int index);
int fn_82697700(int arg, int ctx);
}

extern "C" void fn_827380E8(Parser_827380E8 *p)
{
    char *obj;
    Color_827380E8 color;

    if (fn_82695468(p, 0x29) == 0) {
        fn_826954C0(p, "TextSnapshot", 0, 0);
        return;
    }
    obj = p->node ? p->node - 0x10 : 0;
    if (obj != 0 && p->count >= 1) {
        color.value = fn_82697700(fn_826957D0(p, 0), p->ctx);
        color.bytes[0] = 0xff;
        ((Object_82755C20 *)(obj + 0x30))->SetValue(&color.value);
    }
}

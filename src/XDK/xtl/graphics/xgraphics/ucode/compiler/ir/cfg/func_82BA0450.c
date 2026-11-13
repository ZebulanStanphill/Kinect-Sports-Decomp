extern void fn_82AB15D0(int a, const char *fmt, ...);

typedef struct {
    char pad[0x14];
    int n;
    char pad2[0xe8 - 0x18];
    void *in[1];
} IRInst;
typedef struct {
    unsigned int pad : 22;
    unsigned int partialWrite : 1;
    unsigned int rest : 9;
} IRFlags;

void *fn_82BA0450(IRInst *p)
{
    if (!(unsigned char)((IRFlags *)((char *)p + 0xe4))->partialWrite)
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "HasPartialWriteInput()",
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IRInst.hpp", 0x76e);
    return ((void **)p)[p->n + 0x3a];
}

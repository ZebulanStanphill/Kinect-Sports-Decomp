typedef struct Color_82779B30 {
    unsigned char a;
    unsigned char r;
    unsigned char g;
    unsigned char b;
} Color_82779B30;

typedef struct Sink_82779B30 {
    int kind;
    unsigned int target;
    int flags;
} Sink_82779B30;

extern int fn_82779AA8(Sink_82779B30 *sink, const char *format, unsigned int *a0, unsigned int *a1, unsigned int *a2, unsigned int *a3);

void fn_82779B30(Color_82779B30 *color, unsigned int target)
{
    unsigned int a = color->a;
    unsigned int b = color->b;
    unsigned int g = color->g;
    unsigned int r = color->r;
    Sink_82779B30 sink;
    sink.kind = 2;
    sink.target = target;
    sink.flags = 0x200;
    fn_82779AA8(&sink, "RGBA: {0} {1} {2} {3}\n", &r, &g, &b, &a);
}

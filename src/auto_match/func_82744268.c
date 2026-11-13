typedef struct Value_82744268 {
    char data[24];
} Value_82744268;

typedef struct Point_82744268 {
    double x;
    double y;
} Point_82744268;

typedef struct Args_82744268 {
    int unk0;
    int unk4;
    unsigned int base;
    char padc[0xc];
    int context;
    int count;
} Args_82744268;

extern double sqrt(double);
extern unsigned char fn_82695468(Args_82744268 *args, int type);
extern void fn_826954C0(Args_82744268 *args, const char *typeName, int a, int b);
extern unsigned int fn_826957D0(Args_82744268 *args, int index);
extern void fn_82695DA0(Value_82744268 *value, unsigned int src);
extern double fn_826972E0(Value_82744268 *value, int context);
extern void fn_82696330(Value_82744268 *value);
extern void fn_82743CD8(unsigned int obj, int context, Point_82744268 *out);
extern void fn_82743888(unsigned int obj, int context, Point_82744268 *in);
extern void fn_82743808(unsigned int obj, int context, char *def);
extern char lbl_831F12E8[];

void fn_82744268(Args_82744268 *args)
{
    unsigned int base;
    unsigned int obj;
    Value_82744268 value;
    Point_82744268 pt;
    double scale;
    if (!fn_82695468(args, 0x10)) {
        fn_826954C0(args, "Point", 0, 0);
    } else {
        base = args->base;
        if (base)
            obj = base - 0x10;
        else
            obj = 0;
        if (args->count > 0) {
            fn_82695DA0(&value, fn_826957D0(args, 0));
            fn_82743CD8(obj, args->context, &pt);
            scale = fn_826972E0(&value, args->context) / sqrt(pt.y * pt.y + pt.x * pt.x);
            pt.x = pt.x * scale;
            pt.y = pt.y * scale;
            fn_82743888(obj, args->context, &pt);
            fn_82696330(&value);
        } else {
            fn_82743808(obj, args->context + 0x78, lbl_831F12E8);
        }
    }
}

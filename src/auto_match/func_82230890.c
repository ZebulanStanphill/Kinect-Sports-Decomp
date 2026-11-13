typedef struct Params_82230890 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
} Params_82230890;
extern void fn_8267C6C8(Params_82230890 *p, void *arg);

void fn_82230890(void *arg)
{
    Params_82230890 p;

    p.a = 0;
    p.c = 0x4000;
    p.b = 0x10;
    p.d = 0x4000;
    p.e = 0x40000;
    p.f = 0;
    p.g = 1;
    p.h = 0;
    fn_8267C6C8(&p, arg);
}

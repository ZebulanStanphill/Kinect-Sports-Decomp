typedef struct Settings_82C37A98 {
    int f0;
    int f4;
    int f8;
    int fc;
    unsigned __int64 f10;
    unsigned __int64 f18;
    unsigned int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
} Settings_82C37A98;

extern void *memset(void *, int, unsigned int);

void fn_82C37A98(Settings_82C37A98 *s)
{
    memset(s, 0, sizeof(*s));
    s->f8 = 0;
    s->f4 = 0;
    s->f0 = 0;
    s->f10 = 0;
    s->f18 = 0;
    s->f68 = 1;
    s->f20 = 0xffa00000;
    s->f24 = 0;
    s->f28 = 0;
    s->f2c = 0;
    s->f34 = 0;
    s->f30 = 0;
    s->f38 = 0;
    s->f3c = 1;
    s->f40 = 500;
    s->f44 = 0;
    s->f48 = 0;
    s->f4c = 0;
    s->f50 = 0;
    s->f54 = 200;
    s->f58 = 0;
    s->f5c = 2;
    s->f60 = 0;
    s->f64 = 0;
    s->f6c = 1;
    s->f70 = 0;
}

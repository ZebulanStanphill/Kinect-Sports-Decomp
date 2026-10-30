typedef struct {
    unsigned short pad : 3;
    unsigned short f1000 : 1;
    unsigned short f800 : 1;
    unsigned short pad2 : 8;
    unsigned short f4 : 1;
    unsigned short pad3 : 2;
} Flags_8278CF70;
typedef struct {
    int pad[2];
    unsigned str;
    int pad2[7];
    unsigned short pad28;
    Flags_8278CF70 flags;
} Obj_8278CF70;
extern unsigned fn_8268ACE8(unsigned *s);
extern void fn_8268BA10(unsigned *dst, unsigned *src);
extern void fn_8278CF00(Obj_8278CF70 *o);
extern int fn_8268AE50(char *a, char *b);
extern char *strchr(const char *s, int c);

static char *Data(unsigned *p)
{
    return (char *)((*p & 0xfffffffc) + 8);
}

void fn_8278CF70(Obj_8278CF70 *o, unsigned *s)
{
    if ((unsigned char)o->flags.f800 != 0) {
        if (fn_8268ACE8(&o->str) != fn_8268ACE8(s) ||
            fn_8268AE50(Data(&o->str), Data(s)) != 0)
            fn_8278CF00(o);
    }
    fn_8268BA10(&o->str, s);
    o->flags.f4 = 1;
    if (strchr(Data(&o->str), 0x2c) == 0)
        o->flags.f1000 = 1;
    else
        o->flags.f1000 = 0;
}

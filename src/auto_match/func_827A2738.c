typedef unsigned short ushort;
extern int *fn_82725DF0(int a, int b, int c, int d);

typedef struct {
    ushort pad : 9;
    ushort b6 : 1;
    ushort pad2 : 4;
    ushort b1 : 1;
    ushort b0 : 1;
} Flags;

typedef struct {
    char pad[0x10];
    int x10;
    char pad2[0x68 - 0x14];
    Flags f;
} Obj;

int fn_827A2738(Obj *p, int a, int b)
{
    int *r;
    if (p->x10 != 0) {
        r = fn_82725DF0(p->x10, a, b, 1);
        if (r != 0 && *r == 3) {
            if ((unsigned char)p->f.b1 && (unsigned char)p->f.b6) {
                p->f.b6 = 0;
            }
        }
    }
    return 1;
}

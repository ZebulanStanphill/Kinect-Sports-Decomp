typedef struct Obj_82484D38 {
    char pad0[0xc];
    int fc;
    char pad10[0xc];
    unsigned int f1c;
    char pad20[0x14];
    char name[0x100];
    char name2[0x100];
    char pad234[0x200];
    char src1[0x100];
    char src2[0x100];
    char src3[0x100];
} Obj_82484D38;
extern void fn_82485850(Obj_82484D38 *o, char *p);
extern int *fn_8225F160(void);

static void CopyStr(char *d, const char *s)
{
    char *e = d + 0x100; char c;
do { if (d >= e) break; c = *s++; *d++ = c; } while (c != 0);
if (d == e) d[-1] = 0;

}

void fn_82484D38(Obj_82484D38 *o)
{
    int *r;
    CopyStr(o->name, o->src1);
    if (o->f1c != 0)
        o->fc = o->f1c;
    CopyStr(o->name2, o->src2);
    fn_82485850(o, o->src3);
    r = fn_8225F160();
    r[0] = 0;
    r[7] = 0;
    r[8] = 0;
    r[9] = 0;
    r[10] = 4;
}

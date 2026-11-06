typedef struct T_823A3360 { char pad[0x14]; int f14; int f18; } T_823A3360;
typedef struct R_823A3360 { int f0; int f4; } R_823A3360;
typedef struct Q_823A3360 { R_823A3360 *f0; } Q_823A3360;
typedef struct M_823A3360 {
    char pad0[8];
    Q_823A3360 *f8;
    char padc[0xd4 - 0xc];
    struct { char pad[0x14]; T_823A3360 *f14; } *fd4;
} M_823A3360;
typedef struct Obj_823A3360 { char pad[8]; M_823A3360 *f8; } Obj_823A3360;
extern int fn_82399BA0(M_823A3360 *m);
extern unsigned fn_822AA770(int a);
extern int fn_8239D7F8(M_823A3360 *m, int a);

int fn_823A3360(Obj_823A3360 *p)
{
    int a;
    int b;
    M_823A3360 *m;
    T_823A3360 *t;
    int r;

    a = fn_82399BA0(p->f8);
    m = p->f8;
    if (fn_822AA770(m->f8->f0->f4) == 0 && fn_8239D7F8(m, 1) != 0)
        b = 1;
    else
        b = 0;
    if (a != 0 && b != 0)
        r = 0;
    else {
        t = m->fd4->f14;
        if (t->f14 != 0 || t->f18 != 0)
            r = 0;
        else
            r = 1;
    }
    return r;
}

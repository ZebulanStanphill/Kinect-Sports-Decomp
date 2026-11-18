typedef struct Date_82739FC8 {
    char pad0[0x48];
    __int64 ms;
    int f50;
    int year;
    int doy;
} Date_82739FC8;

typedef struct Obj_82739FC8 {
    char pad0[8];
    char *x8;
    char pad1[0xc];
    int p18;
    int n1c;
} Obj_82739FC8;

extern unsigned char fn_82695468(Obj_82739FC8 *, int);
extern void fn_826954C0(Obj_82739FC8 *, const char *, int, int);
extern void *fn_826957D0(Obj_82739FC8 *, int);
extern double fn_826972E0(void *, int);
extern unsigned char fn_82739680(int);
extern void fn_827397D8(Date_82739FC8 *);

void fn_82739FC8(Obj_82739FC8 *o)
{
    if (fn_82695468(o, 0x23) == 0) {
        fn_826954C0(o, "Date", 0, 0);
    } else {
        Date_82739FC8 *d = o->x8 != 0 ? (Date_82739FC8 *)(o->x8 - 0x10) : 0;
        if (o->n1c >= 1) {

            int year = (int)fn_826972E0(fn_826957D0(o, 0), o->p18);
            int doy;
            int y;
            if (year < 100 && year >= 0) {
                year += 0x76c;
            }
            doy = d->doy;
            if (doy >= 0x3c) {
                int u = fn_82739680(d->year);
                int v = fn_82739680(year);
                d->doy = doy - u + v;
            }
            d->year = year;
            y = year - 0x7b2;
            d->ms = (__int64)((y + 0x171) / 400 - (y + 0x45) / 100 + (y + 1) / 4 + y * 0x16d + d->doy) *
                        86400000 +
                    d->f50;
            fn_827397D8(d);
        }
    }
}

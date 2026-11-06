typedef struct Sub_824E3CC0 {
    int f0, f4, f8, fc;
    int f10;
} Sub_824E3CC0;
typedef struct Mid_824E3CC0 {
    char pad[0x14];
    Sub_824E3CC0 *f14;
    int f18;
} Mid_824E3CC0;
typedef struct Obj_824E3CC0 {
    char pad[0xd54];
    Mid_824E3CC0 *fd54;
} Obj_824E3CC0;
typedef struct Glob_831D1298 {
    char pad[0x84];
    int f84;
    int f88;
    int f8c;
} Glob_831D1298;

extern int *fn_8225F160(void);
extern Glob_831D1298 lbl_831D1298;
extern unsigned int lbl_832765BC;

void fn_824E3CC0(Obj_824E3CC0 *o)
{
    Sub_824E3CC0 *s = o->fd54->f14;
    if (s != 0 && o->fd54->f18 == 0 && lbl_832765BC == 0) {
        if (s->f10 != 0) {
            lbl_831D1298.f84 = fn_8225F160()[0xd];
        } else {
            lbl_831D1298.f84 = 1;
        }
        lbl_831D1298.f8c = fn_8225F160()[3];
    }
}

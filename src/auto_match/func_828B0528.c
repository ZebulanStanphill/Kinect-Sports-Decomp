typedef struct Info_828B0528 {
    int f0;
    int state;
} Info_828B0528;

typedef struct Obj_828B0528 {
    char pad[0x58];
    void *p58;
} Obj_828B0528;

extern Info_828B0528 *fn_8289D8D0(void);
extern unsigned char fn_828ACCB0(Obj_828B0528 *o);
extern unsigned char fn_828ACCE8(Obj_828B0528 *o);
extern unsigned char fn_828D2E20(void *p);
extern unsigned char fn_828D9A48(Obj_828B0528 *o);

unsigned char fn_828B0528(Obj_828B0528 *o)
{
    Info_828B0528 *info;
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;

    info = fn_8289D8D0();
    a = (fn_828ACCB0(o) || fn_828ACCE8(o));
    b = (a && info != 0 && info->state == 1);
    c = (b && (o->p58 == 0 || !fn_828D2E20(o->p58)));
    d = (c && !fn_828D9A48(o));
    return d;
}

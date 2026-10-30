struct Sub_8240CF70;
typedef struct Info_8240CF70 { char pad[0x7a0]; int f7a0; } Info_8240CF70;
typedef struct VT_8240CF70 { void *f0; Info_8240CF70 *(*f4)(struct Sub_8240CF70 *); Info_8240CF70 *(*f8)(struct Sub_8240CF70 *); } VT_8240CF70;
typedef struct Sub_8240CF70 { VT_8240CF70 *vt; } Sub_8240CF70;
typedef struct Obj_8240CF70 { char pad[0x44]; Sub_8240CF70 sub; char pad2[0x58 - 0x48]; int f58; char pad3[0x70 - 0x5c]; int f70; char pad4[0xf8 - 0x74]; int ff8; } Obj_8240CF70;

int fn_8240CF70(Obj_8240CF70 *o)
{
    int a, b;
    Sub_8240CF70 *s = &o->sub;
    a = (s->vt->f4(s)->f7a0 != 0) || (o->f58 != 0);
    b = (s->vt->f8(s)->f7a0 != 0) || (o->f70 != 0);
    if (a || b || o->ff8 == 0) return 0;
    return 1;
}

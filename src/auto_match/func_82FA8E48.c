extern char lbl_8217D040[];
extern char lbl_8216CBE4[];
extern char lbl_8216CBF8[];
extern char lbl_8216CC00[];
extern char lbl_8216CC18[];
extern char lbl_8216CC7C[];
extern char lbl_821968A4[];

typedef struct Base4_82FA8E48 { void *vt; int pad[2]; } Base4_82FA8E48;
extern void fn_82FAC568(Base4_82FA8E48 *b);

typedef struct Base10_82FA8E48 { void *vt; int f14; } Base10_82FA8E48;
typedef struct Base18_82FA8E48 { void *vt; } Base18_82FA8E48;

static __forceinline void Base10_Ctor_82FA8E48(Base10_82FA8E48 *b)
{
    b->f14 = 0;
    b->vt = lbl_8216CBE4;
}

typedef struct Sub_82FA8E48 {
    int a;
    int b;
    unsigned char f0 : 1;
    unsigned char f1 : 1;
} Sub_82FA8E48;

typedef struct Obj_82FA8E48 {
    void *vt;               /* 0x00 */
    Base4_82FA8E48 base4;   /* 0x04 */
    Base10_82FA8E48 base10; /* 0x10 */
    Base18_82FA8E48 base18; /* 0x18 */
    Sub_82FA8E48 sub;       /* 0x1c */
    int f28;
    int f2c;
    short f30;
    unsigned char f32;
    unsigned char f33;
    unsigned char g0 : 1;
    unsigned char g1 : 1;
} Obj_82FA8E48;

static __forceinline void Sub_Init_82FA8E48(Sub_82FA8E48 *s)
{
    s->a = 0;
    s->b = 0;
    s->f0 = 0;
    s->f1 = 0;
}

Obj_82FA8E48 *fn_82FA8E48(Obj_82FA8E48 *o)
{
    Base18_82FA8E48 *b18;
    o->vt = lbl_8217D040;
    fn_82FAC568(&o->base4);
    b18 = &o->base18;
    Base10_Ctor_82FA8E48(&o->base10);
    b18->vt = lbl_821968A4;
    o->vt = lbl_8216CC18;
    o->base4.vt = lbl_8216CC00;
    o->base10.vt = lbl_8216CBF8;
    o->base18.vt = lbl_8216CC7C;
    Sub_Init_82FA8E48(&o->sub);
    o->f2c = 0;
    o->f30 = 0;
    o->f32 = 0;
    o->f33 = 0xff;
    o->g0 = 0;
    o->g1 = 0;
    return o;
}

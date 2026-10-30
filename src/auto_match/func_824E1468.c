typedef struct Vt_824E1468 { char pad[0x24]; void (*f24)(struct Ob_824E1468 *); } Vt_824E1468;
typedef struct Ob_824E1468 { Vt_824E1468 *vt; } Ob_824E1468;
typedef struct S_824E1468 {
  Ob_824E1468 *p0; char pad4[8];
  Ob_824E1468 *pc; Ob_824E1468 *p10; Ob_824E1468 *p14; Ob_824E1468 *p18; Ob_824E1468 *p1c; Ob_824E1468 *p20; Ob_824E1468 *p24; Ob_824E1468 *p28; Ob_824E1468 *p2c;
  char pad30[0x30]; float f60;
} S_824E1468;
typedef struct Owner_824E1468 { char pad[0xfc]; S_824E1468 *s; } Owner_824E1468;
extern int fn_824CD030(void);
extern float lbl_821CC160;

void fn_824E1468(Owner_824E1468 *o)
{
  o->s->f60 = lbl_821CC160;
  if (fn_824CD030() != 0) {
    o->s->p0->vt->f24(o->s->p0);
    o->s->pc->vt->f24(o->s->pc);
    o->s->p10->vt->f24(o->s->p10);
    o->s->p14->vt->f24(o->s->p14);
    o->s->p18->vt->f24(o->s->p18);
    o->s->p1c->vt->f24(o->s->p1c);
    o->s->p20->vt->f24(o->s->p20);
    o->s->p24->vt->f24(o->s->p24);
    o->s->p28->vt->f24(o->s->p28);
    o->s->p2c->vt->f24(o->s->p2c);
  }
}

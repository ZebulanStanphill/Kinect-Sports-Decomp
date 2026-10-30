extern void fn_82230300(void *s, int a, int b);
extern void fn_822315A0(void *rc);
extern void fn_822D01E8(void *s, int a, int b, int c, void *d, int e);
extern void *fn_82365BD8(void *tmp, void *src);
extern int lbl_821AD588[];
extern int lbl_821ADC90[];
extern float lbl_821CC160;

typedef struct Sub_822D1DA8 {
  void *vt; char pad[0x2c - 4]; char str[0x1c]; int f48; float f4c; int pad50; int f54;
} Sub_822D1DA8;
typedef struct Obj_822D1DA8 {
  void *vt; int uses; int weak; Sub_822D1DA8 sub;
} Obj_822D1DA8;
typedef struct SP_822D1DA8 { void *p; void *rc; } SP_822D1DA8;

Obj_822D1DA8 *fn_822D1DA8(Obj_822D1DA8 *o, int a, int b, void *src, int e)
{
  SP_822D1DA8 t1, t2;
  Sub_822D1DA8 *s;
  SP_822D1DA8 *r;
  o->uses = 1;
  o->vt = lbl_821AD588;
  o->weak = 1;
  s = &o->sub;
  if (s != 0) {
    r = (SP_822D1DA8 *)fn_82365BD8(&t1, src);
    fn_822D01E8(s, a, b, 5, fn_82365BD8(&t2, r), e);
    s->vt = lbl_821ADC90;
    fn_82230300(s->str, 0, 0);
    s->f48 = 0;
    s->f54 = 0;
    s->f4c = lbl_821CC160;
    if (r->rc != 0) fn_822315A0(r->rc);
  }
  return o;
}

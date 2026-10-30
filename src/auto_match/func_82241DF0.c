typedef struct Obj_82241DF0 {
  void *vt;
  char pad[0x208];
  void *f20c;
  char pad2[4];
  int f214, f218, f21c;
} Obj_82241DF0;
typedef struct Rep_82241DF0 {
  void *vt; int uses; int weak;
  Obj_82241DF0 obj;
} Rep_82241DF0;
typedef struct SP_82241DF0 { Obj_82241DF0 *p; Rep_82241DF0 *rep; } SP_82241DF0;
extern void fn_822315A0(void *);
extern void fn_82233640(void *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_82240DB8(void *, int);
extern void *fn_8265C9E0(unsigned);
extern char lbl_82197384[];
extern char lbl_82197400[];
extern char lbl_821AD588[];

SP_82241DF0 *fn_82241DF0(SP_82241DF0 *sp)
{
  Obj_82241DF0 *q;
  Rep_82241DF0 *r = (Rep_82241DF0 *)fn_8265C9E0(0x270);
  if (r != 0) {
    Obj_82241DF0 *o;
    r->uses = 1;
    r->vt = lbl_821AD588;
    r->weak = 1;
    o = &r->obj;
    if (o != 0) {
      fn_82233640(o);
      o->vt = lbl_82197400;
      fn_82240DB8(&o->f20c, 1);
      o->f21c = 1;
      o->f218 = 0;
      o->f214 = 7;
      o->f20c = lbl_82197384;
    }
  } else {
    r = 0;
  }
  q = &r->obj;
  sp->p = 0;
  sp->rep = 0;
  if (r != 0) {
    if (fn_8223AAC0(r) != 0) {
      if (sp->rep != 0) fn_822315A0(sp->rep);
      sp->rep = r;
      sp->p = q;
    }
    fn_822315A0(r);
  }
  return sp;
}


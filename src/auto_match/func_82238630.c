typedef struct Obj_82238630 {
  void *vt;
  char pad4[0x2f8];
  char m2fc[0x58];
  char m354[0x58];
  char m3ac[0x58];
} Obj_82238630;
typedef struct Blk_82238630 {
  void *vt;
  int uses;
  int weaks;
  Obj_82238630 obj;
} Blk_82238630;
typedef struct SP_82238630 { Obj_82238630 *px; Blk_82238630 *rep; } SP_82238630;

extern void *fn_8265C9E0(unsigned int);
extern void fn_82240730(Obj_82238630 *);
extern void fn_82240688(void *);
extern unsigned char fn_8223AAC0(Blk_82238630 *);
extern void fn_822315A0(void *);
extern char lbl_82196A4C[], lbl_821AD588[];

SP_82238630 *fn_82238630(SP_82238630 *sp)
{
  Blk_82238630 *q;
  Obj_82238630 *obj;

  q = (Blk_82238630 *)fn_8265C9E0(0x410);
  if (q != 0) {
    q->uses = 1;
    q->vt = lbl_821AD588;
    q->weaks = 1;
    obj = &q->obj;
    if (obj != 0) {
      fn_82240730(obj);
      obj->vt = lbl_82196A4C;
      fn_82240688(obj->m2fc);
      fn_82240688(obj->m354);
      fn_82240688(obj->m3ac);
    }
  } else {
    q = 0;
  }
  obj = &q->obj;
  sp->px = 0;
  sp->rep = 0;
  if (q != 0) {
    if (fn_8223AAC0(q) != 0) {
      if (sp->rep != 0) {
        fn_822315A0(sp->rep);
      }
      sp->rep = q;
      sp->px = obj;
    }
    fn_822315A0(q);
  }
  return sp;
}

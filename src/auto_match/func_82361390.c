typedef struct { void *px; int *rep; } SP_82361390;
typedef struct { void *vt; int pad; SP_82361390 sp; } Obj_82361390;
typedef struct { void *vt; int uses; int weak; Obj_82361390 obj; } Rep_82361390;
extern void fn_822315A0(int *);
extern unsigned char fn_8223AAC0(int *);
extern Rep_82361390 *fn_8265C9E0(int);
extern char lbl_821AD588[];
extern char lbl_821B294C[];

SP_82361390 *fn_82361390(SP_82361390 *param_1, SP_82361390 *param_2)
{
  Rep_82361390 *mem;
  Rep_82361390 *r;
  Obj_82361390 *o;
  SP_82361390 *sp;
  int *rep;
  void *px;

  mem = fn_8265C9E0(0x1c);
  if (mem != 0) {
    mem->uses = 1;
    mem->vt = lbl_821AD588;
    mem->weak = 1;
    o = &mem->obj;
    if (o != 0) {
      o->pad = 0;
      o->vt = lbl_821B294C;
      sp = &o->sp;
      sp->px = 0;
      sp->rep = 0;
      rep = param_2->rep;
      px = param_2->px;
      if (rep != 0 && fn_8223AAC0(rep) != 0) {
        if (sp->rep != 0) fn_822315A0(sp->rep);
        sp->rep = rep;
        sp->px = px;
      }
    }
    r = mem;
  } else {
    r = 0;
  }
  param_1->rep = (int *)r;
  param_1->px = &r->obj;
  return param_1;
}

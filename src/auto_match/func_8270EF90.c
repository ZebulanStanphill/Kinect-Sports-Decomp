extern int fn_826C3378();

typedef struct { int pad[2]; unsigned int rc; } Rc;
typedef struct { Rc *a0; unsigned int a4; char a8; int ac; int a10; Rc *a14; int a18; int a1c; int a20; int a24; __int64 a28; int a30; int a34; char a38; char a39; } Obj;
typedef struct { Rc *a0; unsigned int a4; unsigned char a8; } Src;
typedef struct { int pad[2]; Rc *rc; } In;
typedef struct { In *p; } Ref;

Obj *fn_8270EF90(Obj *o, Src *s, Ref *r)
{
  Rc *rc;
  Rc *p;
  o->a8 = 0;
  p = s->a0;
  o->a0 = p;
  if (p != 0) {
    p->rc = (p->rc + 1) & 0x8fffffff;
  }
  o->a4 = 0;
  if (s->a4 != 0) {
    fn_826C3378(o, s->a4, s->a8 & 1);
  }
  o->a10 = 0;
  o->ac = 0;
  rc = r->p->rc;
  o->a14 = rc;
  rc->rc = rc->rc + 1;
  o->a18 = 0;
  o->a1c = 0;
  o->a20 = 0;
  o->a24 = 0;
  o->a28 = 0;
  o->a30 = 0;
  o->a34 = 0;
  o->a38 = 1;
  o->a39 = 0;
  return o;
}

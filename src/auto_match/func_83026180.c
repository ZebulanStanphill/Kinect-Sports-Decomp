typedef struct Obj Obj;
typedef struct ObjVt {
  void *f0;
  void *f4;
  void (*f8)(Obj *);
  void *fc;
  void (*f10)(Obj *, void *);
} ObjVt;
struct Obj { ObjVt *vt; };

typedef struct Req {
  void *p0;
  int f4;
  int f8;
  unsigned short fc;
  char pad[0x340 - 0xe];
  int state;
} Req;

typedef struct Ent { unsigned char busy; char pad[15]; } Ent;
typedef struct Base {
  char pad[0xda];
  unsigned char flags;
  char pad2[0xf4 - 0xdb];
  Ent ents[1];
} Base;

typedef struct Ctx {
  char pad0[8];
  Base *base;
  Obj *obj;
  unsigned char f10_pad[4];
  unsigned char f14;
  unsigned char f15;
  unsigned char f16;
  unsigned char f17;
  int f18;
  int idx;
  Req *cur;
} Ctx;

extern int fn_83037510(Req *, unsigned short, int);

void fn_83026180(Ctx *c, Req *r)
{
  if (c->base->ents[c->idx].busy == 0 && (c->base->flags & 1u) == 0) {
    c->f15 = 0;
    if (r->state == 0x11) {
      c->f14 = 1;
    }
    if (r->p0 == 0) {
      unsigned short n = r->fc;
      int m = c->f18;
      if (fn_83037510(r, n, m) != 1) {
        r->state = 2;
        return;
      }
      c->f16 = 1;
    }
    else {
      c->f16 = 0;
    }
    c->cur = r;
    r->f8 = r->state;
    c->obj->vt->f10(c->obj, c->cur);
    r->state = c->cur->f8;
  }
  else {
    if (c->f15 == 0) {
      c->obj->vt->f8(c->obj);
    }
    c->f15 = 1;
  }
}

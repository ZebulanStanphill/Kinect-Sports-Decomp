typedef struct { void *vt; int f4; int f8; } Obj;
typedef struct { void *vt; int uses; int weaks; Obj obj; } Block;
typedef struct { Obj *ptr; Block *rep; } SP;
extern void *fn_8265C9E0(int);
extern char lbl_821AD588[];
extern char lbl_821B457C[];

SP *fn_82376818(SP *out, int a)
{
  Block *b;
  Obj *o;

  b = (Block *)fn_8265C9E0(0x1c);
  if (b != 0) {
    b->uses = 1;
    b->vt = lbl_821AD588;
    b->weaks = 1;
    o = &b->obj;
    if (o != 0) {
      o->f4 = 1;
      o->f8 = a;
      o->vt = lbl_821B457C;
    }
  } else {
    b = 0;
  }
  out->rep = b;
  out->ptr = &b->obj;
  return out;
}

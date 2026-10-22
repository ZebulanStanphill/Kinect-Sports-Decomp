typedef struct { char pad[0x114]; int f114; } P2;
typedef struct { void *vt; int f4; int f8; P2 *fc; int f10; char pad[0x30 - 0x14]; } Obj;
typedef struct { void *vt; int uses; int weaks; int pad; Obj obj; } Block;
typedef struct { Obj *ptr; Block *rep; } SP;
extern void *fn_8265C9E0(int);
extern char lbl_821A8D8C[];
extern char lbl_821AF0A0[];

SP *fn_822C5D40(SP *out, P2 *p2, int p3, int *p4)
{
  Block *b;
  Obj *o;
  int v4;
  int v8;

  b = (Block *)fn_8265C9E0(0x40);
  if (b != 0) {
    b->uses = 1;
    b->vt = lbl_821A8D8C;
    b->weaks = 1;
    o = &b->obj;
    if (o != 0) {
      v4 = *p4;
      v8 = p2->f114;
      o->fc = p2;
      o->f10 = p3;
      o->vt = lbl_821AF0A0;
      o->f4 = v4;
      o->f8 = v8;
    }
  } else {
    b = 0;
  }
  out->rep = b;
  out->ptr = &b->obj;
  return out;
}

struct If_82A8CE28;
typedef struct VT_82A8CE28 {
  void *s0;
  unsigned char (*f4)(struct If_82A8CE28 *);
  void *s8;
  unsigned char (*fc)(struct If_82A8CE28 *, int);
} VT_82A8CE28;
typedef struct If_82A8CE28 { VT_82A8CE28 *vt; } If_82A8CE28;
typedef struct Obj_82A8CE28 { int f0; If_82A8CE28 *f4; int f8; } Obj_82A8CE28;

unsigned char fn_82A8CE28(Obj_82A8CE28 *o)
{
  return o->f4->vt->f4(o->f4) && o->f4->vt->fc(o->f4, o->f8);
}

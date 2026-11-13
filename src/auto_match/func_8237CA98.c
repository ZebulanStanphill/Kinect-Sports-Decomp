typedef struct Rc_8237CA98 { void (**vt)(struct Rc_8237CA98 *); int pad4; long count; } Rc_8237CA98;
typedef struct Obj_8237CA98 {
  void *vt;
  char pad4[0x24c];
  Rc_8237CA98 *ref;
  char pad254[0x70];
  void *pool;
  char pad2c8[0x14];
  void *b2dc;
  void *b2e0;
  void *b2e4;
  void *b2e8;
} Obj_8237CA98;
extern long _InterlockedDecrement(long volatile *);
extern char lbl_821B388C[];
extern void fn_825708F0(void *pool, void *p);
extern void fn_82366A98(Obj_8237CA98 *o);

void fn_8237CA98(Obj_8237CA98 *o)
{
  o->vt = lbl_821B388C;
  fn_825708F0(o->pool, o->b2e8);
  fn_825708F0(o->pool, o->b2dc);
  fn_825708F0(o->pool, o->b2e0);
  fn_825708F0(o->pool, o->b2e4);
  if (o->ref != 0) {
    Rc_8237CA98 *c = o->ref;
    if (_InterlockedDecrement(&c->count) == 0) {
      c->vt[1](c);
    }
  }
  fn_82366A98(o);
}

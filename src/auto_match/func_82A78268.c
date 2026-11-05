typedef struct Item_82A78268 { char pad[0x24]; int f24; } Item_82A78268;
typedef struct Itf_82A78268 Itf_82A78268;
struct Itf_82A78268 {
  struct { char pad[0x24]; void (*f24)(Itf_82A78268 *); } *vt;
};
typedef struct Obj_82A78268 {
  void *vt;
  char pad4[0x74];
  void *p78;
  char pad7c[8];
  char q84[0x34];
  Item_82A78268 *pb8;
  char padbc[0x3c + 4];
  Itf_82A78268 *pfc;
  char p100[4];
} Obj_82A78268;
extern void fn_82A4F4E0(void *);
extern void fn_82A772B8(void *);
extern Item_82A78268 *fn_82A776F0(void *);
extern void fn_82A780C8(void *);
extern void fn_82A819E0(void *);
extern char lbl_820A6CC4[];

static __forceinline void Rel(Item_82A78268 *p)
{
  if (p->f24 != 0) {
    p->f24 = 0;
  } else {
    fn_82A4F4E0(p);
  }
}

void fn_82A78268(Obj_82A78268 *o)
{
  Item_82A78268 *p = o->pb8;
  Item_82A78268 *q;
  o->vt = lbl_820A6CC4;
  if (p != 0) {
    Rel(p);
  }
  while ((q = fn_82A776F0(o->q84)) != 0) {
    Rel(q);
  }
  if (o->pfc != 0) {
    o->pfc->vt->f24(o->pfc);
  }
  fn_82A772B8(&o->pfc);
  fn_82A772B8(o->p100);
  if (o->p78 != 0) {
    fn_82A4F4E0(o->p78);
    o->p78 = 0;
  }
  o->vt = 0;
  fn_82A780C8(o->q84);
  fn_82A819E0(o);
}

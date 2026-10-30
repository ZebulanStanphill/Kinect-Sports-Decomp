typedef struct { int kind; int val; } Msg_8228DD18;
typedef struct { void *ptr; void *rep; } SP_8228DD18;
typedef struct Item_8228DD18 { char pad[0x14]; int id; } Item_8228DD18;
typedef struct List_8228DD18 { char pad[0xc]; Item_8228DD18 **begin; Item_8228DD18 **end; char pad2[0x8]; char sub[1]; } List_8228DD18;
typedef struct Obj_8228DD18 {
  char pad[0x9c]; List_8228DD18 *list; char pad2[0xa4]; void *f144; char pad3[0x48]; int f190; int f194;
} Obj_8228DD18;
extern void fn_82279CA0(Obj_8228DD18 *, int);
extern void fn_822848B8(void *);
extern void fn_824BF8A8(void *, Msg_8228DD18 *);
extern void **fn_82279C58(SP_8228DD18 *, Obj_8228DD18 *);
extern void fn_82672C20(void *, const char *, int, int);
extern void fn_822315A0(void *);

void fn_8228DD18(Obj_8228DD18 *o)
{
  List_8228DD18 *l;
  SP_8228DD18 sp;
  o->f190 = 0;
  fn_82279CA0(o, 1);
  if (o->f144 != 0) {
    fn_822848B8(o->f144);
    o->f144 = 0;
  }
  l = o->list;
  if (l != 0) {
    Item_8228DD18 **it = l->begin;
    Item_8228DD18 **e = l->end;
    if (it != e) {
      do {
        Msg_8228DD18 m;
        m.kind = 3;
        m.val = (*it)->id;
        fn_824BF8A8(l->sub, &m);
        it++;
      } while (it != e);
    }
  }
  fn_82672C20(*fn_82279C58(&sp, o), "_root.hideButtons", 0, 0);
  if (sp.rep != 0)
    fn_822315A0(sp.rep);
  o->f194 = 0;
}

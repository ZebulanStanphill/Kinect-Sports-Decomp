struct Res_830101C8;
typedef struct ResVt_830101C8 { int pad[10]; void (*f28)(struct Res_830101C8 *, void *); } ResVt_830101C8;
typedef struct Res_830101C8 { ResVt_830101C8 *vt; char pad[0x10]; unsigned typ; } Res_830101C8;
typedef struct Ent_830101C8 { int p0, p4; Res_830101C8 *res; char pad[0x1c]; int key; } Ent_830101C8;
typedef struct Iter_830101C8 { Ent_830101C8 **node; int pad; } Iter_830101C8;
typedef struct Node_830101C8 { int p0, p4; Ent_830101C8 *ent; } Node_830101C8;
typedef struct It2_830101C8 { Node_830101C8 *n; int z; } It2_830101C8;
typedef struct Obj_830101C8 { char pad[0x50]; Node_830101C8 *head; char pad2[0xc]; unsigned count; } Obj_830101C8;
extern void fn_82FF5198(unsigned, int);
extern It2_830101C8 *fn_83013400(void *, Obj_830101C8 *, Ent_830101C8 *, void *, It2_830101C8);
extern void fn_83032FE8(void *);
extern unsigned lbl_83264304;

void fn_830101C8(Obj_830101C8 *o)
{
  if (o->count > 0) {
    It2_830101C8 it;
    it.n = o->head;
    it.z = 0;
    while (it.n != 0) {
      Ent_830101C8 *e = it.n->ent;
      int tmp[16];
      int t;
      char ret[8];
      tmp[0] = 0;
      t = e->res->typ >> 8;
      if (t == 0x4011 || t == 0x5011) {
        if (t != 0x4011)
          fn_83032FE8(e->res);
        e->res->vt->f28(e->res, tmp);
      }
      fn_82FF5198(lbl_83264304, e->key);
      it = *fn_83013400(ret, o, e, &o->head, it);
    }
  }
}

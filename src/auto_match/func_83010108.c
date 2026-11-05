struct Res_83010108;
typedef struct ResVt_83010108 { int pad[10]; void (*f28)(struct Res_83010108 *, void *); } ResVt_83010108;
typedef struct Res_83010108 { ResVt_83010108 *vt; char pad[0x10]; unsigned typ; } Res_83010108;
typedef struct Ent_83010108 { int p0, p4; Res_83010108 *res; char pad[0x1c]; int key; } Ent_83010108;
typedef struct Iter_83010108 { Ent_83010108 **node; int pad; } Iter_83010108;
typedef struct Node_83010108 { int p0, p4; Ent_83010108 *ent; } Node_83010108;
typedef struct It2_83010108 { Node_83010108 *n; int z; } It2_83010108;
typedef struct Obj_83010108 { char pad[0x70]; Node_83010108 *head; char pad2[0xc]; unsigned count; } Obj_83010108;
extern void fn_82FF5198(unsigned, int);
extern It2_83010108 *fn_83013400(void *, Obj_83010108 *, Ent_83010108 *, void *, It2_83010108);
extern void fn_83032FE8(void *);
extern unsigned lbl_83264304;

void fn_83010108(Obj_83010108 *o)
{
  if (o->count > 0) {
    It2_83010108 it;
    it.n = o->head;
    it.z = 0;
    while (it.n != 0) {
      Ent_83010108 *e = it.n->ent;
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

struct Res_83011B20;
typedef struct ResVt_83011B20 { int pad[10]; void (*f28)(struct Res_83011B20 *, void *); } ResVt_83011B20;
typedef struct Res_83011B20 { ResVt_83011B20 *vt; char pad[0x10]; unsigned typ; } Res_83011B20;
typedef struct Ent_83011B20 { int p0, p4; Res_83011B20 *res; char pad[0x1c]; int key; } Ent_83011B20;
typedef struct Node_83011B20 { struct Node_83011B20 *next; int group; Ent_83011B20 *ent; } Node_83011B20;
typedef struct It2_83011B20 { Node_83011B20 *n; Node_83011B20 *prev; } It2_83011B20;
typedef struct Obj_83011B20 { char pad[0x70]; Node_83011B20 *head; } Obj_83011B20;
extern unsigned char fn_83010770(Obj_83011B20 *o, unsigned filter, int group);
extern void fn_82FF5198(unsigned, int);
extern It2_83011B20 *fn_83013400(void *, Obj_83011B20 *, Ent_83011B20 *, void *, It2_83011B20);
extern void fn_83032FE8(void *);
extern unsigned lbl_83264304;

void fn_83011B20(Obj_83011B20 *o, unsigned filter)
{
  It2_83011B20 it;
  it.n = o->head;
  it.prev = 0;
  while (it.n != 0) {
    if (fn_83010770(o, filter, it.n->group)) {
      Ent_83011B20 *e = it.n->ent;
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
    } else {
      it.prev = it.n;
      it.n = it.n->next;
    }
  }
}

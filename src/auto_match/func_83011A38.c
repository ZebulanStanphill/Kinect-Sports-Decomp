struct Res_83011A38;
typedef struct ResVt_83011A38 { int pad[10]; void (*f28)(struct Res_83011A38 *, void *); } ResVt_83011A38;
typedef struct Res_83011A38 { ResVt_83011A38 *vt; char pad[0xc]; int group; unsigned typ; } Res_83011A38;
typedef struct Ent_83011A38 { int p0, p4; Res_83011A38 *res; char pad[0x1c]; int key; } Ent_83011A38;
typedef struct Node_83011A38 { struct Node_83011A38 *next; int p4; Ent_83011A38 *ent; } Node_83011A38;
typedef struct It2_83011A38 { Node_83011A38 *n; Node_83011A38 *prev; } It2_83011A38;
typedef struct Obj_83011A38 { char pad[0x50]; Node_83011A38 *head; } Obj_83011A38;
typedef struct Args_83011A38 { int first; int rest[19]; } Args_83011A38;
extern unsigned char fn_83010770(Obj_83011A38 *o, unsigned filter, int group);
extern void fn_82FF5198(unsigned, int);
extern It2_83011A38 *fn_83013400(void *, Obj_83011A38 *, Ent_83011A38 *, void *, It2_83011A38);
extern void fn_83032FE8(void *);
extern unsigned lbl_83264304;

void fn_83011A38(Obj_83011A38 *o, unsigned filter)
{
  It2_83011A38 it;
  Args_83011A38 tmp;
  it.n = o->head;
  it.prev = 0;
  while (it.n != 0) {
    Ent_83011A38 *e = it.n->ent;
    if (fn_83010770(o, filter, e->res->group)) {
      int t;
      char ret[8];
      tmp.first = 0;
      t = e->res->typ >> 8;
      if (t == 0x4011 || t == 0x5011) {
        if (t != 0x4011)
          fn_83032FE8(e->res);
        e->res->vt->f28(e->res, &tmp);
      }
      fn_82FF5198(lbl_83264304, e->key);
      it = *fn_83013400(ret, o, e, &o->head, it);
    } else {
      it.prev = it.n;
      it.n = it.n->next;
    }
  }
}

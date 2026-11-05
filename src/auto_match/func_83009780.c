typedef struct Obj_83009780 Obj_83009780;
typedef struct Child_83009780 Child_83009780;
typedef struct Msg_83009780 {
  int kind;
  int a;
  unsigned b;
  int pad[2];
  unsigned char flag;
} Msg_83009780;
struct Child_83009780 {
  struct {
    int pad[9];
    int (*f24)(Child_83009780 *, Msg_83009780 *);
  } *vt;
};
typedef struct Ent_83009780 {
  int key;
  Child_83009780 *child;
} Ent_83009780;
struct Obj_83009780 {
  struct {
    int pad[40];
    void (*fa0)(Obj_83009780 *, int);
  } *vt;
  int pad[17];
  Ent_83009780 *begin;
  Ent_83009780 *end;
};
extern unsigned char fn_82FFF8C0(Obj_83009780 *, int, int);

int fn_83009780(Obj_83009780 *self, Msg_83009780 *msg)
{
  int r = 1;
  Ent_83009780 *e;
  if (msg->b == 0) {
    int c = 0;
    if (msg->kind == 2) c = 1;
    self->vt->fa0(self, c);
  }
  msg->flag = 1;
  e = self->begin;
  if (e != self->end) {
    do {
      if (fn_82FFF8C0(self, e->key, msg->a) == 0) {
        r = e->child->vt->f24(e->child, msg);
        if (r != 1) return r;
      }
      e++;
    } while (e != self->end);
  }
  return r;
}

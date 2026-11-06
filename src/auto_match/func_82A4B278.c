typedef struct Lock_82A4B278 Lock_82A4B278;
typedef struct LockVt_82A4B278 {
  void *s0;
  void *s1;
  void (*lock)(Lock_82A4B278 *);
  void *s3;
  void *s4;
  void (*unlock)(Lock_82A4B278 *);
} LockVt_82A4B278;
struct Lock_82A4B278 {
  LockVt_82A4B278 *vt;
};
typedef struct Sub_82A4B278 Sub_82A4B278;
typedef struct SubVt_82A4B278 {
  void (*fn0)(Sub_82A4B278 *, int);
} SubVt_82A4B278;
struct Sub_82A4B278 {
  SubVt_82A4B278 *vt;
};
typedef struct Item_82A4B278 {
  int pad0;
  Sub_82A4B278 sub;
} Item_82A4B278;
typedef struct Node_82A4B278 Node_82A4B278;
struct Node_82A4B278 {
  Item_82A4B278 *item;
  Node_82A4B278 *next;
};
typedef struct Obj_82A4B278 {
  char pad0[0x1c];
  Lock_82A4B278 lock;
  char pad20[0x134];
  char list154[0x18];
  Node_82A4B278 *head;
} Obj_82A4B278;

extern void fn_82A47B28(void *, Node_82A4B278 *);
extern void fn_82A4F4E0();

int fn_82A4B278(Obj_82A4B278 *o, Item_82A4B278 *key)
{
  Lock_82A4B278 *lk = &o->lock;
  Node_82A4B278 *n;
  Node_82A4B278 *cur;
  Item_82A4B278 *v;

  lk->vt->lock(lk);
  n = o->head;
  while (n != 0) {
    cur = n;
    {
      Node_82A4B278 *p = n;
      if (p != 0) {
        n = p->next;
        v = p->item;
      } else {
        v = 0;
      }
    }
    if (v == key) {
      fn_82A47B28(o->list154, cur);
      v->sub.vt->fn0(&v->sub, 0);
      fn_82A4F4E0();
      break;
    }
  }
  lk->vt->unlock(lk);
  return 0;
}

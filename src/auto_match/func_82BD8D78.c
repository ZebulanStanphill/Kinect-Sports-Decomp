typedef struct Node_82BD8D78 { int pad0; struct Node_82BD8D78 *next; } Node_82BD8D78;
typedef struct List_82BD8D78 { Node_82BD8D78 *head; Node_82BD8D78 *tail; } List_82BD8D78;
typedef struct Obj_82BD8D78 {
  char pad0[0x10]; unsigned __int64 f10; unsigned __int64 f18; char pad20[8]; unsigned __int64 f28;
  char pad30[0x14]; unsigned short f44; char pad46[2]; int f48; int f4c; unsigned __int64 q[0x19];
  unsigned __int64 f118; char pad120[8]; unsigned __int64 f128; int f130; unsigned char f134; char pad135[3]; int f138;
  char pad13c[0x44]; List_82BD8D78 dst; List_82BD8D78 src;
} Obj_82BD8D78;
void fn_82BD8D78(Obj_82BD8D78 *o)
{
  Node_82BD8D78 *n;
  Node_82BD8D78 *m;
  List_82BD8D78 *src = &o->src;
  int i;
  unsigned __int64 *p;
  n = o->src.head;
  o->f10 = 0;
  o->f18 = 0;
  o->f4c = 0;
  o->f44 = (unsigned short)(o->f28 / 0x14);
  o->f128 = 0;
  o->f130 = 0;
  o->f134 = 0;
  o->f138 = 0;
  if (n != 0) {
    List_82BD8D78 *dst = &o->dst;
    do {
      m = src->head;
      if (m != 0) {
        if (m == src->tail) src->tail = 0;
        src->head = m->next;
        m->next = 0;
      }
      n->next = 0;
      if (dst->tail != 0) dst->tail->next = n; else dst->head = n;
      dst->tail = n;
      n = o->src.head;
    } while (n != 0);
  }
  p = &o->q[-1];
  i = 0x19;
  do {
    p++;
    *p = o->f118;
    i--;
  } while (i != 0);
}

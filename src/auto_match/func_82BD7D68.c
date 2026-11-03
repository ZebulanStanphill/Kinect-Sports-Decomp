typedef struct { int pad0; void (*cb)(void *); } Hook;
typedef struct {
  int pad0;
  void *p4;
  void *p8[2];
  char padc[8];
  Hook *hook;
} Obj;
extern void fn_8265C990(void *, int);
extern void fn_82BD7C38(void *, int, int, int);
extern void fn_82BD8038(void *);

void fn_82BD7D68(Obj *o)
{
  void **pp;
  int n;
  if (o != 0) {
    fn_82BD7C38(o, 0, 0, 0);
    if (o->hook != 0) {
      if (o->hook->cb != 0) {
        o->hook->cb(o);
      }
      o->hook = 0;
    }
    if (o->p4 != 0) {
      fn_82BD8038(o->p4);
      o->p4 = 0;
    }
    pp = o->p8;
    n = 2;
    do {
      if (*pp != 0) {
        fn_82BD8038(*pp);
        *pp = 0;
      }
      n--;
      pp++;
    } while (n != 0);
    fn_8265C990(o, 0x648a0008);
  }
}

typedef struct Node_82FFFEC8 { char pad[0xc]; int f0c; struct Node_82FFFEC8 *next; } Node_82FFFEC8;
typedef struct Obj_82FFFEC8 { void **vt; char pad[0xc]; Node_82FFFEC8 *head; } Obj_82FFFEC8;
typedef struct { int f0; int f4; } Arg_82FFFEC8;
extern unsigned char fn_82FFF8C0(Obj_82FFFEC8 *, int, int);

int fn_82FFFEC8(Obj_82FFFEC8 *o, Arg_82FFFEC8 *a)
{
  Node_82FFFEC8 *n;
  int k;
  for (n = o->head; n != 0; n = n->next) {
    k = n->f0c;
    if (fn_82FFF8C0(o, k, a->f4) != 0) {
      return 1;
    }
  }
  return ((int (*)(void *, void *))o->vt[0x20 / 4])(o, a);
}

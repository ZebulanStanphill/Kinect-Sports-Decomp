typedef struct N N;
struct N { int a; int b; int next; };
typedef struct { char pad[0x24]; int list[2]; N *head; } P;
extern int fn_82BB4E08(void *, N *);
extern void fn_82BBFD90(void *, N *);
extern void fn_82BBFE50(void *, void *);

void fn_82BB5A58(P *p, void *x)
{
  N *n;
  for (n = p->head; n->next != 0; n = (N *)n->next) {
    if (fn_82BB4E08(x, n) > 0) {
      fn_82BBFD90(x, n);
      return;
    }
  }
  fn_82BBFE50(p->list, x);
}

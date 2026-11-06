typedef struct Val_82891410 { int pad[13]; int v34; } Val_82891410;
typedef struct Node_82891410 { struct Node_82891410 *left; int pad[4]; Val_82891410 *val; } Node_82891410;
typedef struct Map_82891410 { int p0; int p1; Node_82891410 *head; } Map_82891410;
extern void fn_828976D0();
extern void fn_82248B90();
extern Map_82891410 *fn_828A12E8();

void fn_82891410(int unused, Map_82891410 *m)
{
  Node_82891410 *it;
  Node_82891410 *cur = fn_828A12E8(m)->head->left;
  int ok;
  it = cur;
  for (;;) {
    Node_82891410 *e = fn_828A12E8(m)->head;
    if (cur != e) ok = 1; else ok = 0;
    if (!ok) break;
    fn_828976D0(cur->val->v34);
    fn_82248B90(&it);
    cur = it;
  }
}

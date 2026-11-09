typedef struct Node_82FA6E98 { unsigned unused; int *vt; char pad[0x34]; struct Node_82FA6E98 *next; } Node_82FA6E98;
extern Node_82FA6E98 *lbl_83264234;
void fn_82FA6E98(void) {
 Node_82FA6E98 *p = lbl_83264234;
 while(p != 0) {
  Node_82FA6E98 *old = p;
  p = p->next;
  ((void (*)(void *, int))old->vt[1])(&old->vt, 0);
 }
}

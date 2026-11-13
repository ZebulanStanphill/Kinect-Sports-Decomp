struct Node_824F2FA0 { void *value; struct Node_824F2FA0 *next; };
struct Owner_824F2FA0 { int pad[4]; struct Node_824F2FA0 *head; int pad2[25]; float last; };
extern const float lbl_821CA45C[2];
extern void fn_824F1AC8(void *, float);
extern void fn_824F46D8(struct Owner_824F2FA0 *);

void fn_824F2FA0(struct Owner_824F2FA0 *o, float t)
{
  struct Node_824F2FA0 *n;
  for (n = o->head; n; n = n->next)
    if (n->value)
      fn_824F1AC8(n->value, t);
  if (t - o->last > lbl_821CA45C[1]) {
    fn_824F46D8(o);
    o->last = t;
  }
}

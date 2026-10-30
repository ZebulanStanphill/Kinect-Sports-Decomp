typedef struct { void *p; void *q; int r; } Val_83030B60;
typedef struct Node_83030B60 { struct Node_83030B60 *next; unsigned key; Val_83030B60 val; } Node_83030B60;
typedef struct { char pad[0xc4]; Node_83030B60 *head; } Obj_83030B60;
extern void fn_82FA5190(void *, void *);
extern void fn_83031520(void *, unsigned);
extern void *lbl_831BC768;

static Val_83030B60 *Find(Node_83030B60 *n, unsigned key)
{
  for (; n != 0; n = n->next)
    if (n->key == key) return &n->val;
  return 0;
}

void fn_83030B60(Obj_83030B60 *o, unsigned key)
{
  Val_83030B60 *v = Find(o->head, key);
  if (v != 0) {
    if (v->p != 0) {
      v->q = v->p;
      fn_82FA5190(lbl_831BC768, v->p);
      v->p = 0;
      v->q = 0;
      v->r = 0;
    }
    fn_83031520(&o->head, key);
  }
}

typedef struct Node_8282A380 {
  struct Node_8282A380 *next;
  int pad[2];
  void *value;  /* 0x0c */
} Node_8282A380;
typedef struct { int pad; Node_8282A380 *head; unsigned int size; } List_8282A380;
typedef struct { char pad[0x4c]; List_8282A380 *list; } Scope_8282A380;
typedef struct { char pad[0x2fc]; char table[1]; } Owner_8282A380;
extern void fn_828298A0(void *key, Owner_8282A380 *owner, void **out);
extern int fn_828297A0(void *value, void *key);
extern void fn_82381BC0(Node_8282A380 **it);
extern void fn_82822510(void *table, int (*match)(void *, void *), void *key, void **out);

void fn_8282A380(void *key, Owner_8282A380 *owner, Scope_8282A380 *scope, void **out)
{
  fn_828298A0(key, owner, out);
  if (*out == 0) {
    if (scope->list->size > 0) {
      Node_8282A380 *end = scope->list->head;
      Node_8282A380 *it = end->next;
      Node_8282A380 *cur = it;
      while (cur != end) {
        if (fn_828297A0(cur->value, key) != 0) {
          *out = cur->value;
          return;
        }
        fn_82381BC0(&it);
        cur = it;
      }
    } else {
      fn_82822510(owner->table, fn_828297A0, key, out);
    }
  }
}

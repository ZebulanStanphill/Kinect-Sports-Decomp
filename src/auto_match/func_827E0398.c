extern int fn_827D88A0();
extern int fn_82811400();
extern void *memcpy(void *, const void *, unsigned int);

typedef struct Alloc_VT_827E0398 { void *slot0; void *slot1; void *slot2; void *(*allocate)(void *self, unsigned int size, void *hint); } Alloc_VT_827E0398;
typedef struct Alloc_827E0398 { Alloc_VT_827E0398 *vt; } Alloc_827E0398;
typedef struct Node_827E0398 { struct Node_827E0398 *left; struct Node_827E0398 *right; } Node_827E0398;
typedef struct AllocHolder_827E0398 { Alloc_827E0398 *alloc; int hint; } AllocHolder_827E0398;
typedef struct Tree_827E0398 {
  Node_827E0398 *head;
  int size;
  AllocHolder_827E0398 ah;
} Tree_827E0398;

typedef struct Args_827E0398 { int key; char data[0x18]; } Args_827E0398;

Tree_827E0398 * fn_827E0398(Tree_827E0398 *param_1, int *param_2)
{
  Args_827E0398 a;
  AllocHolder_827E0398 *ah;
  Node_827E0398 *n;

  fn_82811400(a.data, 0x10);
  a.key = *param_2;
  memcpy(a.data, param_2 + 1, 0x18);
  fn_827D88A0(param_1, &a);
  param_1->size = 0;
  ah = &param_1->ah;
  n = (Node_827E0398 *)ah->alloc->vt->allocate(ah->alloc, 0x10, &ah->hint);
  param_1->head = n;
  n->left = n;
  param_1->head->right = param_1->head;
  return param_1;
}

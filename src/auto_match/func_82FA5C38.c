extern unsigned int lbl_83264218;


typedef struct Node_82FA5C38 { int pad[2]; struct Node_82FA5C38 *prev; void *owner; } Node_82FA5C38;
typedef struct Tbl_82FA5C38 {
  unsigned int top;
  unsigned int mid[24];
  Node_82FA5C38 *heads[][32];
} Tbl_82FA5C38;

void fn_82FA5C38(Tbl_82FA5C38 *param_1,Node_82FA5C38 *param_2,unsigned int param_3,unsigned int param_4)

{
  Node_82FA5C38 *old;

  old = param_1->heads[param_3][param_4];
  param_2->owner = &lbl_83264218;
  param_2->prev = old;
  old->owner = param_2;
  param_1->heads[param_3][param_4] = param_2;
  param_1->top |= 1 << param_3;
  param_1->mid[param_3] |= 1 << param_4;
}

extern int fn_82FA76F0();
extern int fn_82FE6A90();
typedef struct N { struct N *next; unsigned int key; unsigned int v8; unsigned int flags; } N;

void fn_82FA78F8(unsigned int param_1, N **param_2)
{
  fn_82FE6A90(param_1, (*param_2)->v8, 0, 1);
  (*param_2)->flags |= 0x80000000;
  (*param_2)->flags &= 0xbfffffff;
  while (*param_2 != 0) {
    if ((*param_2)->key == param_1) (*param_2)->flags |= 0x80000000;
    *param_2 = (*param_2)->next;
  }
  fn_82FA76F0();
}

typedef int (*code)();
extern int lbl_832642E8;
void fn_82FF6258(int list, unsigned int id);

void fn_8302AE60(int param_1)
{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (*(code *)(**(int **)(param_1 + 0x24) + 0xdc))(*(int **)(param_1 + 0x24));
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x80000000) != 0) {
    fn_82FF6258(lbl_832642E8, *(unsigned int *)(param_1 + 0xc));
  }
}

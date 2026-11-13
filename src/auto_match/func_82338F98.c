extern int fn_822B7068();

typedef struct {
  unsigned int pad[4];
  unsigned int flags[2];
} Sub;

void fn_82338F98(int param_1)
{
  unsigned int iVar1;
  Sub *s;
  int i;

  iVar1 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x10);
  if (iVar1 != 0) {
    fn_822B7068(param_1, **(unsigned int **)(iVar1 + 4));
    s = (Sub *)(**(int **)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x10) + 4) + 0x1d0);
    for (i = 0; i < 2; i++) s->flags[i] |= 2;
    *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x10) = 0;
  }
}

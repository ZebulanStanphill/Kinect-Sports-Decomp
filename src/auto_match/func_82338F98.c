typedef unsigned int uint;
extern int fn_822B7068();

typedef struct {
  uint pad[4];
  uint flags[2];
} Sub;

void fn_82338F98(int param_1)
{
  uint iVar1;
  Sub *s;
  int i;

  iVar1 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x10);
  if (iVar1 != 0) {
    fn_822B7068(param_1, **(uint **)(iVar1 + 4));
    s = (Sub *)(**(int **)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x10) + 4) + 0x1d0);
    for (i = 0; i < 2; i++) s->flags[i] |= 2;
    *(uint *)(*(int *)(param_1 + 0x1a0) + 0x10) = 0;
  }
}

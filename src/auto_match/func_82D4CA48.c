extern unsigned int fn_82D4C8B0(int a, int b, int c, void *d, void *e);
extern int fn_82D4C580(int a, void *b, void *c, unsigned int d, int e, int f);

char * fn_82D4CA48(char *param_1, int param_2, int param_3, int param_4)
{
  unsigned int uVar1;
  int lVar2;
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [32];

  uVar1 = fn_82D4C8B0(param_3, param_2 + 0x20, *(int *)(param_2 + 0x10), auStack_50, auStack_70);
  lVar2 = fn_82D4C580(param_2 + 0x20, auStack_50, auStack_70, uVar1, param_3, param_4);
  *param_1 = (char)(lVar2 != -1);
  return param_1;
}

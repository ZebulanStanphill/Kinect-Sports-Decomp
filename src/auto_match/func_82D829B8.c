typedef int (*code)();
extern int fn_82CE5410();
extern int fn_82D82418();
extern char *fn_82D82548();
extern int fn_82D82710();
extern int fn_82D827B8();
extern int fn_82D828D0();
extern int fn_82D94B58();

int fn_82D829B8(int param_1)
{
  int iVar1;
  char *puVar2;
  char auStack_20 [8];

  iVar1 = fn_82CE5410();
  iVar1 = (*(code *)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x44);
  *(short *)(iVar1 + 4) = 0x44;
  iVar1 = fn_82D94B58();
  fn_82D82418(auStack_20,param_1,iVar1);
  puVar2 = fn_82D82548(auStack_20,param_1,iVar1);
  *(char *)(iVar1 + 0x40) = *puVar2;
  fn_82D828D0(param_1,iVar1);
  fn_82D82710(param_1,iVar1);
  fn_82D827B8(param_1,iVar1);
  return iVar1;
}

extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D2AD88();


void fn_82D20268(int param_1,int *param_2,char param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  iVar3 = fn_82CE5410();
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_2,iVar1,4);
  }
  for (puVar2 = *(unsigned int **)(param_1 + 0x2c); puVar2 != (unsigned int *)0x0;
      puVar2 = (unsigned int *)*puVar2) {
    if (param_3 != '\0') {
      puVar2[0xd] = 0xffffffff;
    }
    *(unsigned int **)(param_2[1] * 4 + *param_2) = puVar2;
    param_2[1] = param_2[1] + 1;
  }
  if (1 < param_2[1]) {
    fn_82D2AD88(*param_2,0,(unsigned __int64)(unsigned int)param_2[1] - 1,0);
  }
  return;
}


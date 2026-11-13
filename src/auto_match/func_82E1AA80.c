extern int fn_82CE5338();
extern int fn_82CE5410();


void fn_82E1AA80(unsigned __int64 param_1,int param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  int *piVar6;
  
  if (0 < (int)param_3) {
    piVar6 = (int *)(param_2 + 8);
    do {
      iVar3 = 0;
      iVar4 = piVar6[-1];
      if (0 < *piVar6) {
        puVar5 = (unsigned int *)(iVar4 + -4);
        do {
          puVar5 = puVar5 + 2;
          uVar1 = *puVar5;
          iVar2 = fn_82CE5410();
          fn_82CE5338(*(unsigned int *)(iVar2 + 0x10),uVar1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar6);
      }
      iVar3 = fn_82CE5410();
      fn_82CE5338(*(unsigned int *)(iVar3 + 0x10),iVar4);
      iVar4 = piVar6[-2];
      iVar3 = fn_82CE5410();
      fn_82CE5338(*(unsigned int *)(iVar3 + 0x10),iVar4);
      param_3 = param_3 + -1;
      piVar6 = piVar6 + 5;
    } while (param_3 != 0);
  }
  iVar4 = fn_82CE5410();
  fn_82CE5338(*(unsigned int *)(iVar4 + 0x10),param_2);
  return;
}


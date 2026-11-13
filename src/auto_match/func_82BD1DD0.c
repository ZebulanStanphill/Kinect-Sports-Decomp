extern int fn_82B7BD28();
extern int fn_82BD1B18();
extern int fn_82BD1BE8();
extern int fn_82BD1CA0();


void fn_82BD1DD0(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  
  iVar2 = fn_82BD1B18(param_1,param_3,param_4);
  iVar6 = 0;
  if (iVar2 == 0) {
    do {
      iVar2 = fn_82BD1CA0(param_1,param_4);
      uVar1 = *(unsigned int *)(param_1[3] + 0x5b0);
      puVar3 = (unsigned int *)fn_82B7BD28(uVar1,0x28);
      puVar5 = puVar3 + 1;
      *puVar3 = uVar1;
      if (puVar5 == (unsigned int *)0x0) {
        puVar5 = (unsigned int *)0x0;
      }
      else {
        puVar3[3] = 0;
        puVar3[7] = 0;
        puVar3[2] = 0x40000000;
        puVar3[8] = 0;
      }
      *puVar5 = (int)param_3;
      puVar5[5] = 0;
      puVar5[4] = *(unsigned int *)(iVar2 + 0x14);
      puVar5[8] = 0;
      *(unsigned int **)(iVar2 + 0x14) = puVar5;
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x20) = iVar2;
      }
      iVar6 = *(int *)(*param_1 + 0x20);
      *param_1 = iVar6;
      if (iVar6 == 0) {
        if (param_1[1] <= param_1[2]) {
          *param_1 = param_2;
          param_1[1] = param_1[1] + 1;
        }
      }
      fn_82BD1BE8(param_1,param_4);
      iVar4 = fn_82BD1B18(param_1,param_3,param_4);
      iVar6 = iVar2;
    } while (iVar4 == 0);
    *(int *)(iVar2 + 0x20) = *param_1;
  }
  return;
}


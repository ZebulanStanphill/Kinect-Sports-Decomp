extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82DF5DB0(int *param_1,unsigned int param_2,int *param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < param_1[1]) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(*param_1 + iVar6);
      uVar1 = *(unsigned int *)(iVar3 + 0x14);
      if ((uVar1 == param_2) || (*(unsigned int *)(iVar3 + 0x18) == param_2)) {
        uVar2 = *(unsigned int *)(iVar3 + 0x18);
        iVar4 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),param_3,4);
        }
        *(unsigned int *)(param_3[1] * 4 + *param_3) = uVar2 ^ uVar1 ^ param_2;
        param_3[1] = param_3[1] + 1;
        iVar4 = fn_82CE5410();
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),param_4,4);
        }
        *(int *)(param_4[1] * 4 + *param_4) = iVar3;
        param_4[1] = param_4[1] + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < param_1[1]);
  }
  return;
}


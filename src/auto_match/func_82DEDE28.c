extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82DEDE28(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_2 * 0xc + *(int *)(param_1 + 8));
  iVar4 = 0;
  if (0 < piVar5[1]) {
    do {
      piVar3 = (int *)((*piVar5 + iVar4) * 8 + *(int *)(param_1 + 0x14));
      iVar1 = *(int *)((piVar3[1] * 0x14 + param_3 + 0x10) * 4 + *(int *)(*piVar3 + 0x18));
      if (iVar1 != 0) {
        iVar2 = fn_82CE5410();
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),param_4,4);
        }
        *(int *)(param_4[1] * 4 + *param_4) = iVar1;
        param_4[1] = param_4[1] + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar5[1]);
  }
  return;
}


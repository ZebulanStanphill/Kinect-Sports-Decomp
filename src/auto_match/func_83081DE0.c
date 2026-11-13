extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_83081D68();


void fn_83081DE0(unsigned int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = fn_83081D68();
  iVar5 = 0;
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)*param_1;
      iVar1 = *(int *)(iVar2 + iVar3);
      if (iVar1 < 0) {
        iVar3 = fn_82CE5410();
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_2,4);
        }
        *(int *)(param_2[1] * 4 + *param_2) = -iVar1;
        param_2[1] = param_2[1] + 1;
        *(int *)(*(int *)*param_1 + iVar2) = iVar5;
        iVar5 = iVar5 + 1;
      }
      else {
        *(unsigned int *)(iVar2 + iVar3) = *(unsigned int *)(iVar1 * 4 + iVar3);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar4 < (int)param_1[1]);
  }
  return;
}


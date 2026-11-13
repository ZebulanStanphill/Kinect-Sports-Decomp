extern int fn_82965280();


void fn_829B3A20(unsigned __int64 param_1,int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  
  if (1 < *param_3) {
    fn_82965280(0xffffffff829b3a00,param_2,*param_3,0);
    uVar3 = 1;
    uVar5 = 1;
    uVar2 = 1;
    piVar4 = param_2;
    if (1 < *param_3) {
      do {
        uVar3 = uVar2;
        iVar1 = param_2[1];
        if (iVar1 != *param_2) {
          piVar4 = piVar4 + 1;
          *piVar4 = iVar1;
          uVar3 = uVar3 + 1;
        }
        uVar5 = uVar5 + 1;
        uVar2 = uVar3;
        param_2 = param_2 + 1;
      } while (uVar5 < *param_3);
    }
    *param_3 = uVar3;
  }
  return;
}


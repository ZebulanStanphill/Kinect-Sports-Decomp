extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_8308B6C0(int param_1,int param_2,unsigned short param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if ((*(unsigned int *)(param_4 + 0xc) & 1) == 0) {
    iVar2 = fn_82CE5410();
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),param_5,8);
    }
    iVar2 = *param_5;
    iVar1 = param_5[1] * 8;
    param_5[1] = param_5[1] + 1;
    *(unsigned int *)(iVar1 + iVar2) = *(unsigned int *)(param_2 + 0xc);
    *(unsigned int *)(iVar1 + iVar2 + 4) = *(unsigned int *)(param_4 + 0xc);
  }
  else {
    param_1 = (*(unsigned int *)(param_4 + 0xc) & 0xfffffffe) + param_1;
    iVar2 = fn_82CE5410();
    if (*(unsigned int *)(param_1 + 8) == (*(unsigned int *)(param_1 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),(int *)(param_1 + 4),2);
    }
    *(unsigned short *)(*(int *)(param_1 + 8) * 2 + *(int *)(param_1 + 4)) = param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}


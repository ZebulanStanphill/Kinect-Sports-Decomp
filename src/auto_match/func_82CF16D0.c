extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;


int fn_82CF16D0(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned short *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0x80000000;
  *(int *)(param_1 + 0x48) = param_2;
  *(unsigned int *)(param_1 + 0x4c) = param_3;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x54) = param_4;
  if (param_2 != 0) {
    iVar2 = fn_82CE5410();
    if (*(unsigned int *)(param_2 + 0x34) == (*(unsigned int *)(param_2 + 0x38) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),(int *)(param_2 + 0x30),4);
    }
    *(int *)(*(int *)(param_2 + 0x34) * 4 + *(int *)(param_2 + 0x30)) = param_1;
    *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
  }
  uVar1 = lbl_821AAD20;
  puVar4 = (unsigned int *)(param_1 + -4);
  puVar3 = (unsigned short *)(param_1 + 0x1e);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(unsigned __int64 *)(param_1 + 0x40) = lbl_82005710;
  return param_1;
}


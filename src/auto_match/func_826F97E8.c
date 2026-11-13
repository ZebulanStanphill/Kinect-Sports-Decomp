extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_8269A240();


unsigned __int64 fn_826F97E8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  uVar3 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa90) - 1;
  if (-1 < (__int64)uVar5) {
    lVar4 = (uVar5 & 0x3fffffff) << 2;
    do {
      piVar2 = *(int **)((int)lVar4 + *(int *)(param_1 + 0xa8c));
      iVar6 = piVar2[8];
      fn_8268CC00(auStack_60);
      fn_8269A240(iVar6,auStack_60);
      fn_8268D008(auStack_60,auStack_70,param_2);
      uVar3 = (**(int (***)())(*piVar2 + 0x34))(piVar2,auStack_70,param_3,param_4);
      if ((uVar3 & 0xffffffff) != 0) {
        return uVar3;
      }
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (__int64)uVar5);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x60);
  uVar5 = (unsigned __int64)uVar1;
  if (0 < (int)uVar1) {
    iVar6 = uVar1 << 3;
    do {
      piVar2 = *(int **)(iVar6 + *(int *)(param_1 + 0x5c) + -4);
      uVar3 = (**(int (***)())(*piVar2 + 0x34))(piVar2,param_2,param_3,param_4);
      if ((uVar3 & 0xffffffff) != 0) {
        return uVar3;
      }
      uVar5 = uVar5 - 1;
      iVar6 = iVar6 + -8;
    } while (0 < (__int64)uVar5);
  }
  return uVar3;
}


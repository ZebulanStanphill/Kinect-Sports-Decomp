typedef unsigned char bool;
extern int fn_8243E578();


unsigned __int64 fn_8243E640(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  bool bVar6;
  
  uVar4 = fn_8243E578();
  iVar5 = fn_8243E578(param_1,param_3);
  if ((((uVar4 & 0xffffffff) == 0) || (iVar5 == 0)) ||
     ((iVar1 = *(int *)((int)uVar4 + 0x4c), iVar1 != 1 &&
      ((*(int *)(iVar5 + 0x4c) != 1 || (iVar1 != 1)))))) {
    uVar4 = 0;
  }
  else if (*(int *)(iVar5 + 0x4c) == 1) {
    uVar2 = *(unsigned int *)((int)uVar4 + 0x48);
    uVar3 = *(unsigned int *)(iVar5 + 0x48);
    if (*(int *)(param_1 + 0x14) == 0) {
      bVar6 = uVar2 <= uVar3;
    }
    else {
      bVar6 = uVar3 <= uVar2;
    }
    uVar4 = ((~(unsigned __int64)(uVar3 ^ uVar2) & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar6 & 1;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


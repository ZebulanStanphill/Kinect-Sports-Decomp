extern unsigned int lbl_83212A1C;


unsigned char fn_82886EB0(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  iVar1 = *(int *)(param_2 * 4 + param_1);
  uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 4);
  uVar2 = 1 << (*(unsigned int *)(param_2 * 4 + lbl_83212A1C) & 0x3f);
  uVar5 = (unsigned __int64)uVar2;
  uVar4 = (uVar2 >> 2) + uVar3;
  if (uVar5 <= (uVar4 & 0xffffffff)) {
    uVar4 = uVar4 - uVar5;
  }
  if (uVar3 < (uVar4 & 0xffffffff)) {
    if ((param_3 & 0xffffffff) < uVar3) {
      return 0;
    }
  }
  else if (uVar3 <= (param_3 & 0xffffffff)) goto LAB_82886f0c;
  if ((uVar4 & 0xffffffff) < (param_3 & 0xffffffff)) {
    return 0;
  }
LAB_82886f0c:
  uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 8);
  uVar4 = (uVar2 >> 1) + uVar3;
  if (uVar5 <= (uVar4 & 0xffffffff)) {
    uVar4 = uVar4 - uVar5;
  }
  if ((uVar4 & 0xffffffff) <= uVar3) {
    if ((param_3 & 0xffffffff) < uVar3) {
      return -(param_3 < uVar4) & 1;
    }
    return 1;
  }
  if ((uVar3 <= (param_3 & 0xffffffff)) && ((param_3 & 0xffffffff) < (uVar4 & 0xffffffff))) {
    return 1;
  }
  return 0;
}


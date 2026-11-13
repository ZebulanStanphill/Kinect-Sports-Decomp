extern int fn_8279AA48();
extern int fn_8279AE60();
extern int fn_827A0A60();


unsigned __int64 fn_8272CF40(int *param_1,__int64 param_2)

{
  unsigned short uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  if ((*(unsigned short *)(param_1 + 0x32) >> 7 & 1) != 0) {
    if (*(int *)(param_1[0x28] + 0x114) == 0) {
      uVar1 = *(unsigned short *)(param_1[0x27] + 0x50) >> 5;
    }
    else {
      uVar1 = *(unsigned short *)(*(int *)(param_1[0x28] + 0x114) + 0x68) >> 1;
    }
    if ((uVar1 & 1) != 0) {
      lVar2 = fn_827A0A60();
      uVar4 = ((lVar2 - param_2 & 0xffffffffU) >> 0x1f) - 1 & lVar2 - param_2;
      iVar3 = fn_8279AA48(param_1[0x28]);
      if (iVar3 < (int)uVar4) {
        uVar4 = fn_8279AA48(param_1[0x28]);
      }
      fn_8279AE60(param_1[0x28],uVar4);
      iVar3 = (**(int (***)())(*param_1 + 0x40))(param_1);
      if (iVar3 != 0) {
        *(unsigned int *)(iVar3 + 0xb00) = *(unsigned int *)(iVar3 + 0xb00) | 0x400;
      }
      return 1;
    }
  }
  return 0;
}


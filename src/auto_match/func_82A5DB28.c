unsigned char fn_82A5DB28(short *param_1)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  
  uVar1 = param_1[7];
  bVar3 = 1;
  if (((uVar1 != 8) && (uVar1 != 0x10)) && (uVar1 != 0x18)) {
    bVar3 = -(uVar1 == 0x20) & 1;
  }
  if (*param_1 == -2) {
    uVar2 = param_1[9];
    if (((uVar2 != 0) && (uVar2 != 8)) && ((uVar2 != 0x10 && ((uVar2 != 0x14 && (uVar2 != 0x18))))))
    {
      bVar3 = -(uVar2 == 0x20) & bVar3;
    }
    bVar3 = -(uVar2 <= uVar1) & bVar3;
  }
  uVar4 = (unsigned int)(unsigned short)param_1[1] * (unsigned int)uVar1;
  return -((__int64)*(int *)(param_1 + 2) * (__int64)(int)(unsigned int)(unsigned short)param_1[6] -
           (unsigned __int64)*(unsigned int *)(param_1 + 4) == 0) &
         -((__int64)((int)uVar4 >> 3) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 7) != 0) ==
          (unsigned __int64)(unsigned short)param_1[6]) & bVar3;
}


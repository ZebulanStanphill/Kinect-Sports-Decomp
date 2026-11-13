extern int fn_82E674C0();


unsigned __int64
fn_82E68010(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,__int64 param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  
  iVar3 = (int)param_4;
  if (0 < iVar3) {
    uVar1 = param_2[9];
    uVar5 = (uVar1 & 3) * 8 + param_2[0x12];
    param_2[0x12] = uVar5;
    uVar5 = uVar5 + iVar3;
    param_2[9] = uVar1 - (uVar1 & 3);
    uVar4 = ((unsigned __int64)param_2[10] - (unsigned __int64)param_2[9]) + (unsigned __int64)*param_2;
    param_2[0x11] = param_2[0x11] - (uVar1 & 3);
    iVar2 = ((int)uVar5 >> 3) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 7) != 0);
    if ((int)((uVar4 & 0xffffffff) << 3) < (int)(param_2[0x12] + iVar3)) {
      return 0xffffffff80040003;
    }
    if ((param_5 != 0) && ((param_3 & 0xffffffff) != 0)) {
      fn_82E674C0(param_3,param_4,(unsigned __int64)param_2[9],param_2[0x12],uVar4);
    }
    iVar3 = (int)((unsigned __int64)param_2[0x12] + param_4);
    param_2[9] = param_2[9] + iVar2;
    param_2[0x11] = param_2[0x11] + iVar2;
    param_2[0x12] =
         iVar3 + ((iVar3 >> 3) + (unsigned int)(iVar3 < 0 && ((unsigned __int64)param_2[0x12] + param_4 & 7) != 0))
                 * -8;
  }
  return 0;
}


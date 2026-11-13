extern int fn_82FEC7F0();


unsigned __int64 fn_83037510(int *param_1,unsigned short param_2,unsigned int param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  
  iVar2 = 0;
  for (uVar3 = param_3; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = fn_82FEC7F0(((__int64)(int)(unsigned int)param_2 * (__int64)iVar2 & 0x3fffffffU) << 2);
  if (iVar2 == 0) {
    uVar1 = 0x34;
  }
  else {
    *param_1 = iVar2;
    uVar1 = 1;
    *(unsigned short *)(param_1 + 3) = param_2;
    param_1[1] = param_3;
    *(unsigned short *)((int)param_1 + 0xe) = 0;
  }
  return uVar1;
}


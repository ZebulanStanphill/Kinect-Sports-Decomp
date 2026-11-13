extern int fn_8262FE50();


unsigned __int64 fn_8263A098(int param_1,__int64 param_2,int *param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  iVar2 = (int)param_2;
  iVar4 = 0;
  uVar1 = *(unsigned int *)((int)((param_2 + 0xc57U & 0xffffffff) << 2) + param_1);
  uVar3 = (unsigned __int64)uVar1;
  if (uVar3 != 0) {
    uVar1 = *(unsigned int *)(uVar1 + 0x18);
    iVar4 = (*(int *)((int)((0xefU - param_2 & 0xffffffff) << 3) + param_1) -
            ((uVar1 >> 0x14) + 0x200 & 0x1000)) - (uVar1 & 0x1fffffff);
    fn_8262FE50(uVar3);
  }
  *param_3 = iVar4;
  *param_4 = (unsigned int)*(unsigned char *)(param_1 + iVar2 + 0x31a0) << 2;
  return uVar3;
}


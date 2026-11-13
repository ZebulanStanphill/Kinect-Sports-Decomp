extern int fn_82B843F0();


__int64 fn_82B1F248(unsigned __int64 param_1,unsigned int param_2,unsigned int *param_3,int param_4,char param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  
  lVar4 = 0;
  for (uVar1 = *(unsigned int *)(param_4 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    if ((param_5 == '\0') || ((*(unsigned int *)(uVar1 + 8) >> 0x1a & 1) != 0)) {
      uVar3 = fn_82B843F0(param_1,uVar1);
      uVar2 = uVar3 & 0xfffffffe;
      *(short *)(uVar3 + 0xe) = (short)*(unsigned int *)(uVar1 + 0xc);
      *(unsigned int *)(uVar1 + 0x20) = uVar3;
      *(unsigned int *)(uVar3 + 0x20) = uVar1;
      lVar4 = lVar4 + 1;
      *(unsigned int *)(uVar2 + 0x24) = *param_3;
      *(unsigned int *)(*param_3 & 0xfffffffe) = uVar2;
      *(unsigned int *)(uVar2 + 0x28) = (unsigned int)(param_3 + -9) | 1;
      *param_3 = uVar2 + 0x28;
      *(unsigned int *)(uVar3 + 0x1c) = param_2;
    }
  }
  return lVar4;
}


extern int fn_82C10F40();


unsigned __int64 fn_82C237D0(int param_1,unsigned __int64 param_2,short param_3,unsigned short *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  int aiStack_20 [2];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *param_4 = 0;
  aiStack_20[0] = 0;
  uVar2 = fn_82C10F40(*(unsigned int *)(*(int *)(iVar1 + 4) + 0x80),param_2,aiStack_20);
  if ((uVar2 & 0xffffffff) == 0x80500016) {
    uVar2 = 0;
  }
  else {
    *param_4 = *(unsigned short *)(param_3 * 0x1c + *(int *)(aiStack_20[0] + 0x50) + 0x10);
  }
  return uVar2;
}


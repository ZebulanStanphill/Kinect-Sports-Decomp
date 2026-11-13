extern unsigned int lbl_83264210;


void fn_82FA5288(int param_1,unsigned int *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x50 + lbl_83264210;
  RtlEnterCriticalSection(iVar1 + 0x24);
  param_2[1] = *(unsigned int *)(iVar1 + 0x48);
  *param_2 = *(unsigned int *)(iVar1 + 0x4c);
  RtlLeaveCriticalSection(iVar1 + 0x24);
  return;
}


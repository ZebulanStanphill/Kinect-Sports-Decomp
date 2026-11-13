extern int lbl_83264208;
extern unsigned int lbl_83264210;


unsigned __int64 fn_82FA5208(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 >= lbl_83264208) return 2;
  {
    iVar4 = param_1 * 0x50 + lbl_83264210;
    iVar3 = iVar4 + 0x24;
    RtlEnterCriticalSection(iVar3);
    uVar1 = *(unsigned int *)(iVar4 + 0x4c);
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = uVar1;
    RtlLeaveCriticalSection(iVar3);
    uVar2 = 1;
  }

  return uVar2;
}


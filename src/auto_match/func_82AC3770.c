extern int fn_82AC3438();
extern int memcpy();


unsigned __int64
fn_82AC3770(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char acStack_40 [16];
  
  if (((param_5 & 0xffffffff) == 0) || (memcpy(acStack_40,param_5,9), acStack_40[0] == '\"'))
  {
code_r0x82ac3794:
    uVar1 = 0xffffffff80004005;
  }
  else {
    pcVar2 = acStack_40;
    iVar4 = 0;
    do {
      iVar3 = iVar4;
      if (7 < iVar3) goto code_r0x82ac3794;
      iVar4 = iVar3 + 1;
      *pcVar2 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\"');
    if (iVar4 < 9) {
      pcVar2 = acStack_40 + iVar3;
      for (iVar4 = 9 - iVar4; iVar4 != 0; iVar4 = iVar4 + -1) {
        pcVar2 = pcVar2 + 1;
        *pcVar2 = '\0';
      }
    }
    uVar1 = fn_82AC3438(param_1,param_2,param_3,param_4,acStack_40);
  }
  return uVar1;
}


extern unsigned int *auStack_30;


unsigned __int64 fn_82A1C560(__int64 param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  int aiStack_40 [4];
  unsigned char auStack_30 [32];
  
  aiStack_40[0] = 0;
  XeCryptSha(param_1 + 0x22c,0x58,0,0,0,0,auStack_30,0x14);
  iVar2 = XeKeysConsoleSignatureVerification(auStack_30,param_1 + 4,aiStack_40);
  if ((iVar2 == 0) || (uVar1 = 1, aiStack_40[0] == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}


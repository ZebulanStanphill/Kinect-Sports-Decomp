extern int fn_828F6FA8();


unsigned __int64 fn_82964BB0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  const char *uVar3;
  char *pcVar4;
  unsigned int uVar5;
  char *pcVar6;
  char acStack_60 [64];
  
  uVar5 = 0x40;
  pcVar6 = acStack_60;
  pcVar4 = *(char **)(*(int *)(param_2 + 0x68) + 0x18);
  while (uVar5 != 0) { if (*pcVar4 == 0) break; *pcVar6++ = *pcVar4++; --uVar5; }
  if (!uVar5) --pcVar6;
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 0x10);
  *pcVar6 = '\0';
  uVar3 = "input";
  if ((*(unsigned int *)(*(int *)(iVar1 * 4 + iVar2) + 4) & 0x20) != 0) {
    uVar3 = "output";
  }
  fn_828F6FA8(param_3,param_4,"%s semantic '%s'",uVar3,acStack_60);
  *(unsigned char *)(param_3 + param_4 + -1) = 0;
  return 0;
}


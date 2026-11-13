extern int fn_82696330();
extern int fn_82696958();
extern int fn_8271DCB8();


void fn_8271DE58(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  char acStack_20 [16];
  
  acStack_20[0] = '\0';
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
  iVar2 = *(int *)(iVar1 + 0x2a0);
  cVar4 = (**(int (***)())(*(int *)(iVar2 + 0x10) + 0x2c))
                    (iVar2 + 0x10,*(int *)(param_1 + 0x18) + 0x78,iVar1 + 0x50,acStack_20);
  if ((cVar4 != '\0') && (acStack_20[0] != '\v')) {
    uVar3 = fn_82696958(acStack_20,*(unsigned int *)(param_1 + 0x18));
    uVar5 = uVar3 + 0x10;
    if ((uVar3 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    if ((uVar5 & 0xffffffff) != 0) {
      fn_8271DCB8(uVar5 - 0x10,*(unsigned int *)(param_1 + 0x18));
    }
  }
  fn_82696330(acStack_20);
  return;
}


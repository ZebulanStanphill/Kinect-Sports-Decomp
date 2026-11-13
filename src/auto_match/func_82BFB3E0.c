extern unsigned int *auStack_20;
extern int fn_82BF3A88();
extern int fn_82BFA8D8();
extern int fn_82BFABC8();


void fn_82BFB3E0(int param_1)

{
  char *pcVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char auStack_20 [1];
  
  fn_82BFA8D8(auStack_20);
  pcVar1 = *(char **)(param_1 + 0xc);
  if ((((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) &&
      (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) && (*(int *)(iVar2 + 0xc) != 0)) {
    iVar2 = fn_82BF3A88(pcVar1,*(unsigned int *)(iVar2 + 8));
    uVar3 = 1;
    if (iVar2 != 0) goto LAB_82bfb444;
  }
  uVar3 = 2;
LAB_82bfb444:
  *(unsigned int *)(param_1 + 8) = uVar3;
  fn_82BFABC8(auStack_20);
  return;
}


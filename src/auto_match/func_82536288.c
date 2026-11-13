extern unsigned int *auStack_50;
extern int fn_822A8D30();
extern int fn_828647F0();
extern int fn_82864898();
extern int memmove();
extern unsigned int lbl_8327F874;


void fn_82536288(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  unsigned char auStack_50 [48];
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar2 = fn_828647F0(auStack_50,*(unsigned int *)(iVar1 + 4));
    iVar3 = fn_822A8D30(lbl_8327F874,uVar2);
    if (*(char *)(iVar3 + 0x5c) == '\0') {
      for (piVar4 = *(int **)(iVar3 + 0x24);
          (piVar4 != *(int **)(iVar3 + 0x28) && (*piVar4 != iVar1)); piVar4 = piVar4 + 1) {
      }
      if (piVar4 != *(int **)(iVar3 + 0x28)) {
        memmove(piVar4,piVar4 + 1,(*(int *)(iVar3 + 0x28) - (int)(piVar4 + 1) >> 2) << 2);
        *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) + -4;
      }
    }
    fn_82864898(auStack_50);
    piVar4 = (int *)*param_1;
    if (piVar4 != (int *)0x0) {
      (**(int (***)())(*piVar4 + 0xc))(piVar4,1);
    }
    *param_1 = 0;
  }
  return;
}


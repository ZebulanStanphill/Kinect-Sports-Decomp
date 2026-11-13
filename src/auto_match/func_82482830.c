extern unsigned int *auStack_42e;
extern int fn_82281530();
extern int fn_822848B8();
extern int fn_825200A8();
extern int fn_82F691F0();
extern unsigned int lbl_832960A4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82482830(int param_1)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned char auStack_42e [1070];
  
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  lVar2 = fn_825200A8(uVar4 + 100,(unsigned __int64)*(unsigned int *)(param_1 + 0x48) + 4);
  iVar5 = 1;
  if (lVar2 == 0) {
    iVar3 = fn_82281530(uVar4);
    iVar6 = 1;
    if (iVar3 == 0) goto LAB_82482878;
  }
  iVar6 = 0;
LAB_82482878:
  iVar3 = *(int *)(param_1 + 0xa4);
  if (iVar3 == 0) {
    iVar6 = 5;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x14);
    if ((iVar1 == 7) || (lbl_832960A4 != 0)) {
      if (*(int *)(param_1 + 0x78) != 0) {
        fn_822848B8();
        *(unsigned int *)(param_1 + 0x78) = 0;
      }
    }
    else if (iVar1 == 5) {
      iVar5 = 0;
      iVar6 = 2;
    }
    else if ((*(int *)(iVar3 + 0x14) == 2) || (*(int *)(iVar3 + 0x14) == 3)) {
      iVar5 = 0;
      iVar6 = 3;
    }
    else if ((iVar1 == 6) && ((int)lVar2 != 0)) {
      iVar6 = 4;
    }
    else {
      iVar6 = 0;
    }
  }
  if ((iVar6 != *(int *)(param_1 + 0x58)) || (iVar5 != *(int *)(param_1 + 0x5c))) {
    if (*(int *)(param_1 + 0x78) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_42e,0,0x1fe);
    }
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x5c) = iVar5;
  }
  return;
}


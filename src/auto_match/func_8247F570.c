extern unsigned int *auStack_4ce;
extern int fn_82281868();
extern int fn_822819E0();
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8247F570(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  unsigned char auStack_4ce [1230];
  
  iVar2 = *(int *)(param_1 + 0x48);
  *(unsigned int *)(param_1 + 0xa8) = 0;
  if (*(int *)(iVar2 + 0x18b8) == 0) {
LAB_8247f5b8:
    uVar5 = *(unsigned int *)(param_1 + 0x30);
  }
  else if (*(int *)(iVar2 + 0x18b8) == 1) {
    if (*(int *)(iVar2 + 0xc58) == 4) goto LAB_8247f5b8;
    uVar5 = *(unsigned int *)(param_1 + 0x34);
  }
  else {
    uVar5 = *(unsigned int *)(param_1 + 0x38);
  }
  *(unsigned int *)(iVar2 + 0x18) = uVar5;
  puVar3 = (unsigned int *)(*(int *)(param_1 + 0x48) + 4);
  if ((puVar3 == (unsigned int *)0x0) ||
     (uVar4 = (unsigned __int64)*puVar3, uVar4 == (uVar4 - 1) + (unsigned __int64)(uVar4 == 0))) {
    *puVar3 = *(unsigned int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x14);
    puVar3 = (unsigned int *)(param_1 + 0x18);
    if (*(int *)(iVar2 + 0x10) == 0) {
      iVar1 = *(int *)(iVar2 + 8);
      goto joined_r0x8247f638;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar2 + 0x10) == 0) {
      iVar1 = *(int *)(iVar2 + 8);
joined_r0x8247f638:
      if (iVar1 != 0) {
        fn_822819E0(iVar2,puVar3);
      }
      goto LAB_8247f640;
    }
  }
  fn_82281868(iVar2,puVar3,0);
LAB_8247f640:
  *(unsigned int *)(param_1 + 0x100) = 1;
  *(unsigned int *)(param_1 + 0xf4) = 1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_4ce,0,0x3e);
}


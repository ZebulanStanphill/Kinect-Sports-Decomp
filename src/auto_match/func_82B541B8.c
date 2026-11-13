extern int fn_82AA66A8();
extern int fn_82AE7308();
extern int fn_82B54048();


unsigned int * fn_82B541B8(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1,param_2);
  }
  if ((*(int *)(iVar1 + 0x10) == *(int *)(param_1 + 0x10)) || (*(int *)(iVar1 + 0x14) == 0)) {
    return (unsigned int *)0x0;
  }
  fn_82B54048(param_1,*(int *)(iVar1 + 0x10),param_2,iVar1,0,0);
  puVar3 = (unsigned int *)(*(int *)(iVar1 + 0x10) * 0x28 + *(int *)(param_1 + 0xc));
  if ((*(unsigned int *)(iVar1 + 0x2c) & 2) == 0) {
    if ((*(unsigned int *)(iVar1 + 0x2c) & 0x80) == 0) {
      *puVar3 = *puVar3 & 0xfffffff8 | 1;
      fn_82AE7308(param_1,*(unsigned int *)(iVar1 + 0x10));
      goto LAB_82b542ac;
    }
    if (*(int *)(iVar1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    *puVar3 = *puVar3 & 0xfffffff8 | 2;
  }
  else {
    *puVar3 = *puVar3 & 0xfffffff8 | 2;
    if (*(int *)(iVar1 + 0x34) == 0) goto LAB_82b542ac;
  }
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x20;
LAB_82b542ac:
  if (*(unsigned int *)(param_1 + 0x254) != 0) {
    uVar2 = puVar3[1] >> 4 & 7;
    if ((uVar2 == 7) || (uVar2 == 2)) {
      puVar3[9] = *(unsigned int *)(param_1 + 0x254);
      puVar3[1] = puVar3[1] & 0xffffff8f | 0x20;
    }
  }
  if ((*(unsigned int *)(param_1 + 0x2c) & 0x800) != 0) {
    puVar3[1] = puVar3[1] | 0x80000000;
  }
  return puVar3;
}


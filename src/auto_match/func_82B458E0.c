typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern unsigned int lbl_82005710;
extern unsigned int uStack_c;


unsigned __int64 fn_82B458E0(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_c;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(int *)(param_2 + 4) != 0xe) && (*(int *)(param_2 + 0x1c) != 0)) {
    return 0;
  }
  if (*(int *)(param_2 + 0x14) != 1) {
    return 0;
  }
  if (*(int *)(param_2 + 0x18) != 1) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  bVar4 = false;
  bVar3 = false;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 9)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 1) {
LAB_82b4597c:
    bVar4 = true;
LAB_82b45980:
    bVar3 = true;
  }
  else {
    if (iVar1 == 2) goto LAB_82b45980;
    if (iVar1 == 6) goto LAB_82b4597c;
    if (iVar1 != 10) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (*(int *)(iVar1 + 4) != 1) {
    return 0;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 4) != 0xf) {
    return 0;
  }
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 1) {
    if ((!bVar4) && (*(int *)(iVar1 + 0x18) < 0)) {
      return 0;
    }
  }
  else if (iVar2 != 2) {
    if ((iVar2 != 3) || ((!bVar4 && (*(double *)(iVar1 + 0x18) < lbl_82005710)))) {
      return 0;
    }
    uVar5 = (unsigned __int64)*(double *)(iVar1 + 0x18);
    uStack_c = (unsigned int)uVar5;
    if ((!bVar3) && ((double)(uVar5 & 0xffffffff) != *(double *)(iVar1 + 0x18))) {
      return 0;
    }
    goto LAB_82b45a38;
  }
  uStack_c = *(unsigned int *)(iVar1 + 0x18);
LAB_82b45a38:
  *param_3 = uStack_c;
  return 1;
}


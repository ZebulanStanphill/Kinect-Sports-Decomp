extern int fn_822314E8();
extern int fn_82247000();
extern int fn_822471C8();
extern int fn_822A21A8();
extern int fn_82514888();
extern int fn_8251CC50();
extern int fn_825200A8();
extern int fn_8265CA20();
extern unsigned int lbl_831D12B8;
extern int (*lbl_83276794)();
extern unsigned int lbl_832960A0;
extern unsigned int lbl_8329618C;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82246C58(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar5;
  unsigned __int64 uVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    while (iVar1 = fn_82247000(iVar1), iVar1 < 5) {
      fn_822471C8(*(unsigned int *)(param_1 + 0x38),0);
      iVar1 = *(int *)(param_1 + 0x38);
    }
  }
  puVar3 = &lbl_832960A0;
  if (lbl_8329618C == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar1 != 0) {
    iVar5 = -0x7cd69f38;
    do {
      if (iVar1 == *(int *)(iVar5 + 4)) {
        iVar1 = *(int *)(iVar5 + 0x10);
        goto LAB_82246cec;
      }
      iVar5 = iVar5 + 0x30;
    } while (iVar5 < -0x7cd69e78);
    iVar1 = 2;
LAB_82246cec:
    if (iVar1 != 1) {
      puVar2 = (unsigned int *)(param_1 + 0x4c);
      if (puVar2 == (unsigned int *)0x0) {
        return;
      }
      uVar4 = (unsigned __int64)*puVar2;
      if (uVar4 == (uVar4 - 1) + (unsigned __int64)(uVar4 == 0)) {
        return;
      }
      iVar1 = fn_825200A8(puVar2,0xffffffff832960a0);
      if (iVar1 == 0) {
        return;
      }
      fn_8251CC50(1,1);
      *puVar3 = 0;
      uVar4 = (unsigned __int64)(unsigned int)puVar3[0x3a];
      puVar3[0x3a] = 0;
      if (uVar4 == 0) {
        return;
      }
      fn_822314E8(uVar4 + 0x20);
      fn_8265CA20(uVar4);
      return;
    }
    if (lbl_83276794 == (int (**)())0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*lbl_83276794)();
    }
    if (iVar1 == 0) {
      return;
    }
    if ((lbl_831D12B8 != 0) && (iVar1 = fn_822A21A8(), iVar1 != 0)) {
      return;
    }
  }
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  uStack_28 = 0;
  fn_82514888(&stack_pair_30.first);
  return;
}


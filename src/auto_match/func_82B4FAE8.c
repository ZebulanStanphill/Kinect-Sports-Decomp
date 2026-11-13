typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82ABE870();
extern int fn_82AF87E0();
extern int fn_82B463F8();
extern int fn_82B4C160();
extern unsigned int iStack_48;
extern unsigned int lbl_83160FB4;
extern unsigned int uStack_4c;


void fn_82B4FAE8(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  bool bVar6;
  unsigned int *puVar7;
  unsigned int *puStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  
  uVar4 = fn_82B463F8(param_1,param_3);
  if (uVar4 == 0) {
    iVar5 = *(int *)(param_3 + 0x10);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 3)) {
      if (*(int *)(iVar5 + 0x10) == 9) {
        fn_82AA65B0(param_1,0xe16,*(unsigned int *)(iVar5 + 0x18));
        return;
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  uStack_4c = -(unsigned int)((param_2[1] & 1) == 0) & param_2[1];
  puVar1 = (&lbl_83160FB4)[uVar4];
  iStack_48 = 0;
  puStack_50 = param_2;
  while( true ) {
    if ((uStack_4c == 0) || (bVar6 = false, iStack_48 == *(int *)(uStack_4c + 8))) {
      bVar6 = true;
    }
    if (bVar6) break;
    iVar5 = (iStack_48 + 2) * 8;
    iVar3 = iVar5 + uStack_4c;
    uVar2 = *(unsigned int *)(iVar5 + uStack_4c);
    if ((1 << (uVar2 & 0x3f) & ((unsigned int)puVar1 | 1 << (uVar4 & 0x3f) & 0xfffffffeU) & 0xfffffffe) == 0
       ) {
      fn_82ABE870(&puStack_50);
    }
    else {
      if (uVar2 == uVar4) {
        fn_82AA65B0(param_1,0xdf9);
      }
      else {
        bVar6 = false;
        if (uVar4 == 1) {
          if (uVar2 == 2) {
            fn_82AA65B0(param_1,0xdfa);
            bVar6 = true;
          }
        }
        else if ((uVar4 == 2) && (uVar2 == 1)) {
          fn_82AA65B0(param_1,0xdfa);
          return;
        }
        if (!bVar6) {
          iVar5 = *(int *)(param_3 + 0x10);
          if ((iVar5 == 0) || (*(int *)(iVar5 + 4) != 3)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          if (*(int *)(iVar5 + 0x10) != 9) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
          if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 3)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          if (*(int *)(iVar3 + 0x10) != 9) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          fn_82AA65B0(param_1,0xdfb,*(unsigned int *)(iVar3 + 0x18),
                            *(unsigned int *)(iVar5 + 0x18));
        }
      }
      fn_82B4C160(&puStack_50);
    }
  }
  if ((param_2[1] & 1) == 0) {
    uVar2 = *param_2 & 0xfffffffe;
    iVar5 = uVar2 - 4;
    if ((iVar5 != 0) && (*(int *)(uVar2 + 4) + 1U <= *(unsigned int *)(uVar2 + 8))) goto LAB_82b4fd38;
  }
  iVar5 = fn_82AF87E0(param_2,1);
LAB_82b4fd38:
  iVar3 = *(int *)(iVar5 + 8);
  *(int *)(iVar5 + 8) = iVar3 + 1;
  puVar7 = (unsigned int *)((iVar3 + 2) * 8 + iVar5);
  *puVar7 = uVar4;
  puVar7[1] = param_3;
  return;
}


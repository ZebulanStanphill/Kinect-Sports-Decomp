#define true 1
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE5C30();
extern int fn_82BE5C78();
extern int fn_82BE5CC0();
extern int fn_82BE5F40();
extern int fn_82BEB628();
extern int fn_82BF6230();
extern int fn_82BFAFD8();
extern unsigned int iStack_68;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64 fn_82BF6540(int param_1)

{
  unsigned int uVar3;
  unsigned __int64 uVar1;
  int iVar4;
  int iVar5;
  short sVar7;
  unsigned __int64 uVar2;
  int iVar6;
  short sVar9;
  char cVar10;
  unsigned int uVar8;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  int iStack_68;
  unsigned int uStack_64;
  
  stack_pair_70.first = 0;
  cVar10 = '\0';
  stack_pair_70.second = 0;
  uVar12 = 0;
  iStack_68 = 0;
  uVar11 = 0;
  uStack_64 = 0;
  sVar7 = 0;
  uVar3 = fn_82BE5CC0();
  iVar6 = *(int *)(param_1 + 0x20);
  uVar8 = 0;
  sVar9 = 0;
  do {
    if (uVar3 <= uVar8) {
      if ((cVar10 == '\x02') && (sVar7 == sVar9)) {
        uVar2 = thunk_FUN_82be5550(0x24);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82BFAFD8(uVar2,uVar12,uVar11);
        }
        if ((uVar2 & 0xffffffff) != 0) {
          fn_82BE5340();
          while (iStack_68 != 0) {
            iVar6 = fn_82BE5378(&stack_pair_70.first);
            if (iVar6 != 0) {
              *(int *)(iVar6 + 0x4c) = (int)uVar2;
            }
            fn_82BE5350(&stack_pair_70.first);
          }
          fn_82BE5478();
          return uVar2;
        }
      }
LAB_82bf65d0:
      fn_82BE5478(&stack_pair_70.first);
      return 0;
    }
    uVar1 = fn_82BE5C30(param_1);
    uVar8 = (unsigned int)uVar1 & 0xff;
    if (uVar8 == 1) {
      sVar7 = fn_82BE5C78(param_1,uVar1);
LAB_82bf6690:
      cVar10 = cVar10 + '\x01';
    }
    else if (uVar8 == 3) {
      uVar11 = fn_82BE5CC0();
    }
    else {
      if (uVar8 == 0x13) {
        uVar12 = fn_82BE5CC0();
        goto LAB_82bf6690;
      }
      if (uVar8 == 0xde) {
        iVar4 = fn_82BF6230();
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x10) != 0)) {
          uVar2 = thunk_FUN_82be5550(0xc);
          if ((uVar2 & 0xffffffff) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = fn_82BEB628(uVar2,iVar4);
          }
          if (iVar5 != 0) {
            fn_82BE52B8(*(unsigned int *)(param_1 + 0x60));
            uVar2 = thunk_FUN_82be5550(0xc);
            if ((uVar2 & 0xffffffff) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = fn_82BEB628(uVar2,iVar4);
            }
            if (iVar4 != 0) {
              fn_82BE52B8(&stack_pair_70.first);
              sVar9 = sVar9 + 1;
              goto LAB_82bf669c;
            }
          }
          fn_82BE5240(param_1,0x65,0xffffffff820ebb38);
          *(unsigned int *)(param_1 + 0x10) = 0;
        }
        goto LAB_82bf65d0;
      }
      iVar4 = fn_82BE5F40();
      if (iVar4 == 0) goto LAB_82bf65d0;
    }
LAB_82bf669c:
    uVar8 = *(int *)(param_1 + 0x20) - iVar6;
  } while( true );
}


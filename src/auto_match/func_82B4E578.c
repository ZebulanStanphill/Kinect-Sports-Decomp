#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82AA66A8();
extern int fn_82B167E0();
extern int fn_82B4A218();
extern int fn_82B4DD78();
extern int fn_82B54948();
extern int fn_82F69148();
extern unsigned int iStack_40;
extern unsigned int lbl_82005710;
extern unsigned int uStack_3c;


void fn_82B4E578(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  double dVar9;
  struct { int first; unsigned int second; } stack_pair_40;

  
  fn_82B54948(param_1,param_2,param_4,4);
  lVar3 = fn_82B4A218(*(unsigned int *)(param_1 + 0x234),param_3,param_1);
  uVar5 = 0;
  uVar2 = *(unsigned int *)(param_3 * 0x28 + *(int *)(param_1 + 0xc)) >> 3;
  uVar7 = (unsigned __int64)uVar2 & 0x3fff;
  for (uVar1 = *(unsigned int *)(param_2 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    uVar5 = *(unsigned int *)(uVar1 + 8) + uVar5;
  }
  if ((uVar5 & 0xffffffff) == uVar7) {
    lVar8 = uVar7 - 1;
    if (-1 < lVar8) {
      lVar3 = uVar7 * 8 + lVar3;
      do {
        puVar4 = (unsigned int *)fn_82B4DD78(&stack_pair_40.first,param_2);
        lVar8 = lVar8 + -1;
        lVar3 = lVar3 + -8;
        *(unsigned int *)lVar3 = *puVar4;
        ((unsigned int *)lVar3)[1] = puVar4[1];
      } while (-1 < lVar8);
    }
  }
  else {
    if ((uVar5 & 0xffffffff) != 1) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    fn_82B4DD78(&stack_pair_40.first,param_2);
    if ((((stack_pair_40.second & 3) != 1) || ((*(unsigned int *)(stack_pair_40.first + 8) & 0x3f80) != 16000)) ||
       (dVar9 = (double)fn_82B167E0(stack_pair_40.first,stack_pair_40.second >> 2 & 0x3fff), dVar9 != lbl_82005710)
       ) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if ((uVar2 & 0x3fff) != 0) {
      *(unsigned __int64 *)lVar3 = CONCAT44(stack_pair_40.first,stack_pair_40.second);
      fn_82F69148(lVar3 + 8,lVar3,uVar7 * 8 - 1 & 0xfffffff8);
    }
  }
  iVar6 = param_3 * 0x28 + *(int *)(param_1 + 0xc);
  *(unsigned int *)(iVar6 + 4) = *(unsigned int *)(iVar6 + 4) | 2;
  return;
}


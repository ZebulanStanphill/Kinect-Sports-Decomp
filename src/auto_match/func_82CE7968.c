extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int iStack_40;
extern unsigned int lbl_8323B468;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82CE7968(void)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int *piVar6;
  struct { int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  
  stack_pair_40.first = 0;
  piVar6 = &lbl_8323B468;
  uVar3 = 0;
  uStack_38 = 0x80000000;
  stack_pair_40.second = 0;
  iVar2 = lbl_8323B468;
  if (lbl_8323B468 != 0) {
    do {
      if ((**(int **)(iVar2 + 0xc) == 0) && (*(int (***)())(iVar2 + 4) != (int (**)())0x0)) {
        iVar1 = (**(int (***)())(iVar2 + 4))();
        if (iVar1 != 0) {
          **(int **)(iVar2 + 0xc) = iVar1;
          uVar3 = (unsigned __int64)stack_pair_40.second;
          goto LAB_82ce79d8;
        }
        iVar1 = fn_82CE5410();
        if (stack_pair_40.second == (uStack_38 & 0x3fffffff)) {
          fn_82CE63B0(*(unsigned int *)(iVar1 + 0xc),&stack_pair_40.first,4);
        }
        *(int *)(stack_pair_40.second * 4 + stack_pair_40.first) = iVar2;
        stack_pair_40.second = stack_pair_40.second + 1;
        iVar2 = *(int *)(iVar2 + 8);
        *(unsigned int *)(*piVar6 + 8) = 0;
        *piVar6 = iVar2;
        uVar3 = (unsigned __int64)stack_pair_40.second;
      }
      else {
LAB_82ce79d8:
        piVar6 = (int *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 8);
      }
    } while (iVar2 != 0);
    iVar2 = (int)uVar3;
    while (iVar2 != 0) {
      uVar4 = uVar3 - 1;
      if (-1 < (__int64)uVar4) {
        lVar5 = (uVar4 & 0x3fffffff) << 2;
        do {
          iVar2 = *(int *)((int)lVar5 + stack_pair_40.first);
          iVar1 = (**(int (***)())(iVar2 + 4))();
          if (iVar1 == 0) {
LAB_82ce7a4c:
            uVar3 = (unsigned __int64)stack_pair_40.second;
          }
          else {
            **(int **)(iVar2 + 0xc) = iVar1;
            *piVar6 = iVar2;
            piVar6 = (int *)(iVar2 + 8);
            uVar3 = (unsigned __int64)stack_pair_40.second - 1;
            stack_pair_40.second = (unsigned int)uVar3;
            if (stack_pair_40.second != (unsigned int)uVar4) {
              *(unsigned int *)((int)lVar5 + stack_pair_40.first) =
                   *(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + stack_pair_40.first);
              goto LAB_82ce7a4c;
            }
          }
          uVar4 = uVar4 - 1;
          lVar5 = lVar5 + -4;
        } while (-1 < (__int64)uVar4);
      }
      iVar2 = (int)uVar3;
    }
  }
  iVar2 = fn_82CE5410();
  stack_pair_40.second = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar2 + 0xc) + 0x10))
              (*(int **)(iVar2 + 0xc),stack_pair_40.first,uStack_38 & 0x3fffffff,4);
  }
  return;
}


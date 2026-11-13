extern int fn_8225F160();
extern int fn_82471140();
extern int fn_824BF410();
extern int fn_824BF5A0();
extern int fn_824BF690();
extern int fn_824BFC80();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_824BF240(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar9;
  __int64 lVar10;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;

  iVar3 = fn_8225F160();
  iVar7 = param_1 + 0x14;
  uVar1 = *(unsigned int *)(iVar3 + 0x68);
  fn_824BF690(iVar7);
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar3 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8);
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    for (; iVar3 != iVar2; iVar3 = iVar3 + 0x28) {
      if ((*(int *)(iVar3 + 0x18) != 0) || (puVar4 = &uStack_60, *(int *)(iVar3 + 0x1c) != 0)) {
        puVar4 = &stack_pair_70.first;
      }
      fn_82471140(puVar4,iVar3);
    }
    lVar9 = 0;
    puVar5 = (unsigned int *)(param_1 + 0x8c);
    lVar10 = 6;
    do {
      puVar5 = puVar5 + 1;
      lVar9 = (unsigned __int64)*puVar5 + lVar9;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    fn_824BF410(&stack_pair_70.first,&uStack_60,*(unsigned int *)(param_1 + 0xb8),iVar7,
                      *(unsigned int *)(param_1 + 0xa8),lVar9);
    fn_824BF5A0(&uStack_60);
    fn_824BF5A0(&stack_pair_70.first);
  }
  else {
    uVar8 = 0;
    do {
      iVar3 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      stack_pair_70.first = 0;
      stack_pair_70.second = 0;
      uStack_68 = 0;
      for (; iVar3 != iVar2; iVar3 = iVar3 + 0x28) {
        if (*(unsigned int *)(iVar3 + 0x20) == uVar8) {
          if ((*(int *)(iVar3 + 0x18) != 0) || (puVar4 = &stack_pair_70.first, *(int *)(iVar3 + 0x1c) != 0)) {
            puVar4 = &uStack_60;
          }
          fn_82471140(puVar4,iVar3);
        }
      }
      puVar5 = (unsigned int *)(param_1 + 0x8c);
      stack_pair_80.first = 0;
      stack_pair_80.second = 0;
      uStack_78 = 0;
      lVar9 = 6;
      uVar6 = 0;
      do {
        puVar5 = puVar5 + 1;
        uVar6 = *puVar5 + uVar6;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      fn_824BF410(&uStack_60,&stack_pair_70.first,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xb8) / (unsigned __int64)uVar1,&stack_pair_80.first,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xa8) / (unsigned __int64)uVar1,
                        (uVar6 & 0xffffffff) / (unsigned __int64)uVar1);
      fn_824BFC80(iVar7,*(unsigned int *)(param_1 + 0x18),stack_pair_80.first,stack_pair_80.second);
      fn_824BF5A0(&stack_pair_80.first);
      fn_824BF5A0(&stack_pair_70.first);
      fn_824BF5A0(&uStack_60);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
  }
  return;
}

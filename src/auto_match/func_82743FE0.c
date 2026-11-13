typedef unsigned char bool;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_8269A190();
extern int fn_827437A0();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82743FE0(int param_1)

{
  unsigned int uVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar5;
  __int64 lVar4;
  int *piVar6;
  unsigned char *puVar7;
  char in_RESERVE;
  unsigned char bVar8;
  __int64 lVar9;
  struct { unsigned int first; int second; } stack_pair_50;

  unsigned int *puStack_48;
  unsigned int *puStack_44;
  int aiStack_40 [1];
  unsigned char auStack_30 [1];
  unsigned char auStack_20 [8];

  cVar3 = fn_82695468(param_1,0x10);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef00,0,0);
  }
  else {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar2 = 0;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      puVar5 = &stack_pair_50.first;
      lVar9 = 2;
      do {
        puVar5 = puVar5 + 4;
        *(unsigned char *)puVar5 = 0;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      fn_827437A0(uVar2,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,aiStack_40);
      fn_82696D38(&puStack_48,aiStack_40,*(unsigned int *)(param_1 + 0x18),6,0);
      fn_82696D38(&puStack_44,auStack_30,*(unsigned int *)(param_1 + 0x18),6,0);
      fn_8268B330(&stack_pair_50.first);
      fn_8268B610(&stack_pair_50.first,0xffffffff820127b8,0xffffffffffffffff);
      fn_8268B610(&stack_pair_50.first,*puStack_48,0xffffffffffffffff);
      fn_8268B610(&stack_pair_50.first,0xffffffff820127b0,0xffffffffffffffff);
      fn_8268B610(&stack_pair_50.first,*puStack_44,0xffffffffffffffff);
      fn_8268B610(&stack_pair_50.first,0xffffffff821c24f0,0xffffffffffffffff);
      fn_8269A190(&stack_pair_50.second,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        &stack_pair_50.first);
      fn_82681838(*(unsigned int *)(param_1 + 4),&stack_pair_50.second);
      lVar9 = (unsigned __int64)*(unsigned int *)(stack_pair_50.second + 8) - 1;
      bVar8 = (lVar9 == 0) << 1;
      *(int *)(stack_pair_50.second + 8) = (int)lVar9;
      if (lVar9 == 0) {
        fn_826944C8();
      }
      lVar9 = ((unsigned __int64)stack_pair_50.first & 0xfffffffc) + 4;
      do {
        puVar5 = (unsigned int *)lVar9;
        uVar2 = (unsigned __int64)*puVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar9);
          *puVar5 = uVar1;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      if (uVar2 == 1) {
        fn_8267BE38();
      }
      piVar6 = aiStack_40;
      lVar9 = 1;
      do {
        piVar6 = piVar6 + -1;
        lVar4 = (unsigned __int64)*(unsigned int *)(*piVar6 + 8) - 1;
        *(int *)(*piVar6 + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8();
        }
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      puVar7 = auStack_20;
      lVar9 = 1;
      do {
        puVar7 = puVar7 + -0x10;
        fn_82696330(puVar7);
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
  }
  return;
}

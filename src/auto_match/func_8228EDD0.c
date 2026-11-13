extern unsigned int *auStack_250;
extern unsigned int *auStack_450;
extern unsigned int *auStack_650;
extern unsigned int *auStack_660;
extern unsigned int *auStack_670;
extern unsigned int *auStack_680;
extern unsigned int *auStack_690;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822902E8();
extern int fn_82290340();
extern int fn_82290458();
extern int fn_82290528();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82528BF8();
extern int fn_8265CA20();
extern int fn_82672C20();
extern int fn_82672F30();
extern unsigned int iStack_6bc;
extern unsigned int iStack_6c0;
extern unsigned int lbl_8327672C;
extern unsigned int uStack_698;
extern unsigned int uStack_69c;
extern unsigned int uStack_6a0;
extern unsigned int uStack_6a8;
extern unsigned int uStack_6ac;
extern unsigned int uStack_6b0;
extern unsigned int uStack_6b8;


void fn_8228EDD0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char *puVar8;
  __int64 lVar9;
  struct { int first; int second; } stack_pair_6c0;

  unsigned int uStack_6b8;
  struct { unsigned int first; unsigned int second; } stack_pair_6b0;

  unsigned int uStack_6a8;
  struct { unsigned int first; unsigned int second; } stack_pair_6a0;

  unsigned int uStack_698;
  unsigned int auStack_690 [4];
  unsigned char auStack_680 [8];
  unsigned char *puStack_678;
  unsigned char auStack_670 [8];
  unsigned char *puStack_668;
  unsigned char auStack_660 [8];
  unsigned char *puStack_658;
  unsigned char auStack_650 [512];
  unsigned char auStack_450 [512];
  unsigned char auStack_250 [560];

  uVar1 = fn_8251F720(param_4,0);
  if (uVar1 != 0) {
    uVar2 = fn_8251FBA8(uVar1);
    stack_pair_6c0.first = 0;
    stack_pair_6c0.second = 0;
    uVar2 = (uVar2 & 0xffffffff) >> 5;
    uStack_6b8 = 0;
    uVar6 = uVar2 * 0x20 + uVar1;
    fn_82290340(&stack_pair_6c0.first,uVar2 << 1);
    auStack_690[0] = 0;
    auStack_690[1] = 0;
    auStack_690[2] = 0;
    fn_82290528(auStack_690,uVar2);
    uVar5 = (unsigned __int64)auStack_690[0];
    uVar2 = uVar5;
    uVar7 = uVar1;
    if ((uVar1 & 0xffffffff) < (uVar6 & 0xffffffff)) {
      do {
        fn_82528BF8(*(unsigned int *)(param_1 + 0x4c),uVar7,uVar2,0x100,0,0);
        uStack_6a8 = (unsigned int)uVar7;
        stack_pair_6b0.first = 0;
        stack_pair_6b0.second = 4;
        fn_82290458(&stack_pair_6c0.first,&stack_pair_6b0.first);
        uStack_698 = (unsigned int)uVar2;
        stack_pair_6a0.first = 0;
        stack_pair_6a0.second = 5;
        fn_82290458(&stack_pair_6c0.first,&stack_pair_6a0.first);
        fn_82273C88(&stack_pair_6a0.first);
        fn_82273C88(&stack_pair_6b0.first);
        uVar7 = uVar7 + 0x20;
        uVar2 = uVar2 + 0x200;
      } while ((uVar7 & 0xffffffff) < (uVar6 & 0xffffffff));
    }
    cVar3 = fn_82672F30(*(unsigned int *)(param_1 + 0x14),0xffffffff821a9a2c,0,stack_pair_6c0.first,
                              stack_pair_6c0.second - stack_pair_6c0.first >> 4,1);
    if (cVar3 != '\0') {
      fn_82672C20(*(unsigned int *)(param_1 + 0x14),0xffffffff821a9a50,0,0);
    }
    if (uVar5 != 0) {
      fn_8265CA20(uVar5);
    }
    fn_822902E8(&stack_pair_6c0.first);
  }
  puVar4 = auStack_690 + 1;
  lVar9 = 3;
  do {
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
    *puVar4 = 0;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  fn_82528BF8(lbl_8327672C,0xffffffff821a99c8,auStack_450,0x100,0,1);
  fn_82273CD8(auStack_680,5);
  puStack_678 = auStack_450;
  fn_82528BF8(*(unsigned int *)(param_1 + 0x4c),param_2,auStack_650,0x100,0,0);
  fn_82273CD8(auStack_670,5);
  puStack_668 = auStack_650;
  fn_82528BF8(*(unsigned int *)(param_1 + 0x4c),param_3,auStack_250,0x100,0,0);
  fn_82273CD8(auStack_660,5);
  puStack_658 = auStack_250;
  fn_82672C20(*(unsigned int *)(param_1 + 0x14),0xffffffff821a9a70,auStack_680,3);
  fn_82528BF8(lbl_8327672C,0xffffffff821a99ac,auStack_650,0x100,0,1);
  fn_82273CD8(auStack_680,5);
  puStack_678 = auStack_650;
  fn_82672C20(*(unsigned int *)(param_1 + 0x14),0xffffffff821a9a98,auStack_680,1);
  puVar8 = auStack_650;
  lVar9 = 2;
  do {
    puVar8 = puVar8 + -0x10;
    fn_82273C88(puVar8);
    lVar9 = lVar9 + -1;
  } while (-1 < lVar9);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return;
}

extern int fn_82A94B08();
extern int fn_82A94F88();
extern int fn_82A98408();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int lbl_821A7F10;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


void fn_82A98CC0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
                  __int64 param_6,int *param_7,unsigned __int64 param_8)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int *piVar12;
  unsigned int in_stack_00000054;
  int *in_stack_0000005c;
  int iStack_a0;
  int iStack_9c;
  struct { int first; int second; } stack_pair_98;

  int iStack_90;
  int iStack_8c;
  struct { int first; int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;

  fn_82A94F88(param_4,&iStack_a0,&iStack_9c);
  uVar4 = 0x1f - (int)LZCOUNT(iStack_a0);
  uVar3 = 0x1f - (int)LZCOUNT(iStack_9c);
  uVar6 = (unsigned int)param_5 & 2;
  uVar10 = (unsigned int)((param_5 & 0xffffffff) >> 1) & 1;
  bVar1 = (&lbl_821A7F10)[param_4];
  uVar11 = (unsigned int)param_3;
  iVar5 = (int)param_1;
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = (iStack_a0 + iVar5) - 1U >> (uVar4 & 0x3f);
    iVar9 = param_2;
  }
  else {
    iVar9 = (1 << ((uVar10 - (int)LZCOUNT((iVar5 - uVar6) + -1)) + 0x20 & 0x3f)) >> (uVar11 & 0x3f);
    if (iVar9 < 2) {
      iVar9 = 1;
    }
    uVar2 = (iVar9 + iStack_a0) - 1U >> (uVar4 & 0x3f);
    iVar9 = (1 << ((uVar10 - (int)LZCOUNT((param_2 - uVar6) + -1)) + 0x20 & 0x3f)) >>
            (uVar11 & 0x3f);
    if (iVar9 < 2) {
      iVar9 = 1;
    }
  }
  stack_pair_98.first = 0;
  stack_pair_98.second = 0;
  if (in_stack_0000005c == (int *)0x0) {
    stack_pair_80.first = 0;
    stack_pair_80.second = 0;
    uVar10 = iVar5 - uVar6 >> (uVar11 & 0x3f);
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    uVar11 = param_2 - uVar6 >> (uVar11 & 0x3f);
    uStack_78 = (uVar10 + uVar6 + iStack_a0) - 1 >> (uVar4 & 0x3f);
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    uStack_74 = (uVar11 + uVar6 + iStack_9c) - 1 >> (uVar3 & 0x3f);
  }
  else {
    stack_pair_80.first = *in_stack_0000005c >> (uVar4 & 0x3f);
    stack_pair_80.second = in_stack_0000005c[1] >> (uVar3 & 0x3f);
    uStack_78 = (in_stack_0000005c[2] + iStack_a0) - 1U >> (uVar4 & 0x3f);
    uStack_74 = (in_stack_0000005c[3] + iStack_9c) - 1U >> (uVar3 & 0x3f);
  }
  piVar12 = (int *)0x0;
  if (param_7 != (int *)0x0) {
    piVar12 = &stack_pair_98.first;
    stack_pair_98.first = *param_7 >> (uVar4 & 0x3f);
    stack_pair_98.second = param_7[1] >> (uVar3 & 0x3f);
  }
  iVar7 = stack_pair_98.second;
  iVar5 = stack_pair_98.first;
  if ((param_5 & 1) == 0) {
    lVar8 = fn_82A94B08(param_1,param_2,1,param_3,param_4,1,(param_5 & 0xffffffff) >> 1 & 1,
                          &iStack_90);
    param_6 = param_6 - lVar8;
    stack_pair_98.first = iStack_90 + iVar5;
    stack_pair_98.second = iStack_8c + iVar7;
    piVar12 = &stack_pair_98.first;
  }
  fn_82A98408(param_6,uVar2,(iVar9 + iStack_9c) - 1U >> (uVar3 & 0x3f),piVar12,param_8,
                in_stack_00000054,&stack_pair_80.first,((unsigned int)bVar1 << (uVar3 + uVar4 & 0x3f)) >> 3);
  return;
}

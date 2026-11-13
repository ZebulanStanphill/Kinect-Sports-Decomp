#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695750();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_826ABDB8();
extern int fn_826B14D8();
extern int fn_826C2D98();
extern int fn_826C3378();
extern int fn_826C3490();
extern int fn_826C3C70();
extern int fn_826C40A8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;


void fn_826B24E0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar4;
  int iVar8;
  unsigned char *puVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned char auStack_70;
  int iStack_6c;
  int aiStack_68;
  struct { int first; int second; } stack_pair_60;

  unsigned char bStack_58;
  unsigned char auStack_50 [16];

  uVar3 = fn_8267B890(*(unsigned int *)(*(int *)(*param_1 + 0x78) + 0x288),0x68,0);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_826C40A8(uVar3,*param_1,param_2,param_1[5],0,param_1[8],1);
  }
  uVar1 = param_1[6];
  iStack_6c = fn_82694700((unsigned __int64)*(unsigned int *)(*param_1 + 0x78) + 0x254,param_1[2] + uVar1 + 3);
  *(int *)(iStack_6c + 8) = *(int *)(iStack_6c + 8) + 1;
  iVar8 = *(int *)(iStack_6c + 0x10) + uVar1 + 3;
  puVar9 = (unsigned char *)(param_1[2] + iVar8 + 1);
  iVar8 = iVar8 + 3;
  for (uVar3 = (unsigned __int64)CONCAT11(puVar9[1],*puVar9); uVar3 != 0; uVar3 = uVar3 - 1) {
    iVar6 = fn_82694700((unsigned __int64)*(unsigned int *)(*param_1 + 0x78) + 0x254,param_1[2] + iVar8);
    *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    aiStack_68 = iVar6;
    iVar7 = fn_826ABDB8(iVar5,0,&aiStack_68);
    lVar10 = (unsigned __int64)*(unsigned int *)(iVar6 + 8) - 1;
    iVar7 = *(int *)(*(int *)(iVar7 + 4) + 0x10);
    *(int *)(iVar6 + 8) = (int)lVar10;
    iVar8 = iVar7 + iVar8 + 1;
    if (lVar10 == 0) {
      fn_826944C8(iVar6);
    }
  }
  uVar2 = CONCAT11(((unsigned char *)(param_1[2] + iVar8))[1],*(unsigned char *)(param_1[2] + iVar8));
  *(unsigned int *)(iVar5 + 0x4c) = (unsigned int)uVar2;
  param_1[5] = (unsigned int)uVar2 + param_1[5];
  bStack_58 = 0;
  *(unsigned int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
  stack_pair_60.second = 0;
  iVar8 = *(int *)(*param_1 + 0xcc);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar8 * 4 + *(int *)(*param_1 + 200) + -4);
  }
  stack_pair_60.first = iVar5;
  if (iVar8 != 0) {
    fn_826C3378(&stack_pair_60.first,iVar8,0);
  }
  fn_82695750(auStack_50,&stack_pair_60.first);
  if (*(int *)(iStack_6c + 0x10) != 0) {
    iVar8 = *(int *)(*param_1 + 0x74);
    auStack_70 = 0;
    (**(int (***)())(*(int *)(iVar8 + 0x68) + 0x28))
              (iVar8 + 0x68,*param_1 + 0x78,&iStack_6c,auStack_50,&auStack_70);
  }
  lVar10 = fn_8267B890(*(unsigned int *)(*(int *)(*param_1 + 0x78) + 0x288),0x50,0);
  if (lVar10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = fn_826B14D8(*(unsigned int *)(*param_1 + 0x78),1);
    uVar3 = fn_826C3C70(lVar10,(unsigned __int64)*param_1 + 0x78,uVar4,&stack_pair_60.first,0);
  }
  uVar4 = fn_826B14D8(*(unsigned int *)(*param_1 + 0x78),7);
  fn_826C3490(stack_pair_60.first,(unsigned __int64)*param_1 + 0x78,uVar4);
  fn_826C2D98(iVar5,(unsigned __int64)*param_1 + 0x78,uVar3);
  if (*(int *)(iStack_6c + 0x10) == 0) {
    uVar1 = *param_1;
    puVar12 = (unsigned int *)(uVar1 + 8);
    uVar11 = *(int *)(uVar1 + 8) + 0x10;
    *puVar12 = uVar11;
    if (*(unsigned int *)(uVar1 + 0x10) <= uVar11) {
      fn_826826A8(puVar12);
    }
    if (*puVar12 != 0) {
      fn_82695DA0(*puVar12,auStack_50);
    }
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_826824B0(uVar3);
  }
  fn_82696330(auStack_50);
  if (((bStack_58 & 2) == 0) && (stack_pair_60.first != 0)) {
    fn_826824B0();
  }
  stack_pair_60.first = 0;
  if (((bStack_58 & 1) == 0) && (stack_pair_60.second != 0)) {
    fn_826824B0();
  }
  stack_pair_60.second = 0;
  lVar10 = (unsigned __int64)*(unsigned int *)(iStack_6c + 8) - 1;
  *(int *)(iStack_6c + 8) = (int)lVar10;
  if (lVar10 == 0) {
    fn_826944C8(iStack_6c);
  }
  fn_826824B0(iVar5);
  return;
}

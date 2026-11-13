#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826944C8();
extern int fn_82694610();
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


void fn_826B2840(int *param_1,unsigned __int64 param_2)

{
  unsigned char uVar1;
  unsigned char uVar2;
  char cVar3;
  unsigned short uVar4;
  unsigned __int64 uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar6;
  char *pcVar10;
  unsigned char *puVar11;
  char *pcVar13;
  __int64 lVar12;
  unsigned int uVar14;
  int iVar15;
  unsigned int *puVar16;
  unsigned char auStack_70;
  int iStack_6c;
  int aiStack_68;
  struct { int first; int second; } stack_pair_60;

  unsigned char bStack_58;
  unsigned char auStack_50 [16];

  uVar5 = fn_8267B890(*(unsigned int *)(*(int *)(*param_1 + 0x78) + 0x288),0x68,0);
  if ((uVar5 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_826C40A8(uVar5,*param_1,param_2,param_1[5],0,param_1[8],2);
  }
  iVar15 = param_1[6];
  iStack_6c = fn_82694700((unsigned __int64)*(unsigned int *)(*param_1 + 0x78) + 0x254,param_1[2] + iVar15 + 3);
  *(int *)(iStack_6c + 8) = *(int *)(iStack_6c + 8) + 1;
  iVar9 = *(int *)(iStack_6c + 0x10) + iVar15 + 3;
  puVar11 = (unsigned char *)(param_1[2] + iVar9 + 1);
  uVar1 = puVar11[1];
  uVar2 = *puVar11;
  *(unsigned char *)(iVar7 + 0x67) = *(unsigned char *)(param_1[2] + iVar9 + 3);
  iVar15 = iVar9 + 6;
  puVar11 = (unsigned char *)(param_1[2] + iVar9 + 4);
  *(unsigned short *)(iVar7 + 100) = CONCAT11(puVar11[1],*puVar11);
  for (uVar5 = (unsigned __int64)CONCAT11(uVar1,uVar2); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar1 = *(unsigned char *)(param_1[2] + iVar15);
    pcVar10 = (char *)(param_1[2] + iVar15 + 1);
    pcVar13 = pcVar10;
    do {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    iVar8 = fn_82694610((unsigned __int64)*(unsigned int *)(*param_1 + 0x78) + 0x254,pcVar10,
                              pcVar13 + (-1 - (int)pcVar10));
    *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    aiStack_68 = iVar8;
    iVar9 = fn_826ABDB8(iVar7,uVar1,&aiStack_68);
    lVar12 = (unsigned __int64)*(unsigned int *)(iVar8 + 8) - 1;
    iVar9 = *(int *)(*(int *)(iVar9 + 4) + 0x10);
    *(int *)(iVar8 + 8) = (int)lVar12;
    iVar15 = iVar9 + iVar15 + 1 + 1;
    if (lVar12 == 0) {
      fn_826944C8(iVar8);
    }
  }
  uVar4 = CONCAT11(((unsigned char *)(param_1[2] + iVar15))[1],*(unsigned char *)(param_1[2] + iVar15));
  *(unsigned int *)(iVar7 + 0x4c) = (unsigned int)uVar4;
  param_1[5] = (unsigned int)uVar4 + param_1[5];
  bStack_58 = 0;
  *(unsigned int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1U & 0x8fffffff;
  stack_pair_60.second = 0;
  iVar15 = *(int *)(*param_1 + 0xcc);
  if (iVar15 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(iVar15 * 4 + *(int *)(*param_1 + 200) + -4);
  }
  stack_pair_60.first = iVar7;
  if (iVar15 != 0) {
    fn_826C3378(&stack_pair_60.first,iVar15,0);
  }
  fn_82695750(auStack_50,&stack_pair_60.first);
  if (*(int *)(iStack_6c + 0x10) != 0) {
    iVar15 = *(int *)(*param_1 + 0x74);
    auStack_70 = 0;
    (**(int (***)())(*(int *)(iVar15 + 0x68) + 0x28))
              (iVar15 + 0x68,*param_1 + 0x78,&iStack_6c,auStack_50,&auStack_70);
  }
  iVar15 = *param_1 + 0x78;
  lVar12 = fn_8267B890(*(unsigned int *)(*(int *)(*param_1 + 0x78) + 0x288),0x50,0);
  if (lVar12 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = fn_826B14D8(*(unsigned int *)(*param_1 + 0x78),1);
    uVar5 = fn_826C3C70(lVar12,iVar15,uVar6,&stack_pair_60.first,0);
  }
  uVar6 = fn_826B14D8(*(unsigned int *)(*param_1 + 0x78),7);
  fn_826C3490(stack_pair_60.first,iVar15,uVar6);
  fn_826C2D98(iVar7,iVar15,uVar5);
  if (*(int *)(iStack_6c + 0x10) == 0) {
    iVar15 = *param_1;
    puVar16 = (unsigned int *)(iVar15 + 8);
    uVar14 = *(int *)(iVar15 + 8) + 0x10;
    *puVar16 = uVar14;
    if (*(unsigned int *)(iVar15 + 0x10) <= uVar14) {
      fn_826826A8(puVar16);
    }
    if (*puVar16 != 0) {
      fn_82695DA0(*puVar16,auStack_50);
    }
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_826824B0(uVar5);
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
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_6c + 8) - 1;
  *(int *)(iStack_6c + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_6c);
  }
  fn_826824B0(iVar7);
  return;
}

typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_ad0;
extern unsigned int *auStack_b00;
extern unsigned int *auStack_b10;
extern int fn_822315A0();
extern int fn_823D22D0();
extern int fn_824B42C8();
extern int fn_82517978();
extern int fn_82A1DD38();
extern int fn_82E581C0();
extern int fn_82F50CC0();
extern int fn_82F50FC8();
extern int fn_82F534F8();
extern int fn_82F564D8();
extern int fn_82F57338();
extern int fn_82F5A6A0();
extern int fn_8306ED30();
extern unsigned int iStack_b1c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BAB30;
extern unsigned int uStack_b20;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82F51AC0(unsigned __int64 param_1,int *param_2)

{
  unsigned __int64 in_r0;
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned int uVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  double dVar9;
  double dVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  struct { unsigned int first; int second; } stack_pair_b20;

  unsigned char auStack_b10 [4];
  int *piStack_b0c;
  unsigned char auStack_b00 [48];
  unsigned char auStack_ad0 [2656];
  
  fn_82F50CC0(*(unsigned int *)(param_2[1] + 8));
  lVar1 = fn_82E581C0(*(unsigned int *)(param_2[1] + 8));
  if (lVar1 != *(__int64 *)(param_2[1] + 2000)) {
    puVar4 = (unsigned int *)param_2[1];
    uVar2 = fn_823D22D0(*puVar4);
    fn_82F50FC8(param_2,uVar2,puVar4 + 4);
    dVar9 = (double)fn_824B42C8(lVar1 - *(__int64 *)(param_2[1] + 2000));
    uVar8 = 0x1d0;
    lVar7 = 0;
    dVar10 = (double)(float)((double)lbl_82002AE0 / dVar9);
    do {
      iVar3 = fn_82F564D8(&stack_pair_b20.first,*(unsigned int *)param_2[1],lVar7);
      puVar4 = (unsigned int *)((int)in_r0 + iVar3 & 0xfffffff0);
      uVar11 = *puVar4;
      uVar12 = puVar4[1];
      uVar13 = puVar4[2];
      uVar14 = puVar4[3];
      fn_8306ED30();
      fn_82F534F8(dVar10);
      puVar4 = (unsigned int *)(uVar8 + param_2[1] & 0xfffffff0);
      *puVar4 = uVar11;
      puVar4[1] = uVar12;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar4 = (unsigned int *)((uVar8 + param_2[1]) - 0x1a0 & 0xfffffff0);
      uVar11 = *puVar4;
      uVar12 = puVar4[1];
      uVar13 = puVar4[2];
      uVar14 = puVar4[3];
      fn_8306ED30();
      fn_82F534F8(dVar10);
      lVar7 = lVar7 + 1;
      iVar3 = uVar8 + param_2[1];
      uVar8 = uVar8 + 0x10;
      puVar4 = (unsigned int *)(iVar3 + 0x140U & 0xfffffff0);
      *puVar4 = uVar11;
      puVar4[1] = uVar12;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
    } while (uVar8 < 0x310);
    (**(int (***)())(**(int **)(param_2[1] + 8) + 8))(*(int **)(param_2[1] + 8),auStack_b00);
    uVar2 = fn_823D22D0(*(unsigned int *)param_2[1]);
    fn_82A1DD38(auStack_ad0,uVar2,0x1c0);
    puVar4 = (unsigned int *)fn_82F57338(auStack_b10,*(unsigned int *)param_2[1]);
    stack_pair_b20.first = 0;
    stack_pair_b20.second = 0;
    fn_82517978(&stack_pair_b20.first,*puVar4,puVar4[1],0);
    dVar10 = (double)fn_82F5A6A0(stack_pair_b20.first,0);
    if (stack_pair_b20.second != 0) {
      fn_822315A0();
    }
    if (ZEXT48(piStack_b0c) != 0) {
      lVar7 = ZEXT48(piStack_b0c) + 8;
      do {
        puVar6 = (unsigned int *)lVar7;
        lVar5 = (unsigned __int64)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar8 = storeWordConditionalIndexed(lVar5,0,lVar7);
          *puVar6 = uVar8;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar5 == 0) {
        (**(int (***)())(*piStack_b0c + 4))();
      }
    }
    if (((double)lbl_831BAB30 <= dVar10) ||
       (iVar3 = (**(int (***)())(*param_2 + 4))(param_2), iVar3 == 0)) {
      *(unsigned int *)(param_2[1] + 0x7f0) = lbl_821AAD20;
    }
    else {
      *(float *)(param_2[1] + 0x7f0) = (float)((double)*(float *)(param_2[1] + 0x7f0) + dVar9);
    }
    uVar2 = fn_823D22D0(*(unsigned int *)param_2[1]);
    fn_82A1DD38((unsigned __int64)(unsigned int)param_2[1] + 0x450,uVar2,0x1c0);
    fn_82A1DD38((unsigned __int64)(unsigned int)param_2[1] + 0x610,(unsigned __int64)(unsigned int)param_2[1] + 0x10,0x1c0);
    *(__int64 *)(param_2[1] + 2000) = lVar1;
  }
  (**(int (***)())(*param_2 + 8))(param_1,param_2);
  return;
}


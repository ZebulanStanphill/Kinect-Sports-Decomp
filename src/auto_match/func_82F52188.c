typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82F564D8();
extern int fn_82F57198();
extern int fn_82F5B2D8();
extern int fn_82F5B378();
extern int fn_8306ED70();
extern unsigned int iStack_6c;
extern unsigned int lbl_82165AC0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_70;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F52188(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int *puVar3;
  char cVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uStack_70;
  int iStack_6c;
  unsigned char auStack_60 [4];
  int *piStack_5c;
  unsigned char auStack_58 [4];
  int *piStack_54;
  unsigned int auStack_50 [20];
  
  if (param_3 == 0) {
    puVar3 = (unsigned int *)((unsigned int)(&lbl_82165AC0 + in_r0) & 0xfffffff0);
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    puVar2 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar2 = *puVar3;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  else {
    puVar3 = (unsigned int *)fn_82F57198(auStack_60,*(unsigned int *)(*(int *)(param_2 + 4) + 4));
    uStack_70 = 0;
    iStack_6c = 0;
    fn_82517978(&uStack_70,*puVar3,puVar3[1],0);
    cVar4 = fn_82F5B2D8(uStack_70);
    if (iStack_6c != 0) {
      fn_822315A0(iStack_6c);
    }
    if (ZEXT48(piStack_5c) != 0) {
      lVar6 = ZEXT48(piStack_5c) + 8;
      do {
        puVar7 = (unsigned int *)lVar6;
        lVar5 = (unsigned __int64)*puVar7 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar5,0,lVar6);
          *puVar7 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar5 == 0) {
        (**(int (***)())(*piStack_5c + 4))();
      }
    }
    bVar8 = (cVar4 == '\0') << 1;
    if (cVar4 == '\0') {
      fn_82F564D8(&uStack_70,**(unsigned int **)(param_2 + 4),0);
      puVar3 = &uStack_70;
      iStack_6c = lbl_821AAD20;
    }
    else {
      puVar3 = (unsigned int *)fn_82F57198(auStack_58,(*(unsigned int **)(param_2 + 4))[1]);
      uStack_70 = 0;
      iStack_6c = 0;
      fn_82517978(&uStack_70,*puVar3,puVar3[1],0);
      fn_82F5B378(uStack_70,auStack_50);
      if (iStack_6c != 0) {
        fn_822315A0();
      }
      if (ZEXT48(piStack_54) != 0) {
        lVar6 = ZEXT48(piStack_54) + 8;
        do {
          puVar7 = (unsigned int *)lVar6;
          lVar5 = (unsigned __int64)*puVar7 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar5,0,lVar6);
            *puVar7 = uVar1;
            bVar8 = 2;
          }
        } while (!(bool)(bVar8 >> 1 & 1));
        if ((int)lVar5 == 0) {
          (**(int (***)())(*piStack_54 + 4))();
        }
      }
      puVar3 = auStack_50;
    }
    puVar3 = (unsigned int *)(in_r0 + (int)puVar3 & 0xfffffff0);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    fn_8306ED70();
    puVar3 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar3 = uVar9;
    puVar3[1] = uVar10;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
  }
  return param_1;
}


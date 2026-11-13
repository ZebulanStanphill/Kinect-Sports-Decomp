typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_824CC840();
extern int fn_824CD030();
extern int fn_824D2AE8();
extern int fn_824D3760();
extern int fn_824D3898();
extern int fn_824DB830();
extern int fn_82517978();
extern int fn_82F51468();
extern int fn_82F514A0();
extern int fn_82F514D8();
extern int fn_82F53418();
extern unsigned int iStack_2c;
extern unsigned int iStack_4c;
extern unsigned int lbl_821955D8;
extern unsigned int lbl_821C0D00;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam831c3b88;
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_824D2D78(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar4;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned int *puVar10;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar11;
  unsigned int uStack_50;
  int iStack_4c;
  unsigned char auStack_48 [4];
  int *piStack_44;
  unsigned char auStack_40 [4];
  int *piStack_3c;
  unsigned char auStack_38 [4];
  int *piStack_34;
  unsigned char auStack_30 [4];
  int iStack_2c;
  unsigned char auStack_28 [4];
  int *piStack_24;
  
  fn_824CC840();
  *(unsigned char *)(param_1 + 0x38) = 1;
  *param_1 = &lbl_821C0D00;
  fn_824DB830(param_1 + 0x3c,1,*(unsigned int *)(param_2 + 0x30));
  fn_824DB830(param_1 + 0x15c,0,*(unsigned int *)(param_2 + 0x30));
  param_1[0x27c] = 0;
  uVar2 = ltcg_pool_0_0f;
  param_1[0x27d] = 0;
  param_1[0x280] = uVar2;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x287] = uRam831c3b88;
  param_1[0x281] = 0;
  param_1[0x285] = uVar2;
  param_1[0x282] = 0;
  param_1[0x286] = uVar2;
  param_1[0x283] = 0;
  param_1[0x288] = uVar2;
  uVar3 = uRam831c3b88;
  param_1[0x289] = 0;
  param_1[0x28d] = uVar2;
  param_1[0x28a] = 0;
  param_1[0x28e] = uVar2;
  param_1[0x28b] = 0;
  param_1[0x28f] = uVar3;
  param_1[0x290] = uVar2;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x294] = 0;
  puVar5 = (unsigned int *)fn_82F514A0(auStack_40,param_1[8]);
  uStack_50 = 0;
  iStack_4c = 0;
  fn_82517978(&uStack_50,*puVar5,puVar5[1],0);
  fn_824D3760(auStack_48,uStack_50);
  if (ZEXT48(piStack_44) != 0) {
    lVar9 = ZEXT48(piStack_44) + 8;
    do {
      puVar10 = (unsigned int *)lVar9;
      lVar8 = (unsigned __int64)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
        *puVar10 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(int (***)())(*piStack_44 + 4))();
    }
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (ZEXT48(piStack_3c) != 0) {
    lVar9 = ZEXT48(piStack_3c) + 8;
    do {
      puVar10 = (unsigned int *)lVar9;
      lVar8 = (unsigned __int64)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
        *puVar10 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(int (***)())(*piStack_3c + 4))();
    }
  }
  puVar5 = (unsigned int *)fn_82F514D8(auStack_38,param_1[8]);
  uStack_50 = 0;
  iStack_4c = 0;
  fn_82517978(&uStack_50,*puVar5,puVar5[1],0);
  fn_824D3898(auStack_48,uStack_50);
  if (ZEXT48(piStack_44) != 0) {
    lVar9 = ZEXT48(piStack_44) + 8;
    do {
      puVar10 = (unsigned int *)lVar9;
      lVar8 = (unsigned __int64)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
        *puVar10 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(int (***)())(*piStack_44 + 4))();
    }
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (ZEXT48(piStack_34) != 0) {
    lVar9 = ZEXT48(piStack_34) + 8;
    do {
      puVar10 = (unsigned int *)lVar9;
      lVar8 = (unsigned __int64)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
        *puVar10 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(int (***)())(*piStack_34 + 4))();
    }
  }
  *(unsigned int *)(param_1[8] + 0x10) = lbl_821955D8;
  iVar6 = fn_824CD030(param_1);
  if (iVar6 != 0) {
    uVar4 = fn_82F51468(auStack_28,param_1[8]);
    puVar5 = (unsigned int *)fn_824D2AE8(auStack_30,uVar4);
    iVar7 = fn_82F53418(*puVar5,param_2 + 0x34,1);
    bVar11 = (iVar7 == 0) << 1;
    iVar6 = 0;
    if (iVar7 != 0) {
      iVar6 = iVar7;
    }
    param_1[0x294] = iVar6;
    if (iStack_2c != 0) {
      fn_822315A0();
    }
    if (ZEXT48(piStack_24) != 0) {
      lVar9 = ZEXT48(piStack_24) + 8;
      do {
        puVar10 = (unsigned int *)lVar9;
        lVar8 = (unsigned __int64)*puVar10 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
          *puVar10 = uVar1;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if ((int)lVar8 == 0) {
        (**(int (***)())(*piStack_24 + 4))();
      }
    }
  }
  return param_1;
}


typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_824CC840();
extern int fn_824CD030();
extern int fn_824D45B0();
extern int fn_824D4AB8();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_82A1EFC0();
extern int fn_82F514A0();
extern int fn_82F514D8();
extern unsigned int iStack_6c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C0D90;
extern unsigned int uStack_64;
extern unsigned int uStack_70;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_824D3A00(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned __int64 *puVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar10;
  __int64 lVar9;
  char in_RESERVE;
  unsigned char bVar11;
  __int64 lVar12;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_70;
  int iStack_6c;
  unsigned char **ppuStack_68;
  unsigned int uStack_64;
  unsigned char auStack_60 [4];
  int *piStack_5c;
  unsigned char auStack_58 [4];
  int *piStack_54;
  unsigned char auStack_50 [4];
  int *piStack_4c;
  unsigned char auStack_48 [4];
  int *piStack_44;
  
  fn_824CC840();
  param_1[0x3c] = 0;
  *param_1 = &lbl_821C0D90;
  *(unsigned char *)(param_1 + 0x38) = 1;
  puVar7 = param_1 + 0x44;
  param_1[0x3d] = 0;
  param_1[0x44] = 0;
  puVar5 = (unsigned __int64 *)fn_8265C9E0(8);
  if (puVar5 != (unsigned __int64 *)0x0) {
    uStack_70 = 0;
    iStack_6c = 0;
    *puVar7 = puVar5;
    *puVar5 = 0;
    *(unsigned int **)*puVar7 = puVar7;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    puVar7 = (unsigned int *)((unsigned int)(param_1 + 0x4c) & 0xfffffff0);
    *puVar7 = in_register_000104d0;
    puVar7[1] = in_register_000104d4;
    puVar7[2] = in_register_000104d8;
    puVar7[3] = in_vr77;
    puVar7 = (unsigned int *)((unsigned int)(param_1 + 0x50) & 0xfffffff0);
    *puVar7 = in_register_000104b0;
    puVar7[1] = in_register_000104b4;
    puVar7[2] = in_register_000104b8;
    puVar7[3] = in_vr75;
    param_1[0x58] = 0;
    puVar7 = (unsigned int *)((unsigned int)(param_1 + 0x54) & 0xfffffff0);
    *puVar7 = in_register_000104d0;
    puVar7[1] = in_register_000104d4;
    puVar7[2] = in_register_000104d8;
    puVar7[3] = in_vr77;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    iVar6 = fn_824CD030(param_1);
    bVar11 = (iVar6 == 0) << 1;
    if (iVar6 != 0) {
      fn_824D45B0(param_1,param_2);
    }
    puVar8 = param_1 + 0x40;
    puVar7 = (unsigned int *)(param_2 + 0x38);
    lVar12 = 3;
    do {
      puVar8[-2] = puVar7[-2];
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar7;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    fn_82A1EFC0(param_1 + 0x59,0,0xc);
    puVar7 = (unsigned int *)fn_82F514A0(auStack_58,param_1[8]);
    uStack_70 = 0;
    iStack_6c = 0;
    fn_82517978(&uStack_70,*puVar7,puVar7[1],0);
    puVar7 = (unsigned int *)fn_824D4AB8(auStack_60,uStack_70);
    uVar1 = puVar7[1];
    uVar2 = *puVar7;
    if ((unsigned __int64)uVar1 != 0) {
      lVar12 = (unsigned __int64)uVar1 + 8;
      do {
        puVar10 = (unsigned int *)lVar12;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar10 + 1,0,lVar12);
          *puVar10 = uVar4;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
    }
    piVar3 = (int *)param_1[0x5e];
    if (ZEXT48(piVar3) != 0) {
      lVar12 = ZEXT48(piVar3) + 8;
      do {
        puVar10 = (unsigned int *)lVar12;
        lVar9 = (unsigned __int64)*puVar10 - 1;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(lVar9,0,lVar12);
          *puVar10 = uVar4;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if ((int)lVar9 == 0) {
        (**(int (***)())(*piVar3 + 4))();
      }
    }
    param_1[0x5e] = uVar1;
    param_1[0x5d] = uVar2;
    if (ZEXT48(piStack_5c) != 0) {
      lVar12 = ZEXT48(piStack_5c) + 8;
      do {
        puVar10 = (unsigned int *)lVar12;
        lVar9 = (unsigned __int64)*puVar10 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar9,0,lVar12);
          *puVar10 = uVar1;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if ((int)lVar9 == 0) {
        (**(int (***)())(*piStack_5c + 4))();
      }
    }
    if (iStack_6c != 0) {
      fn_822315A0();
    }
    if (ZEXT48(piStack_54) != 0) {
      lVar12 = ZEXT48(piStack_54) + 8;
      do {
        puVar10 = (unsigned int *)lVar12;
        lVar9 = (unsigned __int64)*puVar10 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar9,0,lVar12);
          *puVar10 = uVar1;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if ((int)lVar9 == 0) {
        (**(int (***)())(*piStack_54 + 4))();
      }
    }
    puVar7 = (unsigned int *)fn_82F514D8(auStack_48,param_1[8]);
    uStack_70 = 0;
    iStack_6c = 0;
    fn_82517978(&uStack_70,*puVar7,puVar7[1],0);
    puVar7 = (unsigned int *)fn_824D4AB8(auStack_50,uStack_70);
    uVar1 = puVar7[1];
    uVar2 = *puVar7;
    if ((unsigned __int64)uVar1 != 0) {
      lVar12 = (unsigned __int64)uVar1 + 8;
      do {
        puVar10 = (unsigned int *)lVar12;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar10 + 1,0,lVar12);
          *puVar10 = uVar4;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
    }
    piVar3 = (int *)param_1[0x60];
    if (ZEXT48(piVar3) != 0) {
      lVar12 = ZEXT48(piVar3) + 8;
      do {
        puVar10 = (unsigned int *)lVar12;
        lVar9 = (unsigned __int64)*puVar10 - 1;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(lVar9,0,lVar12);
          *puVar10 = uVar4;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if ((int)lVar9 == 0) {
        (**(int (***)())(*piVar3 + 4))();
      }
    }
    param_1[0x60] = uVar1;
    param_1[0x5f] = uVar2;
    if (ZEXT48(piStack_4c) != 0) {
      lVar12 = ZEXT48(piStack_4c) + 8;
      do {
        puVar10 = (unsigned int *)lVar12;
        lVar9 = (unsigned __int64)*puVar10 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar9,0,lVar12);
          *puVar10 = uVar1;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if ((int)lVar9 == 0) {
        (**(int (***)())(*piStack_4c + 4))();
      }
    }
    if (iStack_6c != 0) {
      fn_822315A0();
    }
    if (ZEXT48(piStack_44) != 0) {
      lVar12 = ZEXT48(piStack_44) + 8;
      do {
        puVar10 = (unsigned int *)lVar12;
        lVar9 = (unsigned __int64)*puVar10 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar9,0,lVar12);
          *puVar10 = uVar1;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if ((int)lVar9 == 0) {
        (**(int (***)())(*piStack_44 + 4))();
      }
    }
    return param_1;
  }
  uStack_64 = 0;
  ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_68);
}


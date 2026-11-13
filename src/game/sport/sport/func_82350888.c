extern unsigned int *auStack_324;
extern unsigned int *auStack_340;
extern int fn_822315A0();
extern int fn_8225AF90();
extern int fn_8225C590();
extern int fn_8225F160();
extern int fn_822A1CA8();
extern int fn_82355ED8();
extern int fn_823577F0();
extern int fn_8245FAD0();
extern int fn_82511928();
extern int fn_82512B08();
extern int fn_825138E0();
extern int fn_825200A8();
extern int fn_82522588();
extern int fn_8265BF48();
extern int fn_82672C20();
extern int fn_828AAF70();
extern int fn_828AB870();
extern int fn_828AD740();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_384;
extern unsigned int iStack_388;
extern unsigned int iStack_38c;
extern unsigned int iStack_390;
extern unsigned int lbl_821BC740;
extern unsigned int lbl_821BC758;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8246FAF0;
extern unsigned int lbl_8246FB10;
extern unsigned int lbl_831D1318;
extern unsigned int lbl_831D131C;
extern unsigned int lbl_831D1324;
extern unsigned int lbl_832765BC;
extern int (*lbl_83276778)();
extern unsigned int lbl_83297810;
extern unsigned int uRam831c6c2c;


/* WARNING: Removing unreachable block (ram,0x82350c58) */
/* WARNING: Removing unreachable block (ram,0x82350c88) */

void fn_82350888(int param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  __int64 lVar2;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned int uVar13;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  unsigned char **ppuStack_380;
  unsigned char *puStack_37c;
  unsigned char ***pppuStack_370;
  unsigned char **ppuStack_360;
  unsigned char *puStack_35c;
  unsigned char ***pppuStack_350;
  unsigned char auStack_340 [28];
  unsigned char auStack_324 [804];
  
  if (param_2 == *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = param_2;
  iVar5 = lbl_832765BC;
  switch(param_2) {
  case 0:
    if (*(int *)(param_1 + 0x3e4) == 0) {
      if (lbl_83276778 != (int (**)())0x0) {
        (*lbl_83276778)(0,lbl_832765BC == 0,0,0xffffffff821b201c,0xffffffff821b1fb8,0x453);
      }
      *(unsigned int *)(param_1 + 0x3e4) = 1;
    }
    if (*(int *)(param_1 + 0x3f0) == 0) {
      uVar3 = fn_82512B08(1,1);
      *(unsigned int *)(param_1 + 0x3f0) = uVar3;
    }
    break;
  case 5:
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(int (***)())(**(int **)(param_1 + 0x18) + 8))();
    }
    break;
  case 6:
    *(unsigned int *)(param_1 + 0x354) = 0;
    break;
  case 7:
    *(unsigned int *)(param_1 + 0x340) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(unsigned int *)(*(int *)(param_1 + 0x2c) + 100) = 0;
    }
    break;
  case 8:
    *(unsigned int *)(param_1 + 0x368) = ltcg_pool_0_0f;
    if (iVar5 != 0) {
      *(unsigned int *)(*(int *)(iVar5 + 0x38) + 0x80) = uRam831c6c2c;
    }
    fn_82F68CC0(auStack_340,0xffffffff821b238c,0x1c);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_324,0,0xe4);
  case 10:
    piVar1 = *(int **)(param_1 + 0x2ac);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 1)) {
      *piVar1 = 1;
      fn_82672C20(piVar1[2],0xffffffff821ab560,0,0);
    }
    break;
  case 0xb:
    *(unsigned int *)(param_1 + 0x39c) = 0;
    break;
  case 0xd:
    fn_82355ED8(param_1);
    break;
  case 0xf:
    iVar5 = fn_8225C590();
    uVar13 = 0;
    uVar11 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) >> 2;
    if (0 < (int)uVar11) {
      iVar12 = 0;
      do {
        if (uVar13 < uVar11) {
          iVar4 = *(int *)(*(int *)(iVar5 + 0x10) + iVar12);
        }
        else {
          iVar4 = 0;
        }
        if (iVar4 != 0) {
          fn_8225AF90();
        }
        uVar13 = uVar13 + 1;
        iVar12 = iVar12 + 4;
        uVar11 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) >> 2;
      } while ((int)uVar13 < (int)uVar11);
    }
    *(unsigned int *)(param_1 + 0x3c4) = 0;
    break;
  case 0x10:
    if (lbl_832765BC == 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        lbl_831D131C = 1;
      }
      else {
        iVar5 = fn_8225F160();
        lbl_831D131C = *(unsigned int *)(iVar5 + 0x34);
      }
      iVar5 = fn_8225F160();
      lbl_831D1324 = *(unsigned int *)(iVar5 + 0xc);
    }
    uVar7 = (unsigned __int64)lbl_83297810;
    if (uVar7 == 0) {
      uVar7 = fn_82511928();
    }
    fn_825138E0(&iStack_388,uVar7,1);
    if ((iStack_388 != 0) &&
       (cVar6 = fn_828AD740(*(unsigned int *)(iStack_388 + 8)), cVar6 != '\0')) {
      fn_82522588(&iStack_390,&iStack_388);
      piVar1 = *(int **)(iStack_390 + 0x38);
      if (piVar1 != (int *)0x0) {
        lVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
        fn_828AAF70(lVar2 + 0x144,1);
        lVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
        fn_828AB870(lVar2 + 0x48,0);
      }
      if (iStack_38c != 0) {
        fn_822315A0();
      }
    }
    if (lbl_832765BC == 0) {
      iStack_390 = fn_8265BF48(0xffffffff821b203c,0);
      if (*(int *)(param_1 + 0x3e4) == 0) {
        iVar5 = fn_825200A8(*(unsigned int *)(param_1 + 0x14),&iStack_390);
        if (lbl_83276778 != (int (**)())0x0) {
          if (iVar5 == 0) {
            uVar10 = 0x4c7;
            goto code_r0x82350d38;
          }
          uVar10 = 0x4c3;
          uVar9 = 1;
          uVar8 = 0;
          goto code_r0x82350d40;
        }
        goto code_r0x82350d60;
      }
    }
    else {
      lbl_831D1318 = 0;
      piVar1 = *(int **)(param_1 + 0x3e0);
      iVar5 = lbl_832765BC;
      if (*piVar1 == 0) {
        fn_8245FAD0();
        iVar5 = lbl_832765BC;
        *piVar1 = 1;
      }
      if (iVar5 != 0) {
        puStack_37c = &lbl_8246FB10;
        pppuStack_370 = &ppuStack_380;
        ppuStack_380 = &lbl_821BC758;
        puStack_35c = &lbl_8246FAF0;
        pppuStack_350 = &ppuStack_360;
        ppuStack_360 = &lbl_821BC740;
        fn_822A1CA8(&ppuStack_360,&ppuStack_380);
      }
      if (*(int *)(param_1 + 0x3e4) == 0) {
        if (lbl_83276778 != (int (**)())0x0) {
          uVar10 = 0x4b6;
code_r0x82350d38:
          uVar9 = 0;
          uVar8 = 1;
code_r0x82350d40:
          (*lbl_83276778)(0,uVar8,uVar9,0xffffffff821b201c,0xffffffff821b1fb8,uVar10);
        }
code_r0x82350d60:
        *(unsigned int *)(param_1 + 0x3e4) = 1;
      }
    }
    if (iStack_384 != 0) {
      fn_822315A0();
    }
    break;
  case 0x11:
    *(unsigned int *)(param_1 + 0x434) = 0;
    break;
  case 0x12:
    (**(int (***)())(**(int **)(param_1 + 0x18) + 0x30))();
    fn_823577F0(param_1 + 0x288,param_1 + 0x290);
  }
  return;
}


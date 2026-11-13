extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_170;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8225BD88();
extern int fn_8225C0A0();
extern int fn_8225C168();
extern int fn_8225C590();
extern int fn_8225C5F8();
extern int fn_8225CF60();
extern int fn_8225D1F8();
extern int fn_8225D288();
extern int fn_8225D930();
extern int fn_8225D9B8();
extern int fn_8229E090();
extern int fn_823AB470();
extern int fn_824C04E0();
extern int fn_824C4370();
extern int fn_82512A48();
extern int iRam8327674c;
extern unsigned int iStack_13c;
extern unsigned int iStack_15c;
extern unsigned int lbl_8219854C;
extern unsigned int lbl_82198564;
extern unsigned int uRam832766f3;


void fn_824C4408(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned int auStack_170;
  unsigned char **ppuStack_160;
  int iStack_15c;
  unsigned char ***pppuStack_150;
  unsigned char **ppuStack_140;
  int iStack_13c;
  unsigned char ***pppuStack_130;
  unsigned char auStack_120 [32];
  unsigned char auStack_100 [32];
  unsigned char auStack_e0 [32];
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [112];
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (iRam8327674c != 0) {
        fn_82512A48();
        iRam8327674c = 0;
      }
      *(unsigned int *)(param_2 + 0x18) = 0;
      return;
    }
    fn_8229E090(*(unsigned int *)(param_2 + 0x18),0,1);
    *(unsigned int *)(param_2 + 0x18) = 0;
LAB_824c4e8c:
    fn_824C04E0(*(unsigned int *)(param_2 + 4),1);
    return;
  }
  fn_8229E090(*(unsigned int *)(param_2 + 0x18),0,1);
  uVar1 = *(unsigned int *)(param_2 + 0x1c);
  *(unsigned int *)(param_2 + 0x18) = 0;
  if (uVar1 == 0) {
    uVar1 = *(unsigned int *)(param_2 + 0x14);
    uVar12 = (unsigned __int64)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) {
LAB_824c4cf4:
        fn_8225C0A0(uVar12);
      }
      else {
        fn_8225C0A0(1);
        if (*(int *)(iVar6 + 0x10) == -1) {
          ppuStack_140 = &lbl_82198564;
          pppuStack_130 = &ppuStack_140;
          pppuStack_150 = &ppuStack_160;
          ppuStack_160 = &lbl_8219854C;
          iStack_15c = iVar6;
          iStack_13c = iVar6;
          uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
          *(unsigned int *)(iVar6 + 0x10) = uVar8;
        }
        if (1 < (int)uVar1) {
          lVar10 = uVar12 - 1;
          do {
            uVar12 = 0;
            lVar11 = 0;
            do {
              if ((uVar12 & 0xffffffff) != 0) goto LAB_824c4e38;
              uVar4 = fn_8225D9B8(iVar7,lVar11);
              if (uVar4 != 0) {
                for (puVar9 = *(unsigned int **)(iVar7 + 0x10); puVar9 != *(unsigned int **)(iVar7 + 0x14);
                    puVar9 = puVar9 + 1) {
                  if ((uVar4 & 0xffffffff) == (unsigned __int64)*puVar9) {
                    uVar8 = 1;
                    goto LAB_824c4db8;
                  }
                }
                uVar8 = 0;
LAB_824c4db8:
                lVar5 = fn_823AB470(uVar4);
                if ((-(unsigned int)(lVar5 == 2) & (unsigned int)LZCOUNT(uVar8) >> 5) != 0) {
                  uVar12 = uVar4;
                }
              }
              lVar11 = lVar11 + 1;
            } while ((int)lVar11 < 4);
            if ((uVar12 & 0xffffffff) == 0) {
              fn_82230110(auStack_80,0xffffffff82198540);
              auStack_170 = fn_8225D288(iVar7,auStack_80,0);
              fn_82230300(auStack_80,1,0);
              fn_8225C168(iVar6,&auStack_170);
              uVar12 = (unsigned __int64)auStack_170;
            }
LAB_824c4e38:
            fn_8225D930(iVar7,uVar12);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
    }
  }
  else if (uVar1 == 1) {
    uVar1 = *(unsigned int *)(param_2 + 0x14);
    uVar12 = (unsigned __int64)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_140 = &lbl_82198564;
        pppuStack_130 = &ppuStack_140;
        pppuStack_150 = &ppuStack_160;
        ppuStack_160 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
        *(unsigned int *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c4ca4;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(unsigned int **)(iVar7 + 0x10); puVar9 != *(unsigned int **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (unsigned __int64)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c4c24;
                }
              }
              uVar8 = 0;
LAB_824c4c24:
              lVar5 = fn_823AB470(uVar4);
              if ((-(unsigned int)(lVar5 == 2) & (unsigned int)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_c0,0xffffffff82198540);
            auStack_170 = fn_8225D288(iVar7,auStack_c0,0);
            fn_82230300(auStack_c0,1,0);
            fn_8225C168(iVar6,&auStack_170);
            uVar12 = (unsigned __int64)auStack_170;
          }
LAB_824c4ca4:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  else if (uVar1 < 3) {
    uVar1 = *(unsigned int *)(param_2 + 0x14);
    uVar12 = (unsigned __int64)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_140 = &lbl_82198564;
        pppuStack_130 = &ppuStack_140;
        pppuStack_150 = &ppuStack_160;
        ppuStack_160 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
        *(unsigned int *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c4b1c;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(unsigned int **)(iVar7 + 0x10); puVar9 != *(unsigned int **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (unsigned __int64)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c4a9c;
                }
              }
              uVar8 = 0;
LAB_824c4a9c:
              lVar5 = fn_823AB470(uVar4);
              if ((-(unsigned int)(lVar5 == 2) & (unsigned int)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_100,0xffffffff82198540);
            auStack_170 = fn_8225D288(iVar7,auStack_100,0);
            fn_82230300(auStack_100,1,0);
            fn_8225C168(iVar6,&auStack_170);
            uVar12 = (unsigned __int64)auStack_170;
          }
LAB_824c4b1c:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  else if (uVar1 == 3) {
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 1;
    uVar8 = *(unsigned int *)(param_2 + 0x10);
    uVar3 = fn_8225C590();
    fn_8225D1F8(uVar3,uVar8);
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 0;
    uVar1 = *(unsigned int *)(param_2 + 0x14);
    uVar12 = (unsigned __int64)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_140 = &lbl_82198564;
        pppuStack_130 = &ppuStack_140;
        pppuStack_150 = &ppuStack_160;
        ppuStack_160 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
        *(unsigned int *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c4994;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(unsigned int **)(iVar7 + 0x10); puVar9 != *(unsigned int **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (unsigned __int64)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c4914;
                }
              }
              uVar8 = 0;
LAB_824c4914:
              lVar5 = fn_823AB470(uVar4);
              if ((-(unsigned int)(lVar5 == 2) & (unsigned int)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_a0,0xffffffff82198540);
            auStack_170 = fn_8225D288(iVar7,auStack_a0,0);
            fn_82230300(auStack_a0,1,0);
            fn_8225C168(iVar6,&auStack_170);
            uVar12 = (unsigned __int64)auStack_170;
          }
LAB_824c4994:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  else if (uVar1 < 5) {
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 1;
    uVar8 = *(unsigned int *)(param_2 + 0x10);
    uVar3 = fn_8225C590();
    fn_8225D1F8(uVar3,uVar8);
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 0;
    uVar1 = *(unsigned int *)(param_2 + 0x14);
    uVar12 = (unsigned __int64)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_140 = &lbl_82198564;
        pppuStack_130 = &ppuStack_140;
        pppuStack_150 = &ppuStack_160;
        ppuStack_160 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
        *(unsigned int *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c47d8;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(unsigned int **)(iVar7 + 0x10); puVar9 != *(unsigned int **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (unsigned __int64)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c4758;
                }
              }
              uVar8 = 0;
LAB_824c4758:
              lVar5 = fn_823AB470(uVar4);
              if ((-(unsigned int)(lVar5 == 2) & (unsigned int)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_120,0xffffffff82198540);
            auStack_170 = fn_8225D288(iVar7,auStack_120,0);
            fn_82230300(auStack_120,1,0);
            fn_8225C168(iVar6,&auStack_170);
            uVar12 = (unsigned __int64)auStack_170;
          }
LAB_824c47d8:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  else {
    if (uVar1 != 5) {
      if (uVar1 < 7) {
        fn_8229E090(0,0,1);
        *(unsigned int *)(param_2 + 0x18) = 0;
        goto LAB_824c4e8c;
      }
      goto LAB_824c4e58;
    }
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 1;
    uVar8 = *(unsigned int *)(param_2 + 0x10);
    uVar3 = fn_8225C590();
    fn_8225D1F8(uVar3,uVar8);
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 0;
    uVar1 = *(unsigned int *)(param_2 + 0x14);
    uVar12 = (unsigned __int64)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_160 = &lbl_82198564;
        pppuStack_150 = &ppuStack_160;
        pppuStack_130 = &ppuStack_140;
        ppuStack_140 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_140,&ppuStack_160);
        *(unsigned int *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c461c;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(unsigned int **)(iVar7 + 0x10); puVar9 != *(unsigned int **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (unsigned __int64)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c459c;
                }
              }
              uVar8 = 0;
LAB_824c459c:
              lVar5 = fn_823AB470(uVar4);
              if ((-(unsigned int)(lVar5 == 2) & (unsigned int)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_e0,0xffffffff82198540);
            auStack_170 = fn_8225D288(iVar7,auStack_e0,0);
            fn_82230300(auStack_e0,1,0);
            fn_8225C168(iVar6,&auStack_170);
            uVar12 = (unsigned __int64)auStack_170;
          }
LAB_824c461c:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  iVar6 = fn_8225BD88();
  *(unsigned int *)(iVar6 + 0x14) = 1;
LAB_824c4e58:
  fn_824C4370(param_2);
  return;
}


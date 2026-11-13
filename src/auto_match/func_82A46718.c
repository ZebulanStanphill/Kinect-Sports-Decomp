#define true 1
extern unsigned int *auStack_84;
extern int fn_82A40BA8();
extern int fn_82A43318();
extern int fn_82A43A30();
extern int fn_82A484F8();
extern int fn_82A4F4E0();
extern int fn_82A57048();
extern int fn_82A578A8();
extern int fn_82C17460();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


__int64 fn_82A46718(int param_1,__int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  int *piVar11;
  unsigned __int64 uVar10;
  int aiStack_a0 [4];
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned char auStack_84 [132];
  
  lVar9 = 0;
  uVar8 = 0;
  lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1f8) + (unsigned __int64)*(unsigned int *)(param_1 + 0x1e0);
  do {
    if (*(int *)(param_1 + 0x1c4) == 0) {
      if (*(unsigned int **)(param_1 + 0x288) == (unsigned int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)**(unsigned int **)(param_1 + 0x288);
      }
      if (piVar11 != (int *)0x0) {
        iVar1 = 0;
        if (piVar11[3] != 0) {
          iVar5 = 0;
          do {
            if ((unsigned int)piVar11[3] < *(unsigned int *)(iVar5 + piVar11[7])) break;
            iVar1 = iVar1 + 1;
            iVar5 = iVar5 + 4;
          } while (piVar11[3] != 0);
        }
        iVar5 = *(int *)(param_1 + 0x1cc) * iVar1;
        *(int *)(param_1 + 0x1c4) = piVar11[2] + iVar5;
        *(int *)(param_1 + 0x1c8) = piVar11[1] - iVar5;
        uVar4 = (unsigned __int64)(unsigned int)piVar11[3];
        piVar11[3] = 0;
        if (iVar1 != 0) {
          uVar4 = uVar4 - *(unsigned int *)(piVar11[7] + iVar1 * 4 + -4);
        }
        iVar1 = fn_82A484F8(param_1 + 0x1fc,uVar4);
        if (iVar1 != 0) {
          iVar1 = piVar11[5];
          *(unsigned int *)(param_1 + 0x25c) = (unsigned int)(iVar1 != 0);
          uVar4 = (unsigned __int64)(unsigned int)piVar11[4];
          if (iVar1 != 0) {
            uVar4 = 0xffffffffffffffff;
          }
          iVar1 = fn_82A484F8(param_1 + 0x224,uVar4);
          if (iVar1 != 0) {
            lVar9 = 0;
            if ((*(int *)(param_1 + 0x25c) != 0) || (uVar2 = 0, *piVar11 == 0x40)) {
              uVar2 = 1;
            }
            *(unsigned int *)(param_1 + 0x1d0) = uVar2;
            *(unsigned int *)(param_1 + 0x264) = (unsigned int)LZCOUNT(*piVar11 + -0x40) >> 5;
            if (*(int *)(param_1 + 0x260) == 0) {
              fn_82A43318(param_1 + 0x8c,piVar11[6],*piVar11);
              *(unsigned int *)(param_1 + 0x260) = 1;
            }
            goto LAB_82a46890;
          }
        }
        lVar9 = -0x7ff8fff2;
LAB_82a46b9c:
        if ((uVar8 & 0xffffffff) == 0) {
          return lVar9;
        }
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0x40;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_84,0,0x1c);
      }
    }
LAB_82a46890:
    uVar6 = *(unsigned int *)(param_1 + 0x1d8);
    puVar3 = (unsigned int *)(param_1 + 0x1d8);
    if (uVar6 < 2) {
      if (*(int *)(param_1 + 0x1c4) == 0) {
        if ((*(int *)(param_1 + 0x290) == 0) && (param_2 = 0, *(int *)(param_1 + 0x264) != 0)) {
          if (*(int *)(param_1 + 0x2b8) != 0) {
            do {
              puVar3 = (unsigned int *)fn_82A40BA8(param_1 + 0x298);
              if (puVar3 != (unsigned int *)0x0) {
                fn_82A43A30(param_1 + 0x8c,puVar3[6],*puVar3);
                fn_82A4F4E0(puVar3);
              }
            } while (*(int *)(param_1 + 0x2b8) != 0);
          }
          *(unsigned int *)(param_1 + 0x254) = 0;
        }
      }
      else {
        fn_82C17460(*(unsigned int *)(param_1 + 0x1d4));
        *puVar3 = 2;
        uVar2 = fn_82A40BA8(param_1 + 0x1fc);
        *(unsigned int *)(param_1 + 0x250) = uVar2;
        uVar2 = fn_82A40BA8(param_1 + 0x224);
        *(unsigned int *)(param_1 + 0x254) = uVar2;
      }
    }
    else if (uVar6 == 2) {
      lVar9 = fn_82A57048(*(unsigned int *)(param_1 + 0x1d4),param_1 + 0x1dc,puVar3,0);
    }
    else if (uVar6 < 4) {
      aiStack_a0[0] = 0;
      lVar9 = fn_82A578A8(*(unsigned int *)(param_1 + 0x1d4),*(unsigned int *)(param_1 + 0x1dc),
                              aiStack_a0,lVar7,*(unsigned int *)(param_1 + 0x1dc),0,0,puVar3);
      if (lVar9 < 0) goto LAB_82a46b9c;
      uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x250);
      uVar10 = ((__int64)*(int *)(param_1 + 0x40) * (__int64)aiStack_a0[0] & 0x7fffffffU) * 2;
      if (uVar4 != 0) {
        if (uVar10 <= uVar4) {
          *(unsigned int *)(param_1 + 0x250) = *(unsigned int *)(param_1 + 0x250) - (int)uVar10;
          goto LAB_82a46b80;
        }
        fn_82F68CC0(lVar7,uVar4 + lVar7,uVar10 - uVar4);
        uVar6 = *(unsigned int *)(param_1 + 0x250);
        *(unsigned int *)(param_1 + 0x250) = 0;
        uVar10 = uVar10 - uVar6;
      }
      if ((uVar10 & 0xffffffff) != 0) {
        if ((uVar10 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x254)) {
          *(unsigned int *)(param_1 + 0x254) = *(unsigned int *)(param_1 + 0x254) - (int)uVar10;
          uVar4 = uVar10;
        }
        else {
          if (*(int *)(param_1 + 0x244) != 0) {
            do {
              uVar2 = fn_82A40BA8(param_1 + 0x1fc);
              *(unsigned int *)(param_1 + 0x250) = uVar2;
              iVar1 = fn_82A40BA8(param_1 + 0x224);
              uVar6 = iVar1 + *(int *)(param_1 + 0x254);
              *(unsigned int *)(param_1 + 0x254) = uVar6;
              if ((uVar10 & 0xffffffff) < (unsigned __int64)uVar6) break;
              *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
            } while (*(int *)(param_1 + 0x244) != 0);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x254);
          if ((uVar10 & 0xffffffff) < uVar4) {
            *(unsigned int *)(param_1 + 0x254) = *(unsigned int *)(param_1 + 0x254) - (int)uVar10;
            uVar4 = uVar10;
          }
          else {
            *(unsigned int *)(param_1 + 0x254) = 0;
          }
          *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
        }
        if ((uVar4 & 0xffffffff) != 0) {
          lVar7 = uVar4 + lVar7;
          uVar8 = uVar4 + uVar8;
          param_2 = param_2 - uVar4;
          if (((__int64)*(int *)(param_1 + 600) * (__int64)*(int *)(param_1 + 0x1e4) & 0xffffffffU
              ) <= (lVar7 - (unsigned __int64)*(unsigned int *)(param_1 + 0x1e0) & 0xffffffff)) {
            uStack_90 = 0;
            uStack_8c = 0;
            uStack_88 = 0x40;
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(auStack_84,0,0x1c);
          }
        }
      }
    }
LAB_82a46b80:
    if (((int)lVar9 < 0) || ((int)param_2 < 1)) goto LAB_82a46b9c;
  } while( true );
}


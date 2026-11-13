extern unsigned int *auStack_280;
extern unsigned int *auStack_28e;
extern int fn_82807F68();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_290;


void fn_82808220(int param_1,int param_2,int param_3)

{
  unsigned char *pbVar1;
  int (**pcVar2)();
  unsigned char bVar3;
  unsigned short uVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  int iVar13;
  double dVar14;
  unsigned short uStack_290;
  unsigned short auStack_28e;
  unsigned char auStack_280 [512];
  
  uVar9 = 0;
  if (*(short *)(param_3 + 0x48) != 0) {
    iVar8 = 0;
    dVar14 = (double)lbl_821AAD20;
    do {
      auStack_28e = 0;
      uStack_290 = 0;
      if ((*(int *)(param_3 + 0x58) == 0) ||
         (*(unsigned short *)(iVar8 + *(int *)(param_3 + 0x58)) == uVar9)) {
        iVar8 = iVar8 + 2;
        if ((*(int *)(param_3 + 0x50) == 0) ||
           (lVar12 = 1, *(char *)(*(int *)(param_3 + 0x50) + uVar9) != '\0')) {
          lVar12 = 0;
        }
        if ((*(unsigned short *)(param_3 + 0x4a) == 0xffff) ||
           (uVar11 = 0, (int)uVar9 < (int)(unsigned int)*(unsigned short *)(param_3 + 0x4a))) {
          uVar11 = 1;
        }
        if (*(short *)(param_1 + 0x1e) != 0) {
          iVar10 = 0xc;
          iVar13 = 3;
          do {
            fn_82807F68(param_1,param_3,param_2,auStack_280,&uStack_290,&auStack_28e,uVar11,lVar12)
            ;
            pbVar1 = *(unsigned char **)(param_3 + 0x24);
            bVar3 = *pbVar1 & 3;
            if ((*pbVar1 & 3) == 0) {
              if ((lVar12 == 0) && (iVar13 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e))) {
                iVar6 = iVar13;
                iVar5 = iVar10;
                do {
                  uVar4 = auStack_28e;
                  if (iVar13 + 6 <= iVar6) break;
                  *(unsigned int *)((unsigned int)uStack_290 * 4 + param_2) =
                       *(unsigned int *)(*(int *)(param_1 + 8) + iVar5);
                  if ((*(int *)(param_3 + 0x3c) == 0) ||
                     (pcVar2 = *(int (***)())((unsigned int)auStack_28e * 4 + *(int *)(param_3 + 0x3c)),
                     pcVar2 == (int (**)())0x0)) {
                    uStack_290 = uStack_290 + 1;
                  }
                  else {
                    (*pcVar2)(dVar14,0,0);
                  }
                  iVar6 = iVar6 + 1;
                  auStack_28e = uVar4 + 1;
                  iVar5 = iVar5 + 4;
                } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e));
              }
            }
            else if (bVar3 == 1) {
              if ((lVar12 == 0) && (iVar13 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e))) {
                iVar6 = iVar13;
                iVar5 = iVar10;
                do {
                  uVar4 = auStack_28e;
                  if (iVar13 + 3 <= iVar6) break;
                  *(unsigned int *)((unsigned int)uStack_290 * 4 + param_2) =
                       *(unsigned int *)(*(int *)(param_1 + 8) + iVar5);
                  if ((*(int *)(param_3 + 0x3c) == 0) ||
                     (pcVar2 = *(int (***)())((unsigned int)auStack_28e * 4 + *(int *)(param_3 + 0x3c)),
                     pcVar2 == (int (**)())0x0)) {
                    uStack_290 = uStack_290 + 1;
                  }
                  else {
                    (*pcVar2)(dVar14,0,0);
                  }
                  iVar6 = iVar6 + 1;
                  auStack_28e = uVar4 + 1;
                  iVar5 = iVar5 + 4;
                } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e));
              }
LAB_82808350:
              *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + 1;
              fn_82807F68(param_1,param_3,param_2,auStack_280,&uStack_290,&auStack_28e,uVar11,
                            lVar12);
            }
            else if (bVar3 < 3) {
              *(unsigned char **)(param_3 + 0x24) = pbVar1 + 1;
              fn_82807F68(param_1,param_3,param_2,auStack_280,&uStack_290,&auStack_28e,uVar11,
                            lVar12);
              if ((lVar12 == 0) &&
                 (iVar6 = iVar13 + 3, iVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e))) {
                iVar5 = iVar10 + 0xc;
                do {
                  if (iVar13 + 6 <= iVar6) break;
                  iVar6 = iVar6 + 1;
                  auStack_28e = auStack_28e + 1;
                  *(unsigned int *)((unsigned int)uStack_290 * 4 + param_2) =
                       *(unsigned int *)(*(int *)(param_1 + 8) + iVar5);
                  uStack_290 = uStack_290 + 1;
                  iVar5 = iVar5 + 4;
                } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e));
              }
            }
            else if (bVar3 == 3) {
              *(unsigned char **)(param_3 + 0x24) = pbVar1 + 1;
              fn_82807F68(param_1,param_3,param_2,auStack_280,&uStack_290,&auStack_28e,uVar11,
                            lVar12);
              goto LAB_82808350;
            }
            iVar10 = iVar10 + 0x24;
            iVar6 = iVar13 + 6;
            *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + 1;
            iVar13 = iVar13 + 9;
          } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e));
        }
        if (lVar12 == 0) {
          uVar7 = *(unsigned int *)(param_3 + 0x60);
          if (uVar7 == 0) {
            uVar7 = (unsigned int)uStack_290;
            goto LAB_82808618;
          }
        }
        else {
          iVar13 = 0;
          if (0 < *(int *)(param_3 + 0x5c)) {
            iVar10 = 0;
            do {
              iVar13 = iVar13 + 1;
              *(unsigned int *)(iVar10 + param_2) = *(unsigned int *)(iVar10 + *(int *)(param_3 + 0x54))
              ;
              iVar10 = iVar10 + 4;
            } while (iVar13 < *(int *)(param_3 + 0x5c));
          }
          uVar7 = *(unsigned int *)(param_3 + 0x60);
          if (uVar7 == 0) {
            uVar7 = *(unsigned int *)(param_3 + 0x5c);
          }
        }
        uVar7 = uVar7 & 0x3fffffff;
      }
      else {
        uVar7 = *(unsigned int *)(param_3 + 0x60);
      }
LAB_82808618:
      param_2 = uVar7 * 4 + param_2;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)(unsigned int)*(unsigned short *)(param_3 + 0x48));
  }
  return;
}


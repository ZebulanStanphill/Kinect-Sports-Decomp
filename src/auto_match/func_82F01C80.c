extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();
extern unsigned int lbl_821610DC;
extern unsigned int lbl_821610E0;
extern unsigned int lbl_821610E4;
extern unsigned int lbl_821610E8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F01C80(unsigned __int64 param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned char *pbVar1;
  unsigned char *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned char *puVar8;
  int iVar9;
  unsigned __int64 uVar7;
  int iVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned char *puVar13;
  
  puVar2 = (unsigned char *)fn_8265C940(param_3,0x248c8000);
  if (puVar2 != (unsigned char *)0x0) {
    if (0 < (int)param_4) {
      iVar12 = param_3 + -3;
      puVar13 = (unsigned char *)(param_2 + 1);
      do {
        *puVar2 = puVar13[-1];
        puVar2[1] = *puVar13;
        puVar2[2] = puVar13[1];
        if (iVar12 < param_3) {
          iVar4 = param_3 - iVar12;
          puVar8 = puVar2 + iVar12;
          do {
            *puVar8 = (puVar13 + (-1 - (int)puVar2))[(int)puVar8];
            puVar8 = puVar8 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = 3;
        if (3 < iVar12) {
          iVar9 = param_3 + -6;
          puVar8 = puVar13 + -4;
          do {
            pbVar1 = puVar2 + iVar4;
            uVar6 = 0x800;
            uVar3 = (unsigned __int64)(unsigned char)(puVar13 + (-1 - (int)puVar2))[(int)pbVar1];
            uVar5 = uVar3 - (unsigned char)puVar8[iVar4];
            uVar11 = (unsigned __int64)((int)uVar5 >> 0x1f);
            uVar7 = uVar3 * 0x800;
            uVar11 = (uVar5 ^ uVar11) - uVar11;
            if ((int)uVar11 < 0x14) {
              uVar7 = (__int64)
                      (int)((__int64)lbl_821610E4 *
                           (__int64)*(int *)(&lbl_821610E8 + (int)((uVar11 & 0xffffffff) << 2))) *
                      (__int64)(int)(unsigned int)(unsigned char)puVar8[iVar4] + uVar7;
              uVar6 = (__int64)lbl_821610E4 *
                      (__int64)*(int *)(&lbl_821610E8 + (int)((uVar11 & 0xffffffff) << 2)) + 0x800;
            }
            uVar5 = uVar3 - (unsigned char)puVar8[iVar4 + 1];
            uVar11 = (unsigned __int64)((int)uVar5 >> 0x1f);
            uVar11 = (uVar5 ^ uVar11) - uVar11;
            if ((int)uVar11 < 0x14) {
              uVar7 = (__int64)
                      (int)((__int64)lbl_821610E0 *
                           (__int64)*(int *)(&lbl_821610E8 + (int)((uVar11 & 0xffffffff) << 2))) *
                      (__int64)(int)(unsigned int)(unsigned char)puVar8[iVar4 + 1] + uVar7;
              uVar6 = (__int64)lbl_821610E0 *
                      (__int64)*(int *)(&lbl_821610E8 + (int)((uVar11 & 0xffffffff) << 2)) + uVar6;
            }
            uVar5 = uVar3 - (unsigned char)puVar8[iVar4 + 2];
            uVar11 = (unsigned __int64)((int)uVar5 >> 0x1f);
            uVar11 = (uVar5 ^ uVar11) - uVar11;
            if ((int)uVar11 < 0x14) {
              uVar7 = (__int64)
                      (int)((__int64)lbl_821610DC *
                           (__int64)*(int *)(&lbl_821610E8 + (int)((uVar11 & 0xffffffff) << 2))) *
                      (__int64)(int)(unsigned int)(unsigned char)puVar8[iVar4 + 2] + uVar7;
              uVar6 = (__int64)lbl_821610DC *
                      (__int64)*(int *)(&lbl_821610E8 + (int)((uVar11 & 0xffffffff) << 2)) + uVar6;
            }
            uVar5 = uVar3 - (unsigned char)puVar8[iVar4 + 4];
            uVar11 = (unsigned __int64)((int)uVar5 >> 0x1f);
            uVar11 = (uVar5 ^ uVar11) - uVar11;
            if ((int)uVar11 < 0x14) {
              uVar7 = (__int64)
                      (int)((__int64)lbl_821610DC *
                           (__int64)*(int *)(&lbl_821610E8 + (int)((uVar11 & 0xffffffff) << 2))) *
                      (__int64)(int)(unsigned int)(unsigned char)puVar8[iVar4 + 4] + uVar7;
              uVar6 = (__int64)lbl_821610DC *
                      (__int64)*(int *)(&lbl_821610E8 + (int)((uVar11 & 0xffffffff) << 2)) + uVar6;
            }
            uVar3 = uVar3 - (unsigned char)(puVar13 + 1)[iVar4];
            uVar5 = (unsigned __int64)((int)uVar3 >> 0x1f);
            uVar5 = (uVar3 ^ uVar5) - uVar5;
            if ((int)uVar5 < 0x14) {
              uVar7 = (__int64)
                      (int)((__int64)lbl_821610E0 *
                           (__int64)*(int *)(&lbl_821610E8 + (int)((uVar5 & 0xffffffff) << 2))) *
                      (__int64)(int)(unsigned int)(unsigned char)(puVar13 + 1)[iVar4] + uVar7;
              uVar6 = (__int64)lbl_821610E0 *
                      (__int64)*(int *)(&lbl_821610E8 + (int)((uVar5 & 0xffffffff) << 2)) + uVar6;
            }
            if ((int)uVar6 < 1) {
              *pbVar1 = (puVar13 + (-1 - (int)puVar2))[(int)pbVar1];
            }
            else {
              iVar10 = (int)uVar7 / (int)uVar6;
              trapWord(6,uVar6,0);
              trapWord(5,uVar6 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),
                       0xffff);
              if (iVar10 < 0) {
                *pbVar1 = 0;
              }
              else {
                if (0xff < iVar10) {
                  iVar10 = 0xff;
                }
                *pbVar1 = (unsigned char)iVar10;
              }
            }
            iVar4 = iVar4 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        fn_82F68CC0(puVar13 + -1,puVar2,param_3);
        param_4 = param_4 + -1;
        puVar13 = puVar13 + param_3;
      } while (param_4 != 0);
    }
    fn_8265C990(puVar2,0x248c8000);
  }
  return;
}


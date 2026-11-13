typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FA6C50();
extern int fn_82FAE0B0();
extern int fn_82FAE140();
extern int fn_82FB1410();
extern int fn_82FB34A0();
extern int iRam00000188;
extern unsigned int uStack_a0;


void fn_82FAC850(int param_1,__int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar3;
  bool bVar7;
  __int64 lVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned int uStack_a0;
  int aiStack_98 [10];
  
  uVar4 = (**(int (***)())(**(int **)(param_1 + 0x60) + 0x158))();
  if ((uVar4 & 0xffff) != 0) {
    uVar11 = (unsigned __int64)uStack_a0;
    uVar10 = 0;
    do {
      iVar5 = fn_82FAE0B0(*(unsigned int *)(param_1 + 0x60),uVar10);
      puVar13 = *(unsigned int **)(iVar5 + 0x98);
      if (puVar13 != *(unsigned int **)(iVar5 + 0x9c)) {
        do {
          if (*puVar13 == (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x6c) + uVar10 * 2)) {
            iVar9 = 0;
            iVar6 = fn_82FB1410(iVar5,puVar13[1]);
            if (iVar6 != 0) {
              iVar12 = (int)param_2;
              if (((*(unsigned int *)(iVar6 + 0x14) & 0x3e000000) == 0x2000000) &&
                 (((*(unsigned int *)(iVar6 + 0x14) >> 0x1e & 1) == 0 ||
                  (((int)puVar13[2] < iVar12 && (puVar13[5] == 0)))))) {
                iVar9 = *(int *)(iVar6 + 0x28);
              }
              if (*(short *)(iVar6 + 0x1c) == 3) {
                iVar9 = iVar9 + 0x180;
              }
              bVar7 = false;
              uVar1 = puVar13[2];
              iVar9 = uVar1 - iVar9;
              if ((*(unsigned short *)(param_1 + 0x78) & 0x8000) == 0) {
                if ((iVar12 <= iVar9) && (iVar9 < iVar12 + param_4)) {
                  uVar11 = (unsigned __int64)puVar13[5];
                  bVar7 = true;
                }
              }
              else {
                lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x68) + param_2;
                if ((iVar9 < iVar12 + param_4) && ((int)lVar8 < (int)(puVar13[3] + uVar1))) {
                  lVar8 = lVar8 - (unsigned __int64)uVar1;
                  bVar7 = true;
                  if (lVar8 < 0) {
                    lVar8 = 0;
                  }
                  uVar1 = puVar13[4];
                  trapWord(6,(unsigned __int64)uVar1,0);
                  uVar11 = ((unsigned __int64)puVar13[5] + lVar8) -
                           (__int64)
                           (int)(((unsigned __int64)puVar13[5] + lVar8 & 0xffffffff) / (unsigned __int64)uVar1) *
                           (__int64)(int)uVar1;
                }
              }
              if (bVar7) {
                aiStack_98[2] = 0;
                iVar9 = *(int *)(*(int *)(param_1 + 0xc) + 0x38);
                uVar2 = *(unsigned int *)(iVar9 + 0x28);
                uVar3 = fn_82FB1410(iVar5,puVar13[1]);
                iVar9 = fn_82FA6C50(param_1,iVar5,uVar3,uVar2,aiStack_98 + 2,iVar9 + 0x10,puVar13,
                                      uVar11);
                if (iVar9 == 1) {
                  aiStack_98[1] = 0;
                  aiStack_98[0] = fn_82FAE140(*(unsigned int *)(param_1 + 0x60));
                  aiStack_98[0] = (puVar13[3] + puVar13[2]) - aiStack_98[0];
                  iVar9 = fn_82FB34A0(param_1 + 0x38,aiStack_98);
                  if (iVar9 == 0) {
                    (**(int (***)())(iRam00000188 + 4))(0x188,0);
                  }
                }
              }
            }
          }
          puVar13 = puVar13 + 6;
        } while (puVar13 != *(unsigned int **)(iVar5 + 0x9c));
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < (uVar4 & 0xffff));
  }
  return;
}


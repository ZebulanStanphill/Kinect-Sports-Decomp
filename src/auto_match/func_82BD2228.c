typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BC0088();
extern int fn_82BC7368();
extern int fn_82BD1FF0();


void fn_82BD2228(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  int iVar15;
  unsigned int uVar16;
  
  uVar1 = *(unsigned int *)(param_5 + 0x5b0);
  puVar6 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar12 = puVar6 + 1;
  *puVar6 = uVar1;
  if (puVar12 == (unsigned int *)0x0) {
    puVar12 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar12,*(unsigned int *)(param_5 + 0x5b0));
  }
  param_1[2] = 0;
  uVar1 = *(unsigned int *)(param_5 + 0x5b0);
  puVar6 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar8 = puVar6 + 1;
  *puVar6 = uVar1;
  if (puVar8 == (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar8,*(unsigned int *)(param_5 + 0x5b0));
  }
  bVar4 = false;
  puVar5 = (unsigned int *)param_1[5];
  puVar13 = (unsigned int *)0x0;
  do {
    while (puVar10 = puVar5, puVar11 = param_1, puVar14 = puVar13, bVar4) {
LAB_82bd2358:
      bVar4 = false;
      param_1 = puVar11;
      puVar5 = (unsigned int *)puVar10[4];
      puVar13 = puVar14;
      if ((unsigned int *)puVar10[4] == (unsigned int *)0x0) {
        if (puVar11[7] == 0) {
          if (puVar10[5] != 0) {
            puVar10 = (unsigned int *)puVar10[7];
          }
          puVar11[7] = (unsigned int)puVar10;
        }
        if (puVar8[1] == 0) {
          uVar16 = 0;
          if (puVar12[1] != 0) {
            iVar15 = 0;
            if (puVar12[1] == 0) {
              piVar7 = (int *)fn_82BC0088(puVar12,0);
              goto LAB_82bd240c;
            }
            do {
              piVar7 = (int *)(puVar12[2] + iVar15);
LAB_82bd240c:
              iVar2 = *piVar7;
              if (1 < *(int *)(iVar2 + 8)) {
                uVar1 = *(unsigned int *)(param_5 + 0x5b0);
                puVar6 = (unsigned int *)fn_82B7BD28(uVar1,0xc);
                *puVar6 = uVar1;
                if (puVar6 + 1 == (unsigned int *)0x0) {
                  puVar6 = (unsigned int *)0x0;
                }
                else {
                  puVar6 = (unsigned int *)fn_82BD1FF0(puVar6 + 1,param_5);
                }
                puVar8 = (unsigned int *)
                         fn_82BC0088(*(int *)(param_2 + 0x60),
                                           *(unsigned int *)(*(int *)(param_2 + 0x60) + 4));
                *puVar8 = puVar6;
                *puVar6 = *(unsigned int *)(iVar2 + 8);
                iVar3 = *(int *)(iVar2 + 0x18);
                while( true ) {
                  if (iVar3 != 0) {
                    puVar8 = (unsigned int *)
                             fn_82BC0088(puVar6[1],*(unsigned int *)(puVar6[1] + 4));
                    *puVar8 = *(unsigned int *)(iVar3 + 0xc);
                  }
                  if (iVar3 == *(int *)(iVar2 + 0x1c)) break;
                  iVar3 = *(int *)(iVar3 + 0x20);
                }
              }
              uVar16 = uVar16 + 1;
              iVar15 = iVar15 + 4;
            } while (uVar16 < (unsigned int)puVar12[1]);
          }
          return;
        }
        param_1 = (unsigned int *)fn_82BC7368(puVar8);
        bVar4 = true;
        puVar5 = puVar11;
        if (param_1[6] == 0) {
          if (puVar11[5] != 0) {
            puVar11 = (unsigned int *)puVar11[6];
          }
          param_1[6] = (unsigned int)puVar11;
        }
      }
    }
    if (puVar10[5] == 0) {
      puVar10[3] = *puVar10 - puVar11[2];
      if (puVar11[6] == 0) {
        puVar11[6] = (unsigned int)puVar10;
      }
      puVar14 = puVar10;
      if (puVar13 != (unsigned int *)0x0) {
        puVar13[8] = (unsigned int)puVar10;
      }
      goto LAB_82bd2358;
    }
    lVar9 = ((unsigned __int64)puVar10[1] - (unsigned __int64)*puVar10) + 1;
    puVar10[2] = (unsigned int)lVar9;
    if (lVar9 < 0) {
      puVar10[2] = 0;
    }
    puVar10[2] = puVar11[2] + puVar10[2];
    puVar6 = (unsigned int *)fn_82BC0088(puVar12,puVar12[1]);
    *puVar6 = puVar10;
    puVar6 = (unsigned int *)fn_82BC0088(puVar8,puVar8[1]);
    *puVar6 = puVar11;
    param_1 = puVar10;
    puVar5 = (unsigned int *)puVar10[5];
  } while( true );
}


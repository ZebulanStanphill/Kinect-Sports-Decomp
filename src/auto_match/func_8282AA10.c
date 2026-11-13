typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_58;
extern int fn_82381BC0();
extern int fn_828223C8();
extern int fn_82826498();
extern int fn_8282A638();
extern int fn_8282D818();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_8282AA10(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_60;
  int iStack_5c;
  unsigned char auStack_58 [88];
  
  lVar4 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_8282A638();
    *(unsigned int *)(param_1 + 0x48) = 0;
    iVar8 = param_1 + 0x2fc;
    while( true ) {
      fn_828223C8(iVar8,&iStack_5c);
      if (iStack_5c == 0) break;
      puVar5 = (unsigned int *)(iStack_5c + 0x48);
      iVar7 = ((*(int **)(iStack_5c + 0x48))[1] - **(int **)(iStack_5c + 0x48)) / 0x14;
      lVar6 = (__int64)iVar7;
      iVar8 = iStack_5c;
      if ((iVar7 != 0) && (*(char *)(iStack_5c + 0x54) != '\0')) {
        piVar10 = (int *)(iStack_5c + 0x4c);
        if (*(int *)(*(int *)(iStack_5c + 0x4c) + 8) != 0) {
          iVar8 = **(int **)(*(int *)(iStack_5c + 0x4c) + 4);
          iVar1 = *(int *)(iVar8 + 0x10);
          *(unsigned int *)(iVar8 + 0x10) = 0;
          iStack_60 = iVar8;
          fn_82381BC0(&iStack_60);
          iVar11 = *(int *)(*piVar10 + 4);
          while( true ) {
            iVar2 = iStack_60;
            if (iStack_60 == iVar11) break;
            iVar8 = *(int *)(iVar8 + 0x10) + iVar1;
            iVar1 = *(int *)(iStack_60 + 0x10);
            *(int *)(iStack_60 + 0x10) = iVar8;
            fn_82381BC0(&iStack_60);
            iVar8 = iVar2;
          }
        }
        if (iVar7 != 0) {
          iVar8 = 0;
          do {
            iVar11 = *(int *)*puVar5 + iVar8;
            iVar7 = *(int *)(iVar11 + 4) * 0x20 + **(int **)(param_1 + 0x388);
            if ((*(unsigned int *)(iVar7 + 8) & 4) == 0) {
              if ((*(unsigned int *)(iVar7 + 8) & 0x10) == 0) {
                bVar12 = false;
              }
              else {
                bVar12 = *(int *)(iVar7 + 0x18) != 0;
              }
            }
            else {
              bVar12 = true;
            }
            if (bVar12) {
              uVar9 = 0;
              if (*(int *)(iVar11 + 0xc) != 0) {
                do {
                  fn_82826498(param_1,iVar7,
                                (__int64)*(int *)(iVar7 + 0x10) * (__int64)(int)uVar9 +
                                (unsigned __int64)*(unsigned int *)(iVar11 + 8),0xffffffff8282a898,iVar11);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(unsigned int *)(iVar11 + 0xc));
              }
            }
            lVar6 = lVar6 + -1;
            iVar8 = iVar8 + 0x14;
          } while (lVar6 != 0);
        }
        uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x48) - lVar4;
        lVar4 = uVar3 + lVar4;
        fn_8282D818(param_1,auStack_58,(uVar3 & 0x3fffffff) << 2,1);
        iVar8 = iStack_5c;
      }
    }
  }
  return;
}


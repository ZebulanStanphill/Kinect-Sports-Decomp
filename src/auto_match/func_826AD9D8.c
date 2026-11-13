typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_82689C60();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_826ABE30();


void fn_826AD9D8(int param_1,unsigned int *param_2,int param_3,unsigned int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  bool bVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  
  iVar12 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar12 + 0xc) == 0) || (bVar5 = false, **(char **)(iVar12 + 8) == '\0')) {
    bVar5 = true;
  }
  iVar11 = 0;
  if (!bVar5) {
    iVar11 = *(int *)(iVar12 + 8);
  }
  if (*(int *)(param_1 + 0x1c) != param_3) {
    if (*(int *)(param_1 + 0x1c) == -1) {
      *(int *)(param_1 + 0x1c) = param_3;
      piVar9 = (int *)(param_1 + 0xc);
      uVar13 = param_3 + 2;
      uVar8 = (unsigned int)CONCAT11(*(unsigned char *)(iVar11 + param_3 + 4),
                             *(unsigned char *)(iVar11 + param_3 + 3));
      fn_82689C60(piVar9,uVar8);
      uVar7 = 0;
      if (uVar8 != 0) {
        iVar12 = 0;
        do {
          pcVar10 = (char *)(iVar11 + 3 + uVar13);
          iVar3 = fn_82694700((unsigned __int64)*param_2 + 0x254,pcVar10);
          iVar1 = *(int *)(iVar3 + 8);
          *(int *)(iVar3 + 8) = iVar1 + 1;
          iVar2 = *piVar9;
          *(int *)(iVar3 + 8) = iVar1 + 2;
          iVar1 = *(int *)(iVar12 + iVar2);
          lVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 8) - 1;
          *(int *)(iVar1 + 8) = (int)lVar6;
          if (lVar6 == 0) {
            fn_826944C8();
          }
          *(int *)(iVar12 + iVar2) = iVar3;
          lVar6 = (unsigned __int64)*(unsigned int *)(iVar3 + 8) - 1;
          *(int *)(iVar3 + 8) = (int)lVar6;
          if (lVar6 == 0) {
            fn_826944C8(iVar3);
          }
          cVar4 = *pcVar10;
          while (cVar4 != '\0') {
            if (param_4 <= uVar13) {
              cVar4 = (**(int (***)())(*param_5 + 4))(param_5);
              if (cVar4 != '\0') {
                fn_826ABE30(param_5,0xffffffff820074f8);
              }
              if (uVar8 <= uVar7) {
                return;
              }
              iVar11 = uVar7 << 2;
              iVar12 = uVar8 - uVar7;
              do {
                iVar3 = fn_82694700((unsigned __int64)*param_2 + 0x254,0xffffffff820074ec);
                iVar1 = *(int *)(iVar3 + 8);
                *(int *)(iVar3 + 8) = iVar1 + 1;
                iVar2 = *piVar9;
                *(int *)(iVar3 + 8) = iVar1 + 2;
                iVar1 = *(int *)(iVar11 + iVar2);
                lVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 8) - 1;
                *(int *)(iVar1 + 8) = (int)lVar6;
                if (lVar6 == 0) {
                  fn_826944C8();
                }
                *(int *)(iVar11 + iVar2) = iVar3;
                lVar6 = (unsigned __int64)*(unsigned int *)(iVar3 + 8) - 1;
                *(int *)(iVar3 + 8) = (int)lVar6;
                if (lVar6 == 0) {
                  fn_826944C8(iVar3);
                }
                iVar12 = iVar12 + -1;
                iVar11 = iVar11 + 4;
              } while (iVar12 != 0);
              return;
            }
            uVar13 = uVar13 + 1;
            cVar4 = *(char *)(iVar11 + 3 + uVar13);
          }
          uVar7 = uVar7 + 1;
          uVar13 = uVar13 + 1;
          iVar12 = iVar12 + 4;
        } while (uVar7 < uVar8);
      }
    }
    else {
      cVar4 = (**(int (***)())(*param_5 + 4))(param_5);
      if (cVar4 != '\0') {
        fn_826ABE30(param_5,0xffffffff82007528,param_3,param_4,*(unsigned int *)(param_1 + 0x1c));
      }
    }
  }
  return;
}


typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD2020();
extern int fn_82AD6090();
extern int fn_82B8D5B0();
extern int fn_82B8E0B8();


void fn_82B8BD80(unsigned __int64 param_1,int param_2,int param_3,unsigned int *param_4)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 0x1c);
  iVar1 = *(int *)(iVar8 + 0x40);
  do {
    if (iVar1 == 0) {
      return;
    }
    if (param_3 != 0) {
      if ((iVar1 == param_3) ||
         (uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x30) & 0x7ffff, bVar4 = true,
         (*(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(param_3 + 0x28)) &
         1 << ((unsigned int)uVar3 & 0x1f)) == 0)) {
        bVar4 = false;
      }
      if (bVar4) {
        return;
      }
    }
    if ((*(unsigned int *)(iVar8 + 0x4c) >> 0x16 & 1) != 0) {
      iVar7 = *(int *)(iVar8 + 0x70);
      if ((*(unsigned int *)(iVar7 + 0x30) >> 0x16 & 1) != 0) {
LAB_82b8be24:
        do {
          iVar7 = *(int *)(iVar7 + 0x50);
          if (iVar7 != 0) {
            if ((*(unsigned int *)(iVar7 + 0x30) & 0x400000) != 0) goto LAB_82b8be24;
          }
        } while ((*(unsigned int *)(iVar7 + 0x30) >> 0x16 & 1) != 0);
        *(int *)(iVar8 + 0x70) = iVar7;
      }
      iVar7 = *(int *)(iVar8 + 0x70);
      iVar6 = fn_82AD2020(param_1,iVar7);
      if ((iVar6 == 0) || ((*(unsigned int *)(iVar6 + 8) >> 0x11 & 1) == 0)) {
        piVar2 = *(int **)(iVar7 + 0x60);
        if ((piVar2 != (int *)0x0) && (((unsigned int)piVar2[2] >> 0x1a & 1) == 0)) {
          piVar2[2] = piVar2[2] | 0x4000000;
          if (param_4 == (unsigned int *)0x0) {
            for (iVar7 = *piVar2; iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
              fn_82B8D5B0(param_1,iVar7,0);
            }
          }
          else {
            if ((param_4[1] & 1) == 0) {
              uVar5 = *param_4 & 0xfffffffe;
              iVar7 = uVar5 - 4;
              if ((iVar7 == 0) || (*(unsigned int *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U))
              goto LAB_82b8bef0;
            }
            else {
LAB_82b8bef0:
              iVar7 = fn_82AD6090(param_4,1);
            }
            iVar6 = *(int *)(iVar7 + 8);
            *(int *)(iVar7 + 8) = iVar6 + 1;
            *(int **)((iVar6 + 4) * 4 + iVar7) = piVar2;
          }
        }
      }
      else if ((*(unsigned int *)(iVar6 + 8) >> 0x1a & 1) == 0) {
        fn_82B8E0B8(param_1,iVar6,param_4);
      }
    }
    if ((*(unsigned char *)(iVar8 + 0x4c) & 1) != 0) {
      iVar7 = *(int *)(iVar8 + 0x6c);
      if ((*(unsigned int *)(iVar7 + 0x30) >> 0x16 & 1) != 0) {
LAB_82b8bf48:
        do {
          iVar7 = *(int *)(iVar7 + 0x50);
          if (iVar7 != 0) {
            if ((*(unsigned int *)(iVar7 + 0x30) & 0x400000) != 0) goto LAB_82b8bf48;
          }
        } while ((*(unsigned int *)(iVar7 + 0x30) >> 0x16 & 1) != 0);
        *(int *)(iVar8 + 0x6c) = iVar7;
      }
      iVar7 = fn_82AD2020(param_1,*(unsigned int *)(iVar8 + 0x6c));
      if ((*(unsigned int *)(iVar7 + 8) >> 0x1a & 1) == 0) {
        fn_82B8E0B8(param_1,iVar7,param_4);
      }
    }
    if ((*(int *)(iVar1 + 0xc) == 0) || (bVar4 = true, *(int *)(*(int *)(iVar1 + 0xc) + 8) == 0)) {
      bVar4 = false;
    }
    if (bVar4) {
      iVar7 = fn_82AD2020(param_1,iVar1);
      uVar5 = *(unsigned int *)(iVar7 + 8) >> 7 & 0x7f;
      if ((uVar5 == 0x56) || (bVar4 = false, uVar5 == 0x57)) {
        bVar4 = true;
      }
      if ((!bVar4) && ((*(unsigned int *)(iVar7 + 8) >> 0x1a & 1) == 0)) {
        fn_82B8E0B8(param_1,iVar7,param_4);
      }
    }
    iVar8 = *(int *)(iVar8 + 0x34);
    if (iVar8 == 0) {
      return;
    }
    uVar3 = (unsigned __int64)*(unsigned int *)(iVar8 + 0x30) & 0x7ffff;
    if ((*(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(iVar1 + 0x28)) & 1 << ((unsigned int)uVar3 & 0x1f)
        ) != 0) {
      iVar8 = iVar1;
    }
    iVar1 = *(int *)(iVar8 + 0x40);
  } while( true );
}


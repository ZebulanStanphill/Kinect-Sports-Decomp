typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8227F500();
extern int fn_82533578();


__int64 fn_8227F020(int param_1,int param_2,unsigned int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  __int64 lVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  int *piVar9;
  
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    piVar9 = *(int **)(param_1 + 0xc);
    piVar1 = *(int **)(param_1 + 0x10);
    *param_3 = 0xffffffff;
    uVar8 = 0;
    for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
      iVar2 = *piVar9;
      uVar7 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x70);
      if (uVar7 == 0) {
        bVar4 = false;
      }
      else {
        lVar5 = uVar7 + 0x10;
        iVar6 = fn_82533578(uVar7,uVar7 + 8,lVar5,param_2 + 0x24);
        if (iVar6 == 0) {
          iVar6 = fn_82533578(uVar7,lVar5,uVar7 + 0x18);
          bVar4 = false;
          if (iVar6 == 0) goto LAB_8227f0c4;
        }
        bVar4 = true;
      }
LAB_8227f0c4:
      if (bVar4) {
        if ((*(char *)(param_2 + 0x40) == '\0') || (bVar4 = true, *(char *)(param_2 + 0x42) == '\0')
           ) {
          bVar4 = false;
        }
        if (((!bVar4) || ((~(unsigned __int64)*(unsigned int *)(iVar2 + 0x6c) & 1) == 0)) ||
           (((~(unsigned __int64)*(unsigned int *)(iVar2 + 0x6c) & 0xffffffff) >> 1 & 1) == 0)) goto LAB_8227f120;
        *param_3 = uVar8;
        fn_8227F500(iVar2);
      }
      else {
LAB_8227f120:
        if ((*(unsigned int *)(iVar2 + 0x6c) & 4) != 0) {
          if (*(int (***)())(iVar2 + 4) != (int (**)())0x0) {
            (**(int (***)())(iVar2 + 4))(*(unsigned int *)(iVar2 + 0x14),*(unsigned int *)(iVar2 + 0xc),0);
          }
          piVar3 = *(int **)(iVar2 + 0x10);
          if (piVar3 != (int *)0x0) {
            (**(int (***)())(*piVar3 + 4))(piVar3,*(unsigned int *)(iVar2 + 0x14),0);
          }
          *(unsigned int *)(iVar2 + 0x6c) = *(unsigned int *)(iVar2 + 0x6c) & 0xfffffffb;
        }
      }
      uVar8 = uVar8 + 1;
    }
    lVar5 = -(unsigned __int64)*param_3 + -1;
    lVar5 = lVar5 + (-(unsigned __int64)(lVar5 == 0) - (-(unsigned __int64)*param_3 + -2));
  }
  return lVar5;
}


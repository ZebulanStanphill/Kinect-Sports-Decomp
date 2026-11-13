typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_60;
extern int fn_822ABA88();
extern int fn_8233E6F8();
extern int fn_8233E7C0();
extern int fn_8242C410();
extern int fn_82436648();
extern int fn_8243E578();
extern int fn_8288B760();
extern unsigned int lbl_8328D41C;


unsigned __int64 fn_824369C0(int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  __int64 lVar2;
  unsigned __int64 uVar7;
  int iVar9;
  unsigned __int64 uVar8;
  unsigned __int64 uVar10;
  __int64 lVar11;
  bool bVar12;
  unsigned char auStack_60 [96];
  
  uVar10 = 1;
  lVar11 = 0;
  uVar7 = (unsigned __int64)*(unsigned int *)param_1[0x10];
  iVar3 = fn_8242C410(uVar7);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar9 = (int)uVar7;
      iVar4 = fn_8243E578(param_2,lVar11);
      if (iVar4 == 0) {
        piVar1 = *(int **)(**(int **)(iVar9 + 8) + iVar3);
        iVar4 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
        piVar1 = *(int **)(iVar4 + 0x168);
        uVar7 = (unsigned __int64)lbl_8328D41C;
        bVar12 = true;
        if (piVar1 == (int *)0x0) {
          uVar5 = *(unsigned int *)(iVar4 + 0x16c);
        }
        else {
          uVar5 = fn_8288B760(piVar1);
          uVar5 = uVar5 & 0xff;
        }
        if (uVar5 == 0) {
          if (piVar1 != (int *)0x0) {
            lVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
            uVar7 = fn_8233E6F8(lVar2 + 0x48c,0);
            lVar2 = fn_8233E6F8(lVar2 + 0x48c,1);
            bVar12 = lVar2 != 0;
          }
        }
        else {
          if (*(int *)(iVar4 + 0x24) == 0) {
            puVar6 = (unsigned int *)(**(int (***)())(*param_1 + 0x38))(auStack_60,param_1,iVar4);
            uVar7 = (unsigned __int64)*puVar6;
          }
          else {
            uVar7 = 0xffffffffffffffff;
          }
          if (piVar1 != (int *)0x0) {
            lVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
            fn_8233E7C0(lVar2 + 0x48c,uVar7,0);
            fn_8233E7C0(lVar2 + 0x48c,1,1);
          }
        }
        if (bVar12) {
          if ((int)(unsigned int)uVar7 < (int)lbl_8328D41C) {
            uVar7 = (unsigned __int64)lbl_8328D41C;
            uVar8 = 2;
          }
          else if ((unsigned int)uVar7 == lbl_8328D41C) {
            uVar7 = (unsigned __int64)lbl_8328D41C;
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
          }
          fn_82436648(param_1,lVar11,iVar4 + 0x30,uVar8,uVar7,0,0);
        }
        else {
          uVar10 = 0;
        }
      }
      lVar11 = lVar11 + 1;
      iVar3 = iVar3 + 4;
      uVar7 = (unsigned __int64)*(unsigned int *)param_1[0x10];
      iVar4 = fn_8242C410(uVar7);
    } while ((int)lVar11 < iVar4);
  }
  return uVar10;
}


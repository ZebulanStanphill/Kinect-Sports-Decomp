typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8278FD18();
extern int fn_8278FD68();
extern int fn_82791070();
extern int fn_827912D8();
extern int fn_82794B88();
extern int fn_82796240();
extern int fn_82796498();
extern int fn_82796570();
extern int fn_82796E58();
extern int fn_827977F8();
extern unsigned int iStack_54;


void fn_827979F8(int param_1,int *param_2,__int64 param_3,__int64 param_4)

{
  bool bVar1;
  unsigned __int64 uVar2;
  char cVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int auStack_60 [2];
  int *piStack_58;
  int iStack_54;
  
  if ((int)param_4 == -1) {
    param_4 = fn_827912D8();
  }
  uVar10 = param_4 - param_3;
  auStack_60[0] = 0;
  fn_827977F8(param_2);
  (**(int (***)())(*param_2 + 4))(param_2,param_3,uVar10,0xffffffff82196582);
  fn_82791070(&piStack_58,param_1,param_3,auStack_60);
  if (((piStack_58 == (int *)0x0) || (iStack_54 < 0)) || (bVar1 = false, piStack_58[1] <= iStack_54)
     ) {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar7 = (unsigned __int64)auStack_60[0];
    if (uVar7 != 0) {
      iVar9 = *(int *)(iStack_54 * 4 + *piStack_58);
      uVar2 = fn_82796498(param_2,*(unsigned int *)(iVar9 + 0xc));
      uVar5 = (unsigned __int64)*(unsigned int *)(iVar9 + 4);
      if (uVar5 != 0) {
        cVar4 = fn_8278FD18(iVar9);
        if (cVar4 != '\0') {
          uVar5 = uVar5 - 1;
        }
      }
      uVar11 = uVar5 - uVar7;
      if ((uVar10 & 0xffffffff) <= (uVar5 - uVar7 & 0xffffffff)) {
        uVar11 = uVar10;
      }
      uVar3 = fn_82794B88(param_2);
      fn_82796240(uVar2,uVar3,iVar9,uVar7,0,uVar11);
      uVar10 = uVar10 - uVar11;
      if (iStack_54 < piStack_58[1]) {
        iStack_54 = iStack_54 + 1;
      }
    }
    iVar9 = iStack_54 << 2;
    iVar8 = iStack_54;
    while( true ) {
      if (((piStack_58 == (int *)0x0) || (iVar8 < 0)) || (bVar1 = false, piStack_58[1] <= iVar8)) {
        bVar1 = true;
      }
      if ((bVar1) || ((uVar10 & 0xffffffff) == 0)) goto LAB_82797bf4;
      iVar6 = *piStack_58;
      uVar7 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar9 + iVar6) + 4);
      if (uVar7 != 0) {
        cVar4 = fn_8278FD18(*(int *)(iVar9 + iVar6));
        if (cVar4 != '\0') {
          uVar7 = uVar7 - 1;
        }
      }
      if ((uVar10 & 0xffffffff) < (uVar7 & 0xffffffff)) break;
      fn_82796570();
      uVar10 = uVar10 - uVar7;
      if (iVar8 < piStack_58[1]) {
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
      }
    }
    iVar9 = *(int *)(iVar8 * 4 + iVar6);
    uVar2 = fn_82796498(param_2,*(unsigned int *)(iVar9 + 0xc));
    uVar3 = fn_82794B88(param_2);
    fn_82796240(uVar2,uVar3,iVar9,0,0,uVar10);
  }
LAB_82797bf4:
  uVar10 = (unsigned __int64)(unsigned int)param_2[4] - 1;
  if (((__int64)uVar10 < 0) || (bVar1 = false, param_2[4] <= (int)uVar10)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)((int)((uVar10 & 0xffffffff) << 2) + param_2[3]);
  }
  if (iVar9 != 0) {
    cVar4 = fn_8278FD68(iVar9);
    if (cVar4 != '\0') {
      fn_82796498(param_2,*(unsigned int *)(iVar9 + 0xc));
    }
  }
  fn_82796E58(param_2);
  if ((*(unsigned char *)(param_1 + 0x20) & 1) != 0) {
    *(unsigned char *)(param_2 + 8) = *(unsigned char *)(param_2 + 8) | 1;
  }
  return;
}


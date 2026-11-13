typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_82791070();
extern int fn_827912D8();
extern int fn_82795A28();
extern int fn_82796240();
extern int fn_82796E58();
extern int fn_82797C88();
extern unsigned int iStack_54;


void fn_82797D20(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int auStack_60 [2];
  int *piStack_58;
  int iStack_54;
  
  if ((int)param_3 == -1) {
    param_3 = fn_827912D8();
  }
  (**(int (***)())(*param_1 + 0xc))(param_1,param_2,param_3);
  fn_82791070(&piStack_58,param_1,param_2,auStack_60);
  iVar6 = iStack_54;
  cVar4 = '\0';
  if (((piStack_58 == (int *)0x0) || (iStack_54 < 0)) || (bVar2 = false, piStack_58[1] <= iStack_54)
     ) {
    bVar2 = true;
  }
  uVar7 = param_3;
  iVar5 = 0;
  if (!bVar2) {
    iVar1 = *(int *)(iStack_54 * 4 + *piStack_58);
    uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 4);
    uVar8 = uVar3 - auStack_60[0];
    if ((param_3 & 0xffffffff) < (uVar8 & 0xffffffff)) {
      uVar8 = param_3;
    }
    if ((uVar8 & 0xffffffff) <= uVar3) {
      cVar4 = -((uVar8 + auStack_60[0] < uVar3) + -1);
      fn_82795A28();
      uVar7 = param_3 - uVar8;
      iVar5 = iVar1;
      if (iVar6 < piStack_58[1]) {
        iVar6 = iVar6 + 1;
        iStack_54 = iVar6;
      }
    }
  }
  do {
    if (((piStack_58 == (int *)0x0) || (iVar6 < 0)) || (bVar2 = false, piStack_58[1] <= iVar6)) {
      bVar2 = true;
    }
    if (bVar2) break;
    iVar1 = *(int *)(iVar6 * 4 + *piStack_58);
    uVar8 = (unsigned __int64)*(unsigned int *)(iVar1 + 4);
    if ((uVar7 & 0xffffffff) < uVar8) {
      if ((iVar5 != 0) && (cVar4 != '\0')) {
        fn_82796240(iVar5,param_1[2],iVar1,uVar7,*(unsigned int *)(iVar5 + 4),uVar8 - uVar7);
        fn_82797C88(param_1,&piStack_58,iVar1);
        cVar4 = '\0';
      }
      break;
    }
    fn_82797C88(param_1,&piStack_58,iVar1);
    uVar7 = uVar7 - uVar8;
  } while (uVar7 != 0);
  if (((piStack_58 == (int *)0x0) || (iVar6 < 0)) || (bVar2 = false, piStack_58[1] <= iVar6)) {
    bVar2 = true;
  }
  if (!bVar2) {
    iVar1 = *(int *)(iVar6 * 4 + *piStack_58);
    if (*(int *)(iVar1 + 4) != 0) {
      if ((iVar5 == 0) || (cVar4 == '\0')) goto LAB_82797f30;
      fn_82796240(iVar5,param_1[2],iVar1,0,*(unsigned int *)(iVar5 + 4));
    }
    fn_82797C88(param_1,&piStack_58,iVar1);
  }
LAB_82797f30:
  iVar5 = iVar6 << 2;
  while( true ) {
    if (((piStack_58 == (int *)0x0) || (iVar6 < 0)) || (bVar2 = false, piStack_58[1] <= iVar6)) {
      bVar2 = true;
    }
    if (bVar2) break;
    *(int *)(*(int *)(*piStack_58 + iVar5) + 0x1c) =
         *(int *)(*(int *)(*piStack_58 + iVar5) + 0x1c) - (int)param_3;
    if (iVar6 < piStack_58[1]) {
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
  }
  fn_82796E58(param_1);
  return;
}


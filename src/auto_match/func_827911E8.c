typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8278FD18();
extern int fn_82790FA0();
extern int fn_82791070();
extern unsigned int iStack_54;


void fn_827911E8(int param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int auStack_60 [2];
  int *piStack_58;
  int iStack_54;
  
  fn_82791070(&piStack_58,param_1,param_3,auStack_60);
  uVar8 = param_4 - param_3;
  uVar7 = (unsigned __int64)auStack_60[0];
  iVar5 = iStack_54 << 2;
  iVar6 = iStack_54;
  while( true ) {
    if (((piStack_58 == (int *)0x0) || (iVar6 < 0)) || (bVar2 = false, piStack_58[1] <= iVar6)) {
      bVar2 = true;
    }
    if (bVar2) {
      return;
    }
    iVar1 = *(int *)(*piStack_58 + iVar5);
    if (uVar7 == 0) {
      fn_82790FA0(iVar1,*(unsigned int *)(param_1 + 8),param_2);
    }
    if ((uVar8 & 0xffffffff) == 0) break;
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 4);
    if ((uVar4 != 0) && (cVar3 = fn_8278FD18(iVar1), cVar3 != '\0')) {
      uVar4 = uVar4 - 1;
    }
    if ((uVar8 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
      uVar4 = uVar8 + uVar7;
    }
    uVar8 = (uVar8 - uVar4) + uVar7;
    uVar7 = 0;
    if (iVar6 < piStack_58[1]) {
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
  }
  return;
}


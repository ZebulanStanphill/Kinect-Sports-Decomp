typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8268ACE8();
extern int fn_8278FD18();
extern int fn_82791070();
extern int fn_82795C78();
extern unsigned int iStack_54;


void fn_82795FB8(int param_1,int param_2,__int64 param_3,__int64 param_4)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  char cVar5;
  int iVar4;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int auStack_60 [2];
  int *piStack_58;
  int iStack_54;
  
  fn_82791070(&piStack_58,param_1,param_3,auStack_60);
  param_4 = param_4 - param_3;
  uVar8 = (unsigned __int64)auStack_60[0];
  iVar4 = iStack_54 << 2;
  iVar7 = iStack_54;
  while( true ) {
    if (((piStack_58 == (int *)0x0) || (iVar7 < 0)) || (bVar2 = false, piStack_58[1] <= iVar7)) {
      bVar2 = true;
    }
    if (bVar2) break;
    iVar1 = *(int *)(*piStack_58 + iVar4);
    uVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 4);
    if ((uVar6 != 0) && (cVar5 = fn_8278FD18(iVar1), cVar5 != '\0')) {
      uVar6 = uVar6 - 1;
    }
    uVar9 = param_4 + uVar8;
    uVar3 = uVar6;
    if ((((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff)) ||
        (uVar3 = uVar9, (uVar9 & 0xffffffff) == (uVar6 & 0xffffffff))) &&
       ((uVar9 = uVar3, cVar5 = fn_8278FD18(iVar1), cVar5 != '\0' &&
        (uVar9 = uVar9 + 1, (int)param_4 != -1)))) {
      param_4 = param_4 + 1;
    }
    fn_82795C78(iVar1,*(unsigned int *)(param_1 + 8),param_2,uVar8,uVar9);
    param_4 = (param_4 - uVar9) + uVar8;
    uVar8 = 0;
    if (iVar7 < piStack_58[1]) {
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 4;
    }
  }
  if ((*(unsigned short *)(param_2 + 0x2a) & 0x100) != 0) {
    iVar4 = fn_8268ACE8(param_2 + 0x10);
    bVar2 = true;
    if (iVar4 != 0) goto LAB_827960e4;
  }
  bVar2 = false;
LAB_827960e4:
  if (bVar2) {
    *(unsigned char *)(param_1 + 0x20) = *(unsigned char *)(param_1 + 0x20) | 1;
  }
  return;
}


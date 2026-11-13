typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82791650();
extern unsigned int uStack_1c;


void fn_827923E8(int param_1,unsigned __int64 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  int *piStack_20;
  unsigned int uStack_1c;
  
  if (*(int *)(param_1 + 4) != 0) {
    fn_82791650(&piStack_20,param_1,param_2);
    if ((int)uStack_1c < piStack_20[1]) {
      piVar3 = (int *)(uStack_1c * 0xc + *piStack_20);
    }
    else {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      iVar5 = (int)param_2;
      if ((iVar5 < iVar2) || (bVar1 = true, piVar3[1] + iVar2 + -1 < iVar5)) {
        bVar1 = false;
      }
      if ((bVar1) || (piVar3[1] + iVar2 == iVar5)) {
        piVar3[1] = param_3 + piVar3[1];
      }
    }
    uVar4 = piStack_20[1];
    if ((int)uStack_1c < (int)uVar4) {
      uStack_1c = uStack_1c + 1;
    }
    iVar2 = uStack_1c * 0xc;
    while( true ) {
      if (((int)uStack_1c < 0) || (bVar1 = false, uVar4 <= uStack_1c)) {
        bVar1 = true;
      }
      if (bVar1) break;
      *(int *)(iVar2 + *piStack_20) = *(int *)(iVar2 + *piStack_20) + param_3;
      uVar4 = piStack_20[1];
      if ((int)uStack_1c < (int)uVar4) {
        uStack_1c = uStack_1c + 1;
        iVar2 = iVar2 + 0xc;
      }
    }
  }
  return;
}


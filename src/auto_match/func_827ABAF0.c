typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267BE38();
extern int fn_827A9760();
extern int fn_827ABA70();


void fn_827ABAF0(int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  
  uVar3 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    iVar4 = param_2 << 2;
    uVar5 = param_2;
    do {
      if (((param_1 == (int *)0x0) || ((unsigned int)param_1[1] <= uVar5)) ||
         (bVar2 = false, (int)uVar5 < 0)) {
        bVar2 = true;
      }
      if (bVar2) break;
      iVar1 = *(int *)(iVar4 + *param_1);
      if (iVar1 != 0) {
        fn_827A9760(iVar1);
        fn_8267BE38(iVar1);
      }
      if (uVar5 < (unsigned int)param_1[1]) {
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  fn_827ABA70(param_1,param_2,param_3);
  return;
}


typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8225F160();
extern int fn_8255B620();
extern int fn_828EA5F8();
extern unsigned int lbl_832765BC;


void fn_822B17A8(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  
  if (lbl_832765BC == 0) {
    piVar5 = (int *)fn_8225F160();
    bVar4 = false;
    if (*piVar5 != 1) goto LAB_822b17e8;
  }
  bVar4 = true;
LAB_822b17e8:
  if ((param_3 != 0) || (!bVar4)) {
    cVar6 = fn_828EA5F8(param_1);
    if (cVar6 != '\0') {
      uVar2 = 1 << ((unsigned int)param_2 & 7);
      iVar3 = (int)((param_2 & 0xffffffff) >> 3);
      if ((uVar2 & 0xff & (unsigned int)*(unsigned char *)(*(int *)(*(int *)(param_1 + 0xf4) + 8) + iVar3)) == 0) {
        fn_8255B620(param_1,param_2 - 4);
        iVar1 = *(int *)(*(int *)(param_1 + 0xf4) + 8);
        *(unsigned char *)(iVar1 + iVar3) = (unsigned char)uVar2 | *(unsigned char *)(iVar1 + iVar3);
      }
    }
  }
  return;
}


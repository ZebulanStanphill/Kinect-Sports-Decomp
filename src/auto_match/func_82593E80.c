typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82512C30();
extern int fn_82598D50();
extern unsigned int iStack_10;
extern unsigned int lbl_8329618C;
extern unsigned int uRam8326c2b4;


bool fn_82593E80(void)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iStack_10;
  int aiStack_c [3];
  
  if (lbl_8329618C == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar3 != 0) {
    if (lbl_8329618C == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(unsigned int *)(lbl_8329618C + 4);
    }
    fn_82598D50(uVar1,aiStack_c,&iStack_10);
    if (aiStack_c[0] == 0) {
      if (iStack_10 == 0) {
        uRam8326c2b4 = 1;
        return true;
      }
    }
    else if (iStack_10 != 0) {
      uRam8326c2b4 = 0;
      return false;
    }
    uRam8326c2b4 = 1;
    return false;
  }
  piVar2 = (int *)fn_82512C30();
  return *piVar2 == 0;
}


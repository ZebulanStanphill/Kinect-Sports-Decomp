typedef unsigned char bool;
#define false 0
extern int fn_825BC5E0();


void fn_825BC748(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  
  fn_825BC5E0();
  piVar1 = (int *)(param_2 + 0xc);
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 != 0;
  }
  if ((bVar2) && (*piVar1 != 0)) {
    *piVar1 = 0;
  }
  piVar1 = (int *)(param_2 + 0x10);
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 != 0;
  }
  if (bVar2) {
    *piVar1 = 0;
  }
  return;
}


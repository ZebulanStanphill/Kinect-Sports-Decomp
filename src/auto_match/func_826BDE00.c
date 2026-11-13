typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82696480();
extern int fn_82696BC8();


void fn_826BDE00(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar2 = *(unsigned int *)(param_1 + 4);
  iVar4 = (**(int (***)())(*piVar1 + 8))(piVar1);
  if ((iVar4 < 2) || (bVar3 = true, 5 < iVar4)) {
    bVar3 = false;
  }
  if (bVar3) {
    fn_82696480(uVar2,piVar1 + -0x1a);
  }
  else {
    fn_82696BC8(uVar2,piVar1 + -4);
  }
  return;
}


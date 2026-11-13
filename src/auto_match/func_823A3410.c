typedef unsigned char bool;
#define true 1
extern int fn_822AA770();
extern int fn_82359698();
extern int fn_82399BA0();
extern int fn_8239D9F8();


void fn_823A3410(int param_1)

{
  int *piVar1;
  int iVar3;
  __int64 lVar2;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0x178) == 0) {
    iVar4 = *(int *)(param_1 + 8);
    iVar3 = (**(int (***)())(**(int **)(iVar4 + 0x2e0) + 0x34))();
    lVar2 = fn_822AA770(*(unsigned int *)(**(int **)(iVar4 + 8) + iVar3 * 4));
    bVar6 = lVar2 != 0;
  }
  else {
    bVar6 = true;
  }
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x100) = 1;
  iVar4 = fn_82399BA0(*(unsigned int *)(param_1 + 8));
  if (iVar4 == 0) {
    fn_82359698(*(unsigned int *)(param_1 + 8),8);
    lVar2 = (-(unsigned __int64)bVar6 & 0xfffffffe) + 6;
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x2e0);
    iVar4 = piVar1[3];
    iVar5 = (**(int (***)())(*piVar1 + 0x34))();
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x1e4);
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x188) != 0)) && (iVar5 == iVar4)) && (bVar6)) {
      lVar2 = 5;
    }
    fn_8239D9F8(*(int *)(param_1 + 8),lVar2);
  }
  else {
    fn_82359698(*(unsigned int *)(param_1 + 8),8);
  }
  return;
}


#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FF81C0();


unsigned __int64
fn_82FF6B10(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned __int64 param_5,
             char param_6)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  unsigned int *puVar5;
  
  for (piVar4 = *(int **)(param_1 + 4); (piVar4 != *(int **)(param_1 + 8) && (*piVar4 != param_2));
      piVar4 = piVar4 + 2) {
  }
  uVar1 = (unsigned int)(*(int **)(param_1 + 8) != piVar4);
  puVar5 = (unsigned int *)(-(unsigned int)(uVar1 != 0) & (unsigned int)(piVar4 + 1));
  if (puVar5 == (unsigned int *)0x0) {
    uVar2 = 0x14;
  }
  else {
    iVar3 = fn_82FF81C0((unsigned __int64)*puVar5 + 0x3c,CONCAT44(param_3,param_4),param_5,-uVar1);
    if ((iVar3 == 0) ||
       ((param_6 != '\0' &&
        (iVar3 = fn_82FF81C0((unsigned __int64)*puVar5 + 0x3c,CONCAT44(param_4,param_3),param_5),
        iVar3 == 0)))) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


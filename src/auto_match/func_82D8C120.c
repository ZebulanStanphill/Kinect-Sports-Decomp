typedef unsigned char bool;
#define true 1
#define false 0
#define CARRY8(a,b) ((((unsigned __int64)(a)) + ((unsigned __int64)(b))) < ((unsigned __int64)(a)))


unsigned char * fn_82D8C120(unsigned char *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned char bVar6;
  
  piVar1 = *(int **)(param_2 + 0x10);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  bVar6 = 1;
  iVar5 = piVar1[3];
  if ((*(char *)(param_2 + 0xe8) == '\x05') || (bVar2 = false, *(char *)(param_2 + 0xe8) == '\x04'))
  {
    bVar2 = true;
  }
  if ((!bVar2) && ((iVar5 == 10 || (iVar5 == 8)))) {
    piVar4 = (int *)(**(int (***)())(*piVar1 + 0x10))(piVar1);
    uVar3 = (**(int (***)())(*piVar4 + 4))();
    bVar6 = -!CARRY8(100 - uVar3,uVar3 ^ 0x80000000) & 1;
  }
  if ((iVar5 == 0x18) || (iVar5 == 7)) {
    iVar5 = (**(int (***)())(*(int *)(*(int *)(param_2 + 0x10) + 0x10) + 4))
                      (*(int *)(param_2 + 0x10) + 0x10);
    if (iVar5 < 0x65) goto LAB_82d8c248;
  }
  else if (iVar5 != 0xf) {
    if (iVar5 == 9) {
      uVar3 = (**(int (***)())(piVar1[4] + 4))(piVar1 + 4);
      bVar6 = -!CARRY8(100 - uVar3,uVar3 ^ 0x80000000) & bVar6;
    }
LAB_82d8c248:
    *param_1 = bVar6;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


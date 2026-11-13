typedef unsigned char bool;
typedef int code();


void fn_826C7AB8(int *param_1)

{
  int *piVar1;
  bool bVar2;
  unsigned char lVar3;
  unsigned int uVar4; unsigned int count;
  unsigned char bVar5;
  int iVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x38))(param_1) != 0;
  if ((((*(unsigned char *)((int)param_1 + 0x66) & 1) != 0) || (lVar3 == 0)) &&
     (count = (unsigned int)param_1[0x2b], count != 0)) {
    iVar6 = 0;
    uVar4=count;
    do {
      piVar1 = *(int **)(iVar6 + param_1[0x2a]);
      bVar2 = ((*(unsigned char *)((int)param_1 + 0x66) & 1) != 0) || lVar3;
      if (bVar2) {
        bVar5 = *(unsigned char *)((int)piVar1 + 0x66) | 1;
      }
      else {
        bVar5 = *(unsigned char *)((int)piVar1 + 0x66) & 0xfe;
      }
      *(unsigned char *)((int)piVar1 + 0x66) = bVar5;
      (**(code **)(*piVar1 + 0x3c))(piVar1);
      uVar4 = uVar4 - 1;
      iVar6 = iVar6 + 4;
    } while (uVar4 != 0);
  }
  return;
}


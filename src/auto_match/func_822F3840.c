extern int fn_822AF138(int, int);
extern int fn_822F3B50(int, float);
extern int fn_822F3EC0(int);
extern int fn_82397F30(int);
extern unsigned char fn_8288B760(unsigned int);

void fn_822F3840(int param_1, float param_2)
{
  int *piVar1;
  int uVar2;
  int iVar3;
  int uVar4;
  unsigned int a;

  piVar1 = *(int **)(param_1 + 0x30);
  if ((piVar1 == 0) || ((*piVar1 == 0 && (piVar1[1] == 0)))) {
    a = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x168);
    if (a != 0) {
      uVar2 = fn_8288B760(a);
    }
    else {
      uVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x16c);
    }
    if (uVar2 != 0) {
      iVar3 = fn_822F3B50(param_1, param_2);
    }
    else {
      iVar3 = fn_822F3EC0(param_1);
    }
    if (iVar3 == 0) {
      return;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
    return;
  }
  iVar3 = fn_82397F30(*(int *)(param_1 + 0x10));
  if ((iVar3 != 0) && (iVar3 = *(int *)(param_1 + 0xc), *(int *)(iVar3 + 0x24) == 0)) {
    uVar4 = 6;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
    uVar4 = 7;
  }
  fn_822AF138(*(int *)(iVar3 + 0x110), uVar4);
}

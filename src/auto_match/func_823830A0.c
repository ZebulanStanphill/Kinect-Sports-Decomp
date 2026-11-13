extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_82383000();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828A12E8();
extern unsigned int iStack_34;
extern unsigned int iStack_38;


unsigned __int64 fn_823830A0(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  char cVar5;
  int iVar3;
  unsigned int uVar4;
  unsigned int * apuStack_40;
  struct { int first; int second; } stack_pair_38;

  unsigned char auStack_30 [4];
  unsigned int *puStack_2c;

  fn_82383000(&stack_pair_38.first,param_1);
  if (stack_pair_38.first == 0) {
LAB_823831a8:
    if (stack_pair_38.second != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828A12E8(*(unsigned int *)(param_1 + 0x10));
    uVar2 = fn_8288F948(uVar2,10);
    fn_8224E928(auStack_30,uVar2);
    apuStack_40 = (unsigned int *)*puStack_2c;
    while (apuStack_40 != puStack_2c) {
      piVar1 = (int *)apuStack_40[5];
      cVar5 = fn_8288B760(piVar1);
      if (cVar5 == '\0') {
        iVar3 = (**(int (***)())(*piVar1 + 8))(piVar1);
        uVar4 = (**(int (***)())(*(int *)(iVar3 + 0x2e8) + 0x3c))();
        if (uVar4 < *(unsigned int *)(stack_pair_38.first + 0x2180)) {
          fn_8224ED20(&apuStack_40,auStack_30,*puStack_2c);
          fn_8265CA20(puStack_2c);
          goto LAB_823831a8;
        }
      }
      fn_8265CA20(&apuStack_40);
    }
    fn_8224ED20(&apuStack_40,auStack_30,*puStack_2c);
    fn_8265CA20(puStack_2c);
    if (stack_pair_38.second != 0) {
      fn_822315A0();
    }
    uVar2 = 1;
  }
  return uVar2;
}

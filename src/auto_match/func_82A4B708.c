extern int fn_82A40AD8();
extern int fn_82A4F4E0();


void fn_82A4B708(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x54);
  (*(int (**)())(*(int *)(param_1 + 0x54) + 8))(piVar2);
  if (*(unsigned int *)(param_1 + 0x14c) != 0) {
    do {
      piVar1 = (int *)fn_82A40AD8(param_1 + 0x78);
      (*(int (**)())(*piVar1 + 4))(piVar1,0);
      fn_82A4F4E0();
    } while (*(unsigned int *)(param_1 + 0x14c) != 0);
  }
  (*(int (**)())(*piVar2 + 0x14))(piVar2);
  return;
}


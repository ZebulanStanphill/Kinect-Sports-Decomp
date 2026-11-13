typedef unsigned char bool;
extern int fn_8255DEA0();


unsigned int fn_822CBDA0(int param_1,unsigned int param_2)

{
  bool bVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  
  if (*(int *)(param_2 + 0x4c) == 0) {
    return param_2;
  }
  if (*(int *)(param_2 + 0x8c0) != 0) {
    if (*(int *)((*(int *)(*(int *)(param_2 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_2 + 0x8c0))
        != 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x44);
      uVar4 = 4;
      if (uVar2 == 0) {
        uVar4 = 4;
      }
      else if (uVar2 == 1) {
        uVar4 = 0;
      }
      else if (uVar2 < 3) {
        uVar4 = 1;
      }
      else if (uVar2 == 3) {
        uVar4 = 0xd;
      }
      else if (uVar2 < 5) {
        uVar4 = 0xc;
      }
      else if (uVar2 == 5) {
        uVar4 = 0xf;
      }
      else if (uVar2 < 7) {
        uVar4 = 0xe;
      }
      if ((*(int *)(param_2 + 0x8c0) == 0) ||
         (piVar3 = *(int **)(*(int *)(param_2 + 0x8c0) + 0x1b4), piVar3 == (int *)0x0)) {
        uVar4 = 0xffffffffffffffff;
      }
      else {
        uVar4 = (**(int (***)())(*piVar3 + 0x14))(piVar3,uVar4);
      }
      bVar1 = (int)uVar4 != -1;
      if (bVar1) {
        fn_8255DEA0(param_2,uVar4,param_1 + 0x50);
      }
      return (unsigned int)bVar1;
    }
    return param_2;
  }
  return param_2;
}


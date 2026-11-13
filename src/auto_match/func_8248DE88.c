extern int fn_82231540();
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern unsigned int iStack_4c;


void fn_8248DE88(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int *piStack_50;
  int iStack_4c;
  
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4c);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  if (uVar4 != *(unsigned int *)(param_1 + 0x50)) {
    uVar3 = uVar4 + 8;
    do {
      fn_82365BD8(&piStack_50,uVar4);
      uVar1 = *(unsigned int *)(param_1 + 0x50);
      if ((uVar3 & 0xffffffff) != (unsigned __int64)uVar1) {
        uVar5 = uVar3;
        do {
          fn_823F2E20((uVar4 - uVar3) + uVar5,uVar5);
          uVar5 = uVar5 + 8;
        } while ((uVar5 & 0xffffffff) != (unsigned __int64)uVar1);
      }
      fn_82231540((unsigned __int64)*(unsigned int *)(param_1 + 0x50) - 8);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -8;
      for (piVar2 = *(int **)(param_1 + 0x4c);
          (piVar2 != *(int **)(param_1 + 0x50) && ((int *)*piVar2 != piStack_50));
          piVar2 = piVar2 + 2) {
      }
      if (piVar2 == *(int **)(param_1 + 0x50)) {
        (**(int (***)())(*piStack_50 + 0x10))();
      }
      if (iStack_4c != 0) {
        fn_822315A0();
      }
    } while (uVar4 != *(unsigned int *)(param_1 + 0x50));
  }
  *(unsigned int *)(param_1 + 0x24) = 0;
  return;
}


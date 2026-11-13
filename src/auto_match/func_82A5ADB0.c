#define TBLr 0
extern int fn_82A595E8();
extern int fn_82A59E40();
extern int fn_82A5AC60();
extern int fn_82A5CC60();


__int64 fn_82A5ADB0(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned int *puVar6;
  
  piVar5 = (int *)(param_1 + 0x40);
  (**(int (***)())(*(int *)(param_1 + 0x40) + 8))(piVar5);
  lVar1 = TBLr;
  (**(int (***)())**(unsigned int **)(param_1 + 0x6c))();
  lVar3 = fn_82A5CC60(*(unsigned int *)(param_1 + 0x74));
  if (-1 < lVar3) {
    if (*(int *)(param_1 + 0x23c) != 0) {
      lVar3 = fn_82A5AC60(param_1);
    }
    if (-1 < (int)lVar3) {
      lVar3 = fn_82A595E8(*(unsigned int *)(param_1 + 0x70));
    }
  }
  puVar6 = *(unsigned int **)(param_1 + 0x22c);
  while (puVar6 != (unsigned int *)0x0) {
    if ((int)lVar3 < 0) goto LAB_82a5ae90;
    if (puVar6 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      puVar4 = (unsigned int *)*puVar6;
      puVar6 = (unsigned int *)puVar6[1];
    }
    lVar3 = (**(int (***)())*puVar4)();
  }
  if (-1 < (int)lVar3) {
    (**(int (***)())(**(int **)(param_1 + 0x6c) + 4))();
  }
LAB_82a5ae90:
  uVar2 = TBLr;
  if (uVar2 - lVar1 < 0x100000000) {
    fn_82A59E40(param_1,uVar2 - lVar1 & 0xffffffff,uVar2 & 0xffffffff);
  }
  (**(int (***)())(*piVar5 + 0x14))(piVar5);
  return lVar3;
}


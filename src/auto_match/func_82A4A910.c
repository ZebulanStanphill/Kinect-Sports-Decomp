extern int fn_82A50210();
extern int fn_82A51C60();


int fn_82A4A910(int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int lVar2;
  int *piVar3;
  
  if (param_3 == 0) {
    param_3 = *(unsigned int *)(param_1 + 0x34) + 0x248;
  }
  piVar3 = (int *)(param_1 + 4);
  lVar2 = fn_82A51C60(piVar3,param_2,param_3);
  if (lVar2 >= 0) {
    lVar2 = fn_82A50210(piVar3,0x1337f001);
    if (lVar2 >= 0) {
      (*(int (**)())(*piVar3 + 0x5c))(piVar3,0);
      puVar1 = *(unsigned int **)(param_1 + 0x88);
      if (puVar1 != (unsigned int *)0x0) {
        lVar2 = (*(int (**)())*puVar1)(puVar1,0x1337f001);
      }
      if ((lVar2 >= 0) &&
         (piVar3 = *(int **)(*(int *)(param_1 + 0x34) + 0xb0),
         lVar2 = (*(int (**)())(*piVar3 + 0x48))(piVar3,0x1337f001), lVar2 >= 0)) {
        *(int *)(*(int *)(param_1 + 0x34) + 0x18) = *(int *)(*(int *)(param_1 + 0x34) + 0x18) + 1;
        *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x24) =
             (unsigned int)(*(int *)(param_1 + 0x84) != 0) + *(int *)(*(int *)(param_1 + 0x34) + 0x24);
        *(int *)(*(int *)(param_1 + 0x34) + 0x28) =
             *(int *)(param_1 + 0x2c) + *(int *)(*(int *)(param_1 + 0x34) + 0x28);
      }
    }
  }
  return lVar2;
}


extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


unsigned int fn_823ABBC8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iStack_20;
  int iStack_1c;
  
  for (puVar2 = *(unsigned int **)(param_1 + 0x6c);
      (puVar2 != *(unsigned int **)(param_1 + 0x70) && (*(int *)*puVar2 != param_2));
      puVar2 = puVar2 + 2) {
  }
  if (puVar2 == *(unsigned int **)(param_1 + 0x70)) {
    for (puVar2 = *(unsigned int **)(param_1 + 0x7c);
        (puVar2 != *(unsigned int **)(param_1 + 0x80) && (*(int *)*puVar2 != param_2));
        puVar2 = puVar2 + 2) {
    }
    if (puVar2 == *(unsigned int **)(param_1 + 0x80)) {
      return 8;
    }
  }
  fn_82365BD8(&iStack_20,puVar2);
  uVar1 = *(unsigned int *)(iStack_20 + 4);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return uVar1;
}


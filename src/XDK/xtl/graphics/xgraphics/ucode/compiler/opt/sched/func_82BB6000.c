void fn_82BB6000(int param_1,int param_2)

{
  unsigned int *puVar1;
  int lVar2;
  
  puVar1 = (unsigned int *)(param_1 + 4);
  lVar2 = 2;
  do {
    puVar1 = puVar1 + 1;
    (*(int (**)())(*(int *)*puVar1 + 8))((int *)*puVar1,param_2);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


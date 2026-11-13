extern int fn_82F5CB50();


void fn_82F58F20(int param_1,unsigned int param_2)

{
  int lVar1;
  unsigned int *puVar2;
  
  if (((int)param_2 < 0) || (param_2 >= 2)) {
    puVar2 = (unsigned int *)(param_1 + -4);
    lVar1 = 2;
    do {
      fn_82F5CB50(puVar2[1]);
      puVar2 = puVar2 + 2;
      fn_82F5CB50(*puVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  else {
    fn_82F5CB50(*(unsigned int *)(param_2 * 8 + param_1));
    fn_82F5CB50(*(unsigned int *)(param_2 * 8 + param_1 + 4));
  }
  return;
}


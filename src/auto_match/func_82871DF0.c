extern int fn_8259BDA8();
extern int fn_82871CD0();


unsigned __int64 fn_82871DF0(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *apuStack_20 [2];
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  apuStack_20[0] = (unsigned int *)*puVar1;
  while (apuStack_20[0] != puVar1) {
    (**(int (***)())(*(int *)apuStack_20[0][3] + 0x40))();
    fn_8259BDA8(apuStack_20);
    puVar1 = *(unsigned int **)(param_1 + 8);
  }
  fn_82871CD0(param_1,param_2);
  return 0x20110000;
}


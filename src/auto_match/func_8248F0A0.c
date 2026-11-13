extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_8248F390();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_8248F0A0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  struct { unsigned int first; int second; } stack_pair_40;

  
  iVar1 = (int)param_1;
  if (8 < (int)(param_2 - iVar1 & 0xfffffff8U)) {
    puVar2 = (unsigned int *)(param_2 + -8);
    do {
      stack_pair_40.first = 0;
      stack_pair_40.second = 0;
      if (&stack_pair_40.first != puVar2) {
        stack_pair_40.second = puVar2[1];
        puVar2[1] = 0;
        stack_pair_40.first = *puVar2;
        *puVar2 = 0;
      }
      fn_823F2E20(puVar2,param_1);
      fn_8248F390(param_1,0,(int)puVar2 - iVar1 >> 3,&stack_pair_40.first,param_3);
      if (stack_pair_40.second != 0) {
        fn_822315A0();
      }
      puVar2 = puVar2 + -2;
    } while (8 < (int)((8 - iVar1) + (int)puVar2 & 0xfffffff8U));
  }
  return;
}


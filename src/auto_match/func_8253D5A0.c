#define true 1
extern unsigned int *auStack_20;
extern int fn_8251E530();
extern int fn_8253D630();
extern int fn_82D81240();


void fn_8253D5A0(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned char auStack_20 [8];
  
  puVar1 = *(unsigned int **)(param_1 + 0x50);
  while( true ) {
    if (*(unsigned int **)(param_1 + 0x54) <= puVar1) {
      if (*(int *)(param_2 + 0x2ec) == 0) {
        fn_8253D630(param_2,param_3);
      }
      fn_82D81240(auStack_20,*(unsigned int *)(param_2 + 0x1f8),param_3);
      return;
    }
    if ((unsigned __int64)*puVar1 == (param_3 & 0xffffffff)) break;
    puVar1 = puVar1 + 1;
  }
  fn_8251E530();
  return;
}


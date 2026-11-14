#define true 1
extern unsigned int *auStack_18;
extern int fn_8251E530();
extern int XMemSet();
extern int fn_82D81078();


void fn_8253D4E8(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned char auStack_18 [8];
  
  puVar1 = *(unsigned int **)(param_1 + 100);
  while( true ) {
    if (*(unsigned int **)(param_1 + 0x68) <= puVar1) {
      fn_82D81078(*(unsigned int *)(param_2 + 0x1f8),param_3,param_4 == 0);
                    /* WARNING: Subroutine does not return */
      XMemSet(auStack_18,0,4);
    }
    if ((unsigned __int64)*puVar1 == (param_3 & 0xffffffff)) break;
    puVar1 = puVar1 + 1;
  }
  fn_8251E530(param_1 + 100,puVar1);
  return;
}


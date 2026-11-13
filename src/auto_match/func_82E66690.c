extern int fn_82E50C30();
extern int fn_82EE7F00();
extern void *memset(void *, int, unsigned);
extern void fn_82EE7F20(void *,int,int,int);


int fn_82E66690(int param_1)

{
  *(unsigned int *)(param_1 + 0x200) = 0;
  *(unsigned int *)(param_1 + 0x204) = 0;
  *(unsigned int *)(param_1 + 0x210) = 0;
  *(unsigned int *)(param_1 + 0x214) = 0;
  *(unsigned int *)(param_1 + 0x218) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x21c) = 0;
  *(unsigned int *)(param_1 + 0x220) = 0;
  *(unsigned int *)(param_1 + 0x224) = 0;
  *(unsigned int *)(param_1 + 0x228) = 0;
  *(unsigned int *)(param_1 + 0x22c) = 0;
  *(unsigned int *)(param_1 + 0x230) = 0;
  *(unsigned int *)(param_1 + 0x234) = 0;
  *(unsigned int *)(param_1 + 0x238) = 0;
  *(unsigned int *)(param_1 + 0x23c) = 0;
  fn_82E50C30(param_1 + 0x240);
  fn_82EE7F00(param_1 + 0x27c);
                    /* WARNING: Subroutine does not return */
  memset((void *)param_1,0,0x200);
  fn_82EE7F20((void *)(param_1+0x27c),0xa,0,0);
  return param_1;
}


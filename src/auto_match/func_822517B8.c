extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82250D10();


void fn_822517B8(int param_1,unsigned __int64 param_2)

{
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [80];
  int *base = (int *)(param_1 + 0x50);
  
  fn_82250D10(auStack_70);
  (*(int (**)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_80);
  (*(int (**)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,auStack_70);
  if (*(int **)(base+4) != 0) {
    (*(int (**)())(**(int **)((int)(base+4)) + 4))
              (*(int **)((int)(base+4)),auStack_80[0],auStack_70);
  }
  return;
}


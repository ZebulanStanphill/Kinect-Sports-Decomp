extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_68;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern unsigned int fStack_60;
extern unsigned int fStack_64;


void fn_82236678(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned char auStack_70 [4];
  unsigned char auStack_6c [4];
  unsigned char auStack_68 [4];
  float fStack_64;
  float fStack_60;
  float afStack_5c [3];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_30);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,auStack_40);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_50);
  (**(int (***)())(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,afStack_5c);
  (**(int (***)())(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,auStack_68);
  (**(int (***)())(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,auStack_6c);
  (**(int (***)())(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,auStack_70);
  (**(int (***)())(**(int **)(param_1 + 0xa0) + 0x14))(*(int **)(param_1 + 0xa0),param_2,&fStack_60);
  (**(int (***)())(**(int **)(param_1 + 0xa8) + 0x14))(*(int **)(param_1 + 0xa8),param_2,&fStack_64);
  if (*(int **)(param_3 + 0x10) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_3 + 0x10) + 4))
              ((double)afStack_5c[0],(double)fStack_60,(double)fStack_64);
  }
  return;
}


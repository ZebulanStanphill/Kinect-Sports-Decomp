typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorAddFloatingPoint();


void fn_82D49EC0(int param_1,unsigned __int64 param_2,__int64 param_3,int param_4)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  (**(int (***)())(**(int **)(param_1 + 0x18) + 0x3c))();
  if (0 < (int)param_3) {
    do {
      vectorAddFloatingPoint(in_vs32,in_vs45);
      puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
      *puVar1 = in_register_000100c0;
      puVar1[1] = in_register_000100c4;
      puVar1[2] = in_register_000100c8;
      puVar1[3] = in_vr12;
      param_4 = param_4 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


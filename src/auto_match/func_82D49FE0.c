typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorAddFloatingPoint();


__int64 fn_82D49FE0(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  int in_r0;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  (**(int (***)())(**(int **)(param_1 + 0x18) + 0x30))();
  lVar2 = (**(int (***)())(**(int **)(param_1 + 0x18) + 0x2c))(*(int **)(param_1 + 0x18));
  lVar3 = param_2;
  if (0 < (int)lVar2) {
    do {
      vectorAddFloatingPoint(in_vs32,in_vs45);
      puVar1 = (unsigned int *)(in_r0 + (int)lVar3 & 0xfffffff0);
      *puVar1 = in_register_000100c0;
      puVar1[1] = in_register_000100c4;
      puVar1[2] = in_register_000100c8;
      puVar1[3] = in_vr12;
      lVar2 = lVar2 + -1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != 0);
  }
  return param_2;
}


extern int fn_828E9D60();
extern int fn_828E9D90();


__int64 fn_82234920(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  
  lVar1 = fn_828E9D90(param_2);
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,0);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,0);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,0);
  (**(int (***)())(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,0);
  (**(int (***)())(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,0);
  (**(int (***)())(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,0);
  (**(int (***)())(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,0);
  (**(int (***)())(**(int **)(param_1 + 0xa0) + 0x14))(*(int **)(param_1 + 0xa0),param_2,0);
  (**(int (***)())(**(int **)(param_1 + 0xa8) + 0x14))(*(int **)(param_1 + 0xa8),param_2,0);
  lVar2 = fn_828E9D90(param_2);
  fn_828E9D60(param_2,lVar1);
  return lVar2 - lVar1;
}


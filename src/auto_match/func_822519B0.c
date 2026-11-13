extern int fn_828E9D60();
extern int fn_828E9D90();


int fn_822519B0(int param_1,int param_2)

{
  int lVar1;
  int lVar2;
  
  lVar1 = fn_828E9D90(param_2);
  (*(int (**)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,0);
  (*(int (**)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,0);
  (*(int (**)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,0);
  (*(int (**)())(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,0);
  (*(int (**)())(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,0);
  (*(int (**)())(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,0);
  lVar2 = fn_828E9D90(param_2);
  lVar2 -= lVar1;
  fn_828E9D60(param_2,lVar1);
  return lVar2;
}


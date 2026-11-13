extern int fn_82FEFD50();
extern int fn_82FF0250();
extern int fn_82FF1138();
extern int fn_83003A80();
extern int fn_83027368();
extern int fn_83028CB0();


unsigned __int64 fn_82FF11B8(int param_1,float *param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  double dVar3;
  
  iVar2 = fn_82FF1138();
  uVar1 = fn_83003A80(*(unsigned int *)(iVar2 + 0x68),*(unsigned int *)(iVar2 + 0x70),iVar2 + 0x150)
  ;
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_83027368(*(int *)(param_1 + 0x38),uVar1,iVar2 + 0x150);
  }
  if ((*(unsigned char *)(param_1 + 0xda) & 2) != 0) {
    dVar3 = (double)fn_83028CB0(*(unsigned int *)(param_1 + 0x68),*(unsigned int *)(param_1 + 0x6c))
    ;
    *param_2 = (float)dVar3;
    fn_82FEFD50(param_1);
  }
  uVar1 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x9c))
                    (*(int **)(param_1 + 0x68),param_2,0xffffffffffffffff,param_1 + 0x1c,
                     *(unsigned int *)(param_1 + 0x70),
                     (~(unsigned __int64)*(unsigned char *)(param_1 + 0xd9) & 0xffffffff) >> 6 & 1,param_1 + 0x28,1)
  ;
  *(unsigned char *)(param_1 + 0xd9) = *(unsigned char *)(param_1 + 0xd9) | 0x40;
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x30) + param_2[2];
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x34) + param_2[3];
  *(float *)(param_1 + 0x7c) = param_2[1];
  *(float *)(param_1 + 0x74) = *param_2;
  fn_82FF0250(param_1);
  if (((*(unsigned char *)(param_1 + 0xda) & 2) != 0) && (*(int *)(param_1 + 0x178) != 0)) {
    *(float *)(param_1 + 0x84) =
         *(float *)(*(int *)(param_1 + 0x178) + 0x10) + *(float *)(param_1 + 0x84);
  }
  *(unsigned char *)(param_1 + 0xd8) = *(unsigned char *)(param_1 + 0xd8) | 1;
  return uVar1;
}


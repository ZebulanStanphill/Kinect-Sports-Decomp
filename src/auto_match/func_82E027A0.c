extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82E025E0();


int fn_82E027A0(int param_1,unsigned int param_2)

{
  int iVar1;
  
  if (*(void **)(param_1 + 0x20) != 0) {
    fn_82CE4118(*(void **)(param_1 + 0x20));
  }
  *(unsigned int *)(param_1 + 0x20) = 0;
  fn_82E025E0(param_1);
  if ((param_2 & 1) != 0) {
    iVar1 = fn_82CE5410();
    (*(int (**)())(**(int **)(iVar1 + 0x10) + 8))
              (*(int **)(iVar1 + 0x10),param_1,*(unsigned short *)(param_1 + 4));
  }
  return param_1;
}


extern int fn_82FA5190();
extern int fn_8303A1F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_831BC770;


void fn_830268A8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  if ((int)param_2 != 2) {
    if (*(int *)(param_1 + 0x60) != 0) {
      (**(int (***)())(**(int **)(param_1 + 4) + 8))();
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      fn_82FA5190(lbl_831BC770);
    }
    *(unsigned int *)(param_1 + 0x60) = 0;
    *(unsigned short *)(param_1 + 0x6e) = 0;
    *(unsigned short *)(param_1 + 0x6c) = 0;
    *(unsigned short *)(param_1 + 0x70) = 0;
    *(unsigned int *)(param_1 + 0x68) = 0x2b;
    uVar1 = lbl_82002AE0;
    *(unsigned int *)(param_1 + 0x74) = 0;
    *(unsigned int *)(param_1 + 0x7c) = uVar1;
    *(unsigned int *)(param_1 + 0x78) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x80) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x84) = 1;
    fn_8303A1F0(param_1 + 0x10);
  }
  if ((int)param_2 == 0) {
    *(unsigned char *)(param_1 + 0xb8) = 0;
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    (**(int (***)())(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4),param_2);
  }
  return;
}


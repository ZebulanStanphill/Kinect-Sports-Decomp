extern int fn_82FA5190();
extern int fn_8303A1F0();
extern unsigned int lbl_831BC770;


void fn_830269B8(int param_1)

{
  float uVar1;

  (*(void (**)(int))(**(int **)(param_1 + 4) + 8))(*(int *)(param_1 + 4));
  if (*(unsigned int *)(param_1 + 0x74) != 0) {
    fn_82FA5190(lbl_831BC770, *(unsigned int *)(param_1 + 0x74));
  }
  *(int *)(param_1 + 0x60) = 0;
  *(short *)(param_1 + 0x6e) = 0;
  uVar1 = 1.0f;
  *(short *)(param_1 + 0x6c) = 0;
  *(float *)(param_1 + 0x7c) = uVar1;
  *(int *)(param_1 + 0x68) = 0x2b;
  *(short *)(param_1 + 0x70) = 0;
  *(int *)(param_1 + 0x74) = 0;
  *(int *)(param_1 + 0x78) = 0xffffffff;
  *(int *)(param_1 + 0x80) = 0xffffffff;
  *(int *)(param_1 + 0x84) = 1;
  fn_8303A1F0(param_1 + 0x10);
  {
    char *c = (char *)(param_1 + 0xb8);
    *c = 0;
  }
  (*(void (**)(int))(**(int **)(param_1 + 4) + 0x18))(*(int *)(param_1 + 4));
}

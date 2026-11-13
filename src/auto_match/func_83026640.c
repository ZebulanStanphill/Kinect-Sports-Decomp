extern int fn_82FA5190();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_831BC770;


void fn_83026640(int param_1)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    fn_82FA5190(lbl_831BC770);
    *(unsigned int *)(param_1 + 0x88) = 0;
    *(unsigned short *)(param_1 + 0x94) = 0;
    *(unsigned short *)(param_1 + 0x96) = 0;
    uVar1 = lbl_82002AE0;
    *(unsigned int *)(param_1 + 0x8c) = 0;
    *(unsigned int *)(param_1 + 0xa4) = uVar1;
    *(unsigned int *)(param_1 + 0x88) = 0;
    *(unsigned short *)(param_1 + 0x96) = 0;
    *(unsigned short *)(param_1 + 0x94) = 0;
    *(unsigned int *)(param_1 + 0x90) = 0x2b;
    *(unsigned short *)(param_1 + 0x98) = 0;
    *(unsigned int *)(param_1 + 0x9c) = 0;
    *(unsigned int *)(param_1 + 0xa0) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xa8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xac) = 1;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}


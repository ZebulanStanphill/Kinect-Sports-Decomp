extern int fn_82CC0710();
extern unsigned int lbl_83177478;
extern unsigned int lbl_83177488;


void fn_82CC0D88(int param_1,int param_2)

{
  unsigned int uVar1;
  
  if (3 < param_2) {
    param_2 = 3;
  }
  if (*(int *)(param_1 + 0x54c8) == 0) {
    param_2 = param_2 * 0x1c;
    *(unsigned int *)(param_1 + 0x553c) = *(unsigned int *)(&lbl_83177478 + param_2);
    *(unsigned int *)(param_1 + 0x5540) = *(unsigned int *)(param_2 + -0x7ce88b84);
    *(unsigned int *)(param_1 + 0x5544) = *(unsigned int *)(param_2 + -0x7ce88b80);
    *(unsigned int *)(param_1 + 0x5548) = *(unsigned int *)(param_2 + -0x7ce88b7c);
    *(unsigned int *)(param_1 + 0x554c) = *(unsigned int *)(&lbl_83177488 + param_2);
    *(unsigned int *)(param_1 + 0x5550) = *(unsigned int *)(param_2 + -0x7ce88b74);
    uVar1 = *(unsigned int *)(param_2 + -0x7ce88b70);
  }
  else {
    param_2 = param_2 * 0x1c;
    *(unsigned int *)(param_1 + 0x553c) = *(unsigned int *)(param_2 + -0x7ce88b18);
    *(unsigned int *)(param_1 + 0x5540) = *(unsigned int *)(param_2 + -0x7ce88b14);
    *(unsigned int *)(param_1 + 0x5544) = *(unsigned int *)(param_2 + -0x7ce88b10);
    *(unsigned int *)(param_1 + 0x5548) = *(unsigned int *)(param_2 + -0x7ce88b0c);
    *(unsigned int *)(param_1 + 0x554c) = *(unsigned int *)(param_2 + -0x7ce88b08);
    *(unsigned int *)(param_1 + 0x5550) = *(unsigned int *)(param_2 + -0x7ce88b04);
    uVar1 = *(unsigned int *)(param_2 + -0x7ce88b00);
  }
  *(unsigned int *)(param_1 + 0x5554) = uVar1;
  fn_82CC0710();
  return;
}


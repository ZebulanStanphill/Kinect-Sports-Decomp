extern int fn_82CC0A18();
extern unsigned int lbl_83177398;
extern unsigned int lbl_8317739C;
extern unsigned int lbl_831773A0;
extern unsigned int lbl_8317741C;


void fn_82CC0C78(int param_1,int param_2)

{
  if (3 < param_2) {
    param_2 = 3;
  }
  if (*(int *)(param_1 + 0x54c8) == 0) {
    param_2 = param_2 * 0x1c;
    *(unsigned int *)(param_1 + 0x5520) = *(unsigned int *)(&lbl_83177398 + param_2);
    *(unsigned int *)(param_1 + 0x5524) = *(unsigned int *)(&lbl_8317739C + param_2);
    *(unsigned int *)(param_1 + 0x5528) = *(unsigned int *)(&lbl_831773A0 + param_2);
    *(unsigned int *)(param_1 + 0x552c) = *(unsigned int *)(param_2 + -0x7ce88c5c);
    *(unsigned int *)(param_1 + 0x5530) = *(unsigned int *)(param_2 + -0x7ce88c58);
    *(unsigned int *)(param_1 + 0x5534) = *(unsigned int *)(param_2 + -0x7ce88c54);
    *(unsigned int *)(param_1 + 0x5538) = *(unsigned int *)(param_2 + -0x7ce88c50);
  }
  else {
    param_2 = param_2 * 0x1c;
    *(unsigned int *)(param_1 + 0x5520) = *(unsigned int *)(param_2 + -0x7ce88bf8);
    *(unsigned int *)(param_1 + 0x5524) = *(unsigned int *)(param_2 + -0x7ce88bf4);
    *(unsigned int *)(param_1 + 0x5528) = *(unsigned int *)(param_2 + -0x7ce88bf0);
    *(unsigned int *)(param_1 + 0x552c) = *(unsigned int *)(param_2 + -0x7ce88bec);
    *(unsigned int *)(param_1 + 0x5530) = *(unsigned int *)(param_2 + -0x7ce88be8);
    *(unsigned int *)(param_1 + 0x5534) = *(unsigned int *)(&lbl_8317741C + param_2);
    *(unsigned int *)(param_1 + 0x5538) = *(unsigned int *)(param_2 + -0x7ce88be0);
  }
  fn_82CC0A18();
  return;
}


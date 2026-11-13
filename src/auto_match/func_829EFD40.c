extern unsigned int lbl_8315C880;
extern unsigned int lbl_8315C890;
extern unsigned int lbl_8315C8A0;
extern unsigned int lbl_8315C8B0;
extern unsigned int lbl_8315C8C0;


unsigned __int64 fn_829EFD40(unsigned int *param_1)

{
  if (param_1 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_1 = lbl_8315C880;
  param_1[1] = lbl_8315C890;
  param_1[2] = lbl_8315C8A0;
  param_1[3] = lbl_8315C8B0;
  param_1[4] = lbl_8315C8C0;
  return 0;
}


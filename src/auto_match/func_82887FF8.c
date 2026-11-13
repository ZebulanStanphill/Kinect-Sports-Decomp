extern int fn_82F672D8();
extern unsigned int lbl_83213E4C;
extern unsigned int lbl_83213E54;


void fn_82887FF8(int param_1,unsigned __int64 param_2)

{
  if ((-1 < param_1) && (param_1 < lbl_83213E4C)) {
    fn_82F672D8(param_1 * 0x41 + lbl_83213E54,param_2,0x40);
    *(unsigned char *)(param_1 * 0x41 + lbl_83213E54 + 0x40) = 0;
  }
  return;
}


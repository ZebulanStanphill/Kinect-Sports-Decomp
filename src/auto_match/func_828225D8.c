extern unsigned int lbl_83156E7C;


void fn_828225D8(unsigned char param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  lbl_83156E7C = (((param_1 & 0xff) << 8 | param_2 & 0xff) << 8 | param_3 & 0xff) << 8 |
                 param_4 & 0xff;
  return;
}


extern unsigned int lbl_83156E70;


unsigned char fn_828116B8(int param_1,unsigned int param_2)

{
  return (&lbl_83156E70)[param_2 & 7] & *(unsigned char *)((param_2 >> 3) + param_1);
}


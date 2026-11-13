extern unsigned char lbl_821878B0;


unsigned int fn_8308A2D0(int param_1,unsigned int param_2)

{
  return *(unsigned int *)(((int)param_2 >> 5) * 4 + param_1) &
         *(unsigned int *)(&lbl_821878B0 + (param_2 & 0x1f) * 4);
}


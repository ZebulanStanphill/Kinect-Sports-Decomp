double fn_8306ED98(void)

{
  float fVar1;
  float *pfVar2;
  int in_r0;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  float afStack_10 [4];
  
  fVar1 = in_register_00010010 * in_register_00010020 + in_register_00010014 * in_register_00010024
          + in_register_00010018 * in_register_00010028;
  pfVar2 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *pfVar2 = fVar1;
  pfVar2[1] = fVar1;
  pfVar2[2] = fVar1;
  pfVar2[3] = fVar1;
  return (double)afStack_10[0];
}


extern int fn_82292780();


unsigned char * fn_828778E8(unsigned char *param_1,float param_2)

{
  *param_1 = 1;
  fn_82292780(param_1 + 4);
  *(float *)(param_1 + 0x28) = (float)param_2;
  return param_1;
}


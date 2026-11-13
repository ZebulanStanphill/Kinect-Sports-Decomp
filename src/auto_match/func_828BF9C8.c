extern int fn_82230360();


unsigned char * fn_828BF9C8(unsigned char *param_1)

{
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  fn_82230360(param_1,"Party QoS message",0x11);
  return param_1;
}


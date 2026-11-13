extern int fn_82230360();


unsigned char * fn_828DA888(unsigned char *param_1)

{
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  fn_82230360(param_1,"SyncTimeMsg_c",0xd);
  return param_1;
}


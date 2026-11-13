extern int fn_8267B890();
extern int fn_826C35B8();


unsigned char * fn_82695598(unsigned char *param_1,int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  *param_1 = 8;
  uVar1 = fn_8267B890(*(unsigned int *)(*param_2 + 0x288),0x34,0);
  uVar2 = uVar1 != 0 ? fn_826C35B8(uVar1,param_2,param_3) : 0;
  *(unsigned int *)(param_1 + 4) = uVar2;
  param_1[0xc] = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  return param_1;
}


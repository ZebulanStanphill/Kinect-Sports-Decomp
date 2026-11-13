typedef struct Bytes_828802F8 { unsigned char b[8]; } Bytes_828802F8;
extern void *memcpy(void *,const void *,unsigned);


unsigned int *
fn_828802F8(unsigned int *param_1,unsigned int *param_2,const void *param_3,int param_4,
             unsigned char param_5)

{
  unsigned char *puVar1;
  unsigned char *puVar2;
  int lVar3;
  
  *(unsigned char *)(param_1 + 1) = param_5;
  *param_1 = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  memcpy(param_1 + 6,param_3,0x24);
  *(Bytes_828802F8 *)((char *)param_1 + 0x3c) = *(Bytes_828802F8 *)param_4;
  return param_1;
}


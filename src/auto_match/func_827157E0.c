extern void *memcpy(void *,const void *,unsigned);
typedef struct Bytes_827157E0 { unsigned char data[32]; } Bytes_827157E0;


int * fn_827157E0(int *param_1,int *param_2)

{
  unsigned int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  *param_1 = *param_2;
  *(float *)(param_1+1) = *(float *)(param_2+1);
  *(float *)(param_1+2) = *(float *)(param_2+2);
  *(float *)(param_1+3) = *(float *)(param_2+3);
  *(float *)(param_1+4) = *(float *)(param_2+4);
  *(float *)(param_1+5) = *(float *)(param_2+5);
  *(float *)(param_1+6) = *(float *)(param_2+6);
  *(Bytes_827157E0 *)(param_1+7)=*(Bytes_827157E0 *)(param_2+7);
  param_1[0xf] = param_2[0xf];
  *(unsigned short *)(param_1 + 0x10) = *(unsigned short *)(param_2 + 0x10);
  param_1[0x11] = param_2[0x11];
  *(unsigned char *)(param_1 + 0x12) = *(unsigned char *)(param_2 + 0x12);
  return param_1;
}


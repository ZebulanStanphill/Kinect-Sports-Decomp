extern void *memcpy(void *d, const void *s, unsigned int n);
extern unsigned int lbl_8216DA40;


unsigned int * fn_82FBA708(unsigned int *param_1,int param_2)

{
  *param_1 = &lbl_8216DA40;
  memcpy(param_1 + 1,(void *)(param_2 + 4),0x44);
  *(unsigned char *)(param_1 + 0x12) = 1;
  *(unsigned char *)((int)param_1 + 0x49) = 1;
  *(unsigned char *)((int)param_1 + 0x4a) = 1;
  return param_1;
}


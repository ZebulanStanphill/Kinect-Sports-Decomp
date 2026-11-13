extern int fn_83004190();
extern int fn_8300A010();
extern unsigned int uStack_1a;


unsigned __int64 fn_8300A720(int param_1,int *param_2)

{
  char cVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  float *pfVar4;
  float fVar5;
  unsigned short uStack_1a;
  
  pfVar4 = (float *)*param_2;
  *param_2 = (int)(pfVar4 + 1);
  fn_83004190((double)*pfVar4,param_1 + 0x2c);
  fVar5 = *(float *)*param_2;
  *param_2 = (int)((float *)*param_2 + 1);
  fn_83004190((double)fVar5,param_1 + 0x2e);
  fVar5 = *(float *)*param_2;
  *param_2 = (int)((float *)*param_2 + 1);
  uStack_1a = (unsigned short)(int)fVar5;
  *(unsigned short *)(param_1 + 0x30) = uStack_1a;
  pfVar4 = (float *)*param_2;
  *param_2 = (int)(pfVar4 + 1);
  uStack_1a = ((((unsigned __int64)(uStack_1a)) & (~(((unsigned __int64)0xFF) << 8))) | ((((unsigned __int64)((unsigned char)(__int64)*pfVar4)) & ((unsigned __int64)0xFF)) << 8));
  *(unsigned char *)(param_1 + 0x3c) = (unsigned char)uStack_1a;
  cVar1 = *(char *)*param_2;
  *param_2 = (int)((char *)*param_2 + 1);
  *(unsigned char *)(param_1 + 0x3d) = (cVar1 != '\0') << 7 | *(unsigned char *)(param_1 + 0x3d) & 0x7f;
  uVar3 = *(unsigned short *)*param_2;
  *param_2 = (int)((unsigned short *)*param_2 + 1);
  *(unsigned short *)(param_1 + 0x32) = uVar3;
  *(unsigned short *)(param_1 + 0x9e) = uVar3;
  bVar2 = *(unsigned char *)*param_2;
  *param_2 = (int)((unsigned char *)*param_2 + 1);
  *(unsigned char *)(param_1 + 0x3d) = (bVar2 & 1) << 5 | *(unsigned char *)(param_1 + 0x3d) & 0xdb | 4;
  cVar1 = *(char *)*param_2;
  *param_2 = (int)((char *)*param_2 + 2);
  if (cVar1 != '\0') {
    fn_8300A010(param_1);
  }
  return 1;
}


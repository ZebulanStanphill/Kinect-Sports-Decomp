typedef struct Interface_82DFC048 {unsigned *vt;} Interface_82DFC048;


void fn_82DFC048(int param_1,float param_2,int param_3)

{
  unsigned *iVar1;
  
  *(unsigned char *)(param_3 + 0xc) = *(unsigned char *)(*(int *)(param_1 + 0x1c) + 0x20);
  *(unsigned char *)(param_3 + 0xd) = *(unsigned char *)(param_1 + 0xcc);
  *(unsigned char *)(param_3 + 0xe) = *(unsigned char *)(param_1 + 0xcd);
  *(unsigned char *)(param_3 + 0xf) = *(unsigned char *)(param_1 + 0xce);
  *(float *)(param_3 + 0x10) = *(float *)(param_1 + 0xd0);
  { int obj=*(int *)(param_1+44); iVar1 = *(unsigned **)*(int *)(param_1+44);
  (*(void (**)(int,float,int,int))((int)iVar1+12))(*(int *)(param_1+44),param_2,param_1,param_3);
  }
  *(unsigned char *)(param_1 + 0xcc) = *(unsigned char *)(param_3 + 0xd);
  *(unsigned char *)(param_1 + 0xcd) = *(unsigned char *)(param_3 + 0xe);
  *(unsigned char *)(param_1 + 0xce) = *(unsigned char *)(param_3 + 0xf);
  *(float *)(param_1 + 0xd0) = *(float *)(param_3 + 0x10);
  return;
}


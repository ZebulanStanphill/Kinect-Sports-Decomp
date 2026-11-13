extern unsigned int *auStack_10;
extern int fn_8303A888();
extern unsigned int lbl_8217BA98;


void fn_8303ADB0(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  float fVar2;
  unsigned int auStack_10 [4];
  
  auStack_10[0] = *param_1;
  if (*(char *)(param_2 + 0x21) == '\0') {
    fn_8303A888(param_3,param_2,auStack_10,*(unsigned short *)((int)param_1 + 0xe));
  }
  fVar2 = lbl_8217BA98;
  iVar1 = (int)param_3;
  *(float *)(iVar1 + 8) = (*(float *)(iVar1 + 8) + lbl_8217BA98) - lbl_8217BA98;
  *(float *)(iVar1 + 0xc) = (*(float *)(iVar1 + 0xc) + fVar2) - fVar2;
  return;
}


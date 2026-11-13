extern int fn_8303A888();
extern unsigned int iStack_10;
extern unsigned int iStack_c;
extern unsigned int lbl_8217BA98;


void fn_8303AE20(int *param_1,int param_2,__int64 param_3)

{
  int iVar1;
  float fVar2;
  struct { int first; int second; } stack_pair_10;

  
  stack_pair_10.first = *param_1;
  stack_pair_10.second = (unsigned int)*(unsigned short *)(param_1 + 3) * 4 + stack_pair_10.first;
  if (*(char *)(param_2 + 0x21) == '\0') {
    fn_8303A888(param_3,param_2,&stack_pair_10.first,*(unsigned short *)((int)param_1 + 0xe));
    fn_8303A888(param_3 + 0x10);
  }
  fVar2 = lbl_8217BA98;
  iVar1 = (int)param_3;
  *(float *)(iVar1 + 8) = (*(float *)(iVar1 + 8) + lbl_8217BA98) - lbl_8217BA98;
  *(float *)(iVar1 + 0xc) = (*(float *)(iVar1 + 0xc) + fVar2) - fVar2;
  *(float *)(iVar1 + 0x18) = (*(float *)(iVar1 + 0x18) + fVar2) - fVar2;
  *(float *)(iVar1 + 0x1c) = (*(float *)(iVar1 + 0x1c) + fVar2) - fVar2;
  return;
}


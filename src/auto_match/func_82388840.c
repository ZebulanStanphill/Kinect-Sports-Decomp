extern float lbl_821955F0;
extern unsigned int lbl_821CA460;


void fn_82388840(int param_1,int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  float fVar1;
  unsigned int uVar2;
  
  fVar1 = lbl_821CA460;
  uVar2 = *(int *)(param_1 + 0x44) * 0x19660d + 0x3c6ef35f;
  *(unsigned int *)(param_1 + 0x44) = uVar2;
  uVar2 = (unsigned int)(((float)(uVar2 & 0x7fffff | 0x3f800000) - fVar1) * lbl_821955F0 <
                *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x260) + 0x1a8));
  *param_3 = uVar2;
  *param_2 = ((unsigned int)LZCOUNT(uVar2) >> 5 ^ 1) + 0x13;
  *param_4 = 0;
  return;
}


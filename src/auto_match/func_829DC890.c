extern unsigned int *auStack_98;
extern unsigned int fStack_80;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_824DCB30();
extern int fn_829D3900();
extern float lbl_82005344;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


unsigned __int64
fn_829DC890(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int *param_4,int *param_5,
             unsigned int *param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs43 [16];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned short auStack_98 [4];
  struct { float first; float second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  float fStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  
  iVar1 = lbl_832179FC;
  uStack_88 = lbl_821AAD20;
  uStack_78 = lbl_821AAD20;
  stack_pair_90.first = *(float *)(lbl_832179FC + 0x8f094);
  stack_pair_90.second = -*(float *)(lbl_832179FC + 0x8f098);
  fStack_80 = -stack_pair_90.first;
  uStack_84 = 0;
  uStack_7c = *(unsigned int *)(lbl_832179FC + 0x8f09c);
  altv207_13(in_vs32,in_vs39);
  fn_824DCB30(&uStack_a0,&uStack_9c,auStack_98,param_4,&stack_pair_90.first);
  altv207_13(in_vs32,in_vs43);
  fn_824DCB30(&stack_pair_90.first,&stack_pair_90.second,&uStack_88);
  piVar2 = param_4 + 1;
  fn_829D3900(2,param_3,uStack_a0,uStack_9c,auStack_98[0],param_4,piVar2);
  piVar4 = param_4 + 3;
  piVar3 = param_4 + 2;
  fn_829D3900(2,param_3,stack_pair_90.first,stack_pair_90.second,(((unsigned __int64)(uStack_88) >> 0) & 0xFFFF),piVar3,piVar4);
  if ((*param_4 < param_4[2]) && (*piVar2 < *piVar4)) {
    *param_5 = (int)((float)(__int64)(param_4[2] - *param_4) /
                    ((*(float *)(iVar1 + 0x8f094) / *(float *)(iVar1 + 0x8f090)) * lbl_82005344));
    iVar1 = (int)((float)(__int64)(*piVar4 - *piVar2) /
                 ((*(float *)(iVar1 + 0x8f09c) + *(float *)(iVar1 + 0x8f098)) /
                 *(float *)(iVar1 + 0x8f090)));
    param_5[1] = iVar1;
    if ((0 < *param_5) && (0 < iVar1)) {
      if (*param_4 < 0) {
        *param_6 = *param_6 | 0x80;
        *param_4 = 0;
      }
      if (*piVar2 < 0) {
        *piVar2 = 0;
      }
      if (*(int *)(param_2 + 4) < *piVar3) {
        *param_6 = *param_6 | 0x100;
        *piVar3 = *(int *)(param_2 + 4);
      }
      if (*(int *)(param_2 + 8) <= *piVar4) {
        *piVar4 = *(int *)(param_2 + 8);
      }
      if (*param_5 <= *piVar3 - *param_4) {
        if (param_5[1] <= *piVar4 - *piVar2) {
          if (*piVar4 < param_5[1] << 1) {
            *param_6 = *param_6 | 0x200;
          }
          return 0;
        }
      }
    }
  }
  return 0xffffffff80004005;
}


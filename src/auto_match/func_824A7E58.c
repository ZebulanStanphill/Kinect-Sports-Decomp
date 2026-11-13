#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_30;
extern int fn_824A7F80();
extern int fn_824A7FF8();
extern int fn_824A8070();
extern int fn_824A8118();
extern unsigned int uStack_50;


void fn_824A7E58(int param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  float *pfVar3;
  int in_r0;
  unsigned __int64 uVar4;
  float in_register_00010440;
  float in_register_00010444;
  float in_register_00010448;
  float in_register_00010460;
  float in_register_00010464;
  float in_register_00010468;
  float in_register_00010470;
  float in_register_00010474;
  float in_register_00010478;
  float in_register_00010490;
  float in_register_00010494;
  float in_register_00010498;
  unsigned __int64 uStack_50;
  int aiStack_48 [6];
  unsigned int auStack_30 [6];
  
  fn_824A7F80(aiStack_48);
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = in_register_00010470 * 0.0 + *(float *)(uVar2 + 4) * in_register_00010474 +
          *(float *)(uVar2 + 8) * in_register_00010478;
  pfVar3 = (float *)((int)auStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  uStack_50 = CONCAT44(3,auStack_30[0]);
  fn_824A8070(aiStack_48,&uStack_50);
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = in_register_00010440 * 0.0 + *(float *)(uVar2 + 4) * in_register_00010444 +
          *(float *)(uVar2 + 8) * in_register_00010448;
  pfVar3 = (float *)((int)auStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  uStack_50 = CONCAT44(4,auStack_30[0]);
  fn_824A8070(aiStack_48,&uStack_50);
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = in_register_00010460 * 0.0 + *(float *)(uVar2 + 4) * in_register_00010464 +
          *(float *)(uVar2 + 8) * in_register_00010468;
  pfVar3 = (float *)((int)auStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  uStack_50 = CONCAT44(2,auStack_30[0]);
  fn_824A8070(aiStack_48,&uStack_50);
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = in_register_00010490 * 0.0 + *(float *)(uVar2 + 4) * in_register_00010494 +
          *(float *)(uVar2 + 8) * in_register_00010498;
  pfVar3 = (float *)((int)auStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  uStack_50 = CONCAT44(1,auStack_30[0]);
  fn_824A8070(aiStack_48,&uStack_50);
  fn_824A8118(aiStack_48);
  uVar4 = *(unsigned __int64 *)(*(int *)(aiStack_48[0] + 4) + 8);
  uStack_50 = ((((unsigned __int64)(uStack_50)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  if (*(float *)(param_1 + 0x48) < (((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF)) {
    uStack_50 = ((((unsigned __int64)(uStack_50)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)uVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    *(unsigned int *)(param_1 + 0x5c) = (((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF);
  }
  uStack_50 = uVar4;
  fn_824A7FF8(aiStack_48);
  return;
}


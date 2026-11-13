typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_30;
extern int fn_8239E318();
extern int fn_8239E540();
extern int fn_8239EAF8();
extern int fn_8239F668();
extern int fn_8239F7A8();
extern int fn_8239FA00();
extern int fn_8239FAD8();
extern int fn_82570840();
extern int fn_825709D8();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D2980;
extern unsigned int lbl_831D2AC0;
extern unsigned int lbl_831D2AC4;
extern unsigned int lbl_831D2AC8;
extern unsigned int lbl_831D2ACC;
extern unsigned int lbl_831D2AD0;
extern unsigned int lbl_831D2AD4;
extern unsigned int lbl_831D2AD8;
extern unsigned int lbl_831D2ADC;
extern unsigned int lbl_831D2AE0;
extern unsigned int lbl_831D2AE4;
extern unsigned int lbl_831D2AE8;
extern unsigned int lbl_831D2AEC;
extern unsigned int lbl_831D2AF0;
extern unsigned int lbl_831D2AF4;
extern unsigned int lbl_831D2AF8;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_8239F4A8(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  float fVar3;
  unsigned __int64 in_r0;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned char auStack_30 [24];
  
  fn_8239FAD8();
  iVar1 = *(int *)(param_2 + 0x28c);
  if (iVar1 == 1) {
    fn_8239F668(param_2);
    goto LAB_8239f5a4;
  }
  if (iVar1 == 2) {
    *(unsigned int *)(param_2 + 0x244) = lbl_831D2AC0;
    *(unsigned int *)(param_2 + 0x248) = lbl_831D2AC4;
    *(unsigned int *)(param_2 + 0x24c) = lbl_831D2AC8;
    *(unsigned int *)(param_2 + 0x250) = lbl_831D2ACC;
    *(unsigned int *)(param_2 + 0x254) = lbl_831D2AD0;
    *(unsigned int *)(param_2 + 600) = lbl_831D2AD4;
    *(unsigned int *)(param_2 + 0x25c) = lbl_831D2AD8;
    *(unsigned int *)(param_2 + 0x260) = lbl_831D2ADC;
    *(unsigned int *)(param_2 + 0x264) = lbl_831D2AE0;
    *(unsigned int *)(param_2 + 0x268) = lbl_831D2AE4;
    *(unsigned int *)(param_2 + 0x26c) = lbl_831D2AE8;
    *(unsigned int *)(param_2 + 0x270) = lbl_831D2AEC;
    *(unsigned int *)(param_2 + 0x274) = lbl_831D2AF0;
    *(unsigned int *)(param_2 + 0x278) = lbl_831D2AF4;
    *(unsigned int *)(param_2 + 0x27c) = lbl_831D2AF8;
    *(unsigned char **)(param_2 + 0x284) = &lbl_831D2980;
  }
  else {
    if (iVar1 == 3) {
      fn_8239F7A8();
      goto LAB_8239f5a4;
    }
    if (iVar1 == 4) {
      fn_8239FA00();
      goto LAB_8239f5a4;
    }
    fn_8239E318();
  }
  fn_8239E540(param_2);
LAB_8239f5a4:
  iVar1 = *(int *)(param_2 + 0x2c4);
  if (iVar1 == -1) {
    if ((*(int *)(param_2 + 0x2b0) != 0) && (*(int *)(param_2 + 0x29c) != 0)) {
      uVar4 = fn_82570840(*(int *)(param_2 + 0x29c),param_2 + 0x2b0,1,param_2 + 0x20);
      *(unsigned int *)(param_2 + 0x2c4) = uVar4;
    }
  }
  else {
    fVar3 = lbl_821CA460;
    if (*(int *)(param_2 + 0x28c) == 0) {
      fVar3 = ltcg_pool_0_0f;
    }
    uVar4 = *(unsigned int *)(param_2 + 0x29c);
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
    puVar2 = (unsigned int *)((unsigned int)(auStack_30 + (int)in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010000;
    puVar2[1] = in_ACC;
    puVar2[2] = in_register_00010008;
    puVar2[3] = in_vr0;
    fn_825709D8((double)fVar3,uVar4,iVar1,ZEXT48(&stack0x00000000) - 0x30);
  }
  uVar5 = 0xffffffff831d29b0;
  if (*(int *)(param_2 + 0x28c) != 4) {
    uVar5 = 0xffffffff831d2990;
  }
  fn_8239EAF8(param_1,param_2,uVar5);
  return;
}


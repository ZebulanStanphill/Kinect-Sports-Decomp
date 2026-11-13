extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82368CD8();
extern unsigned int lbl_821CA460;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82315140(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_60 [8];
  unsigned char auStack_58 [24];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned int uStack_20;
  unsigned char uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  uStack_18 = lbl_821CA460;
  uStack_14 = 3;
  uStack_20 = 6;
  uStack_1c = 0x83;
  fn_82368CD8(uVar1,auStack_40,auStack_30,auStack_60,auStack_58);
  return;
}


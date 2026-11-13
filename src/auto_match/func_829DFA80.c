extern unsigned int *auStack_15c;
extern unsigned int *auStack_160;
extern unsigned int *auStack_200;
extern unsigned int *auStack_240;
extern unsigned int *auStack_280;
extern unsigned int *auStack_290;
extern int fn_824DCB30();
extern int fn_829D3900();
extern int fn_829D4800();
extern int fn_829DE2A8();
extern int fn_829DE440();
extern int fn_829DF810();
extern int fn_82A1F2F8();
extern int fn_82A94368();
extern unsigned int iStack_29c;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_2a0;


unsigned __int64
fn_829DFA80(double param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,int param_8,unsigned __int64 param_9)

{
  unsigned __int64 in_r0;
  int iVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned char uVar4;
  __int64 lVar5;
  unsigned char *puVar6;
  unsigned int *puVar7;
  unsigned char in_vs43 [16];
  unsigned char in_vs56 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  struct { unsigned int first; int second; } stack_pair_2a0;

  unsigned char auStack_290 [16];
  unsigned char auStack_280 [64];
  unsigned char auStack_240 [64];
  unsigned char auStack_200 [160];
  unsigned char auStack_160 [4];
  unsigned int auStack_15c [55];
  
  fn_82A94368(*(unsigned int *)(param_3 + 0x14),0,auStack_280);
  fn_82A94368(*(unsigned int *)(param_5 + 0x14),0,auStack_240);
  puVar7 = auStack_15c;
  puVar6 = auStack_200;
  lVar5 = 0x14;
  do {
    fn_824DCB30(puVar7 + -1,puVar7,puVar7 + 1);
    fn_829D3900(*(unsigned int *)(param_3 + 0x10),param_3 + 0x1c,puVar7[-1],*puVar7,
                 *(unsigned short *)(puVar7 + 1),puVar6,puVar6 + 4);
    iVar1 = (int)in_r0;
    lVar5 = lVar5 + -1;
    puVar6 = puVar6 + 8;
    puVar7 = puVar7 + 3;
  } while (lVar5 != 0);
  stack_pair_2a0.second = lbl_832179FC + 0x8f3e8;
  stack_pair_2a0.first = fn_82A1F2F8();
  cVar3 = fn_829DE2A8(auStack_200,auStack_280,auStack_290,param_9);
  if (cVar3 == '\0') {
    fn_829D4800(&stack_pair_2a0.first);
    uVar2 = 0xffffffff80004005;
  }
  else {
    fn_829DE440(auStack_280,param_4,auStack_290,param_8 + 0x10,0,0);
    fn_829D4800(&stack_pair_2a0.first);
    stack_pair_2a0.second = lbl_832179FC + 0x8f3f8;
    stack_pair_2a0.first = fn_82A1F2F8();
    uVar4 = fn_829DF810(auStack_160,auStack_280,param_4,param_3 + 0x1c,auStack_240,param_6,
                              auStack_290,param_8 + 0x2cc);
    *(unsigned char *)(param_8 + 0x588) = uVar4;
    fn_829D4800(&stack_pair_2a0.first);
    uVar2 = 0;
    altv207_13(in_vs56,in_vs43);
    *(float *)(param_8 + 0x58c) = (float)param_1;
    puVar7 = (unsigned int *)(iVar1 + param_8 & 0xfffffff0);
    *puVar7 = in_register_000103f0;
    puVar7[1] = in_register_000103f4;
    puVar7[2] = in_register_000103f8;
    puVar7[3] = in_vr63;
  }
  return uVar2;
}


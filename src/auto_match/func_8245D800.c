extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_8263C910();
extern int fn_828F0DD0();
extern int memcpy();
extern unsigned int lbl_832765A0;
extern unsigned int lbl_832765A4;
extern unsigned int uRam8327659c;
extern unsigned int uRam832765a8;
extern unsigned int uRam832765ac;
extern unsigned int uRam832765b0;
extern unsigned int uRam832765b4;
extern unsigned int uStack_df0;
extern unsigned int uStack_df4;
extern unsigned int uStack_df8;
extern unsigned int uStack_dfa;
extern unsigned int uStack_dfb;
extern unsigned int uStack_dfc;
extern unsigned int uStack_e00;
extern unsigned int uStack_e02;
extern unsigned int uStack_e04;
extern unsigned int uStack_e06;
extern unsigned int uStack_e07;
extern unsigned int uStack_e08;
extern unsigned int uStack_e0c;
extern unsigned int uStack_e0e;
extern unsigned int uStack_e10;
extern unsigned int uStack_e14;
extern unsigned int uStack_e18;
extern unsigned int uStack_e1c;
extern unsigned int uStack_e20;


unsigned __int64 fn_8245D800(void)

{
  char cVar1;
  unsigned short uVar2;
  __int64 lVar3;
  char *pcVar4;
  int *apiStack_e30 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_e20;

  unsigned int uStack_e18;
  unsigned int uStack_e14;
  unsigned short uStack_e10;
  unsigned short uStack_e0e;
  unsigned int uStack_e0c;
  unsigned char uStack_e08;
  unsigned char uStack_e07;
  unsigned char uStack_e06;
  unsigned short uStack_e04;
  unsigned short uStack_e02;
  unsigned int uStack_e00;
  unsigned char uStack_dfc;
  unsigned char uStack_dfb;
  unsigned char uStack_dfa;
  unsigned int uStack_df8;
  unsigned int uStack_df4;
  unsigned int uStack_df0;
  char acStack_de0 [224];
  char acStack_d00 [784];
  char acStack_9f0 [1024];
  char acStack_5f0 [1520];
  
  memcpy(acStack_de0,0xffffffff821baed8,0xd6);
  memcpy(acStack_5f0,0xffffffff821bafb0,0x5bc);
  memcpy(acStack_9f0,0xffffffff821bb570,0x3f6);
  memcpy(acStack_d00,0xffffffff821bb968,0x304);
  stack_pair_e20.first = 0;
  stack_pair_e20.second = 0xffffffff;
  uStack_e18 = 0;
  uStack_e14 = 0;
  uRam832765b4 = fn_8263C910(0x140,0x1e0,0x18280186,0,&stack_pair_e20.first);
  stack_pair_e20.first = 0xff0000;
  uVar2 = (unsigned short)uStack_e18;
  uStack_e0c = 0x1a23a6;
  uStack_e00 = 0x1a23a6;
  uStack_e18 = (unsigned int)(uVar2 & 0xff);
  uStack_e08 = 0;
  uStack_e0e = 0;
  uStack_e10 = 0;
  uStack_e07 = 0;
  uStack_e06 = 0;
  uStack_dfc = 0;
  uStack_e02 = 0x10;
  uStack_e04 = 0;
  uStack_dfb = 5;
  uStack_dfa = 0;
  uStack_df4 = 0xffffffff;
  uStack_df0 = uStack_e18;
  uStack_df8 = 0xff0000;
  lbl_832765A0 = fn_82631BF8(&uStack_e10);
  pcVar4 = acStack_de0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_828F0DD0(acStack_de0,pcVar4 + (-1 - (int)acStack_de0),0,0,0xffffffff821b6080,
                    0xffffffff821bbc6c,0,apiStack_e30);
  (**(int (***)())(*apiStack_e30[0] + 0xc))();
  lbl_832765A4 = fn_82631830();
  (**(int (***)())(*apiStack_e30[0] + 8))(apiStack_e30[0]);
  pcVar4 = acStack_5f0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_828F0DD0(acStack_5f0,pcVar4 + (-1 - (int)acStack_5f0),0,0,0xffffffff821bbc7c,
                    0xffffffff821bbc74,0,apiStack_e30);
  (**(int (***)())(*apiStack_e30[0] + 0xc))();
  uRam832765a8 = fn_82631488();
  (**(int (***)())(*apiStack_e30[0] + 8))(apiStack_e30[0]);
  pcVar4 = acStack_9f0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_828F0DD0(acStack_9f0,pcVar4 + (-1 - (int)acStack_9f0),0,0,0xffffffff821bbc7c,
                    0xffffffff821bbc74,0,apiStack_e30);
  (**(int (***)())(*apiStack_e30[0] + 0xc))();
  uRam832765ac = fn_82631488();
  (**(int (***)())(*apiStack_e30[0] + 8))();
  pcVar4 = acStack_d00;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_828F0DD0(acStack_d00,pcVar4 + (-1 - (int)acStack_d00),0,0,0xffffffff821bbc7c,
                    0xffffffff821bbc74,0,apiStack_e30);
  (**(int (***)())(*apiStack_e30[0] + 0xc))();
  lVar3 = fn_82631488();
  uRam832765b0 = (unsigned int)lVar3;
  (**(int (***)())(*apiStack_e30[0] + 8))();
  uRam8327659c = 1;
  return -(unsigned __int64)(lVar3 == 0) & 0xffffffff8007000e;
}


extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229AE10();
extern int fn_8266F600();
extern int fn_82672C20();
extern unsigned int iStack_b4;
extern unsigned int lbl_82195518;
extern unsigned int uStack_78;


void fn_82291F90(unsigned __int64 param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  unsigned char auStack_b8 [4];
  int iStack_b4;
  unsigned char auStack_b0 [4];
  int aiStack_ac [3];
  unsigned char auStack_a0 [8];
  double dStack_98;
  unsigned char auStack_90 [8];
  unsigned char *puStack_88;
  unsigned char auStack_80 [8];
  unsigned __int64 uStack_78;
  unsigned char auStack_70 [8];
  double dStack_68;
  unsigned char auStack_60 [8];
  double dStack_58;
  unsigned char auStack_50 [80];
  
  piVar2 = aiStack_ac;
  lVar4 = 5;
  do {
    piVar2[3] = 0;
    piVar2 = piVar2 + 4;
    *piVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82273CD8(auStack_a0,3);
  dStack_98 = (double)(__int64)param_2;
  fn_82273CD8(auStack_80,3);
  uStack_78 = lbl_82195518;
  fn_82273CD8(auStack_70,3);
  dStack_68 = (double)(__int64)param_3;
  fn_82273CD8(auStack_60,3);
  dStack_58 = (double)(__int64)param_4;
  if ((param_5 & 0xffffffff) == 0) {
    fn_82273CD8(auStack_90,1);
  }
  else {
    puVar1 = (unsigned int *)fn_8229AE10(auStack_b0,param_1);
    fn_8266F600(*puVar1,param_5,auStack_50,0x20);
    if (aiStack_ac[0] != 0) {
      fn_822315A0();
    }
    fn_82273CD8(auStack_90,4);
    puStack_88 = auStack_50;
  }
  puVar1 = (unsigned int *)fn_8229AE10(auStack_b8,param_1);
  fn_82672C20(*puVar1,0xffffffff821aa244,auStack_a0,5);
  if (iStack_b4 != 0) {
    fn_822315A0();
  }
  puVar3 = auStack_50;
  lVar4 = 4;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}


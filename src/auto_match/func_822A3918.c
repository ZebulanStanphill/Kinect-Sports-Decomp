extern unsigned int *auStack_40;
extern unsigned int *auStack_e0;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82517978();
extern int fn_822315A0();
extern int fn_822315A0();
extern unsigned int uStack_f0;


void fn_822A3918(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  unsigned int uStack_f0;
  int aiStack_ec [3];
  unsigned char auStack_e0 [80];
  unsigned char auStack_40 [64];

  piVar2 = aiStack_ec;
  lVar4 = 10;
  do {
    piVar2[3] = 0;
    piVar2 = piVar2 + 4;
    *piVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = auStack_e0;
  piVar2 = (int *)(param_2 + -4);
  lVar4 = 10;
  do {
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
    fn_82273CD8(puVar3,2);
    puVar3[8] = iVar1 == 1;
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 0x10;
  } while (lVar4 != 0);
  uStack_f0 = 0;
  aiStack_ec[0] = 0;
  fn_82517978(&uStack_f0,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),0);
  fn_822315A0(uStack_f0,0xffffffff821ac068,0,auStack_e0,10,1);
  if (aiStack_ec[0] != 0) {
    fn_822315A0();
  }
  uStack_f0 = 0;
  aiStack_ec[0] = 0;
  fn_82517978(&uStack_f0,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),0);
  fn_822315A0(uStack_f0,0xffffffff821ac088,0,0);
  if (aiStack_ec[0] != 0) {
    fn_822315A0();
  }
  puVar3 = auStack_40;
  lVar4 = 9;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

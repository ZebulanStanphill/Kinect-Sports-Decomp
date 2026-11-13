extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_826B3E08();
extern int fn_826FE738();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_8271E558(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  char *pcVar4;
  unsigned __int64 uVar3;
  char cVar6;
  int *piVar5;
  int *piVar7;
  __int64 lVar8;
  int aiStack_70 [4];
  char acStack_60 [16];
  int *piStack_50;
  char *pcStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = 0;
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  piVar5 = (int *)0x0;
  pcVar4 = (char *)fn_826957D0(param_1,0);
  if (*pcVar4 == '\x05') {
    acStack_60[0] = '\0';
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    fn_82696D38(aiStack_70,uVar3,uVar2,0xffffffffffffffff,0);
    piStack_50 = aiStack_70;
    pcStack_4c = acStack_60;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    cVar6 = fn_826B3E08(*(unsigned int *)(param_1 + 0x18),&piStack_50,0,0);
    lVar8 = (unsigned __int64)*(unsigned int *)(aiStack_70[0] + 8) - 1;
    *(int *)(aiStack_70[0] + 8) = (int)lVar8;
    if (lVar8 == 0) {
      fn_826944C8(aiStack_70[0]);
    }
    if (((cVar6 != '\0') && (acStack_60[0] == '\a')) &&
       (piVar5 = (int *)fn_82695370(acStack_60,*(unsigned int *)(param_1 + 0x18)),
       piVar5 != (int *)0x0)) {
      piVar5[1] = piVar5[1] + 1;
    }
    fn_82696330(acStack_60);
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    piVar5 = (int *)fn_82695370(uVar3,uVar2);
    if (piVar5 != (int *)0x0) {
      piVar5[1] = piVar5[1] + 1;
    }
  }
  if (piVar5 == (int *)0x0) {
    uVar3 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
    piVar7 = (int *)0x0;
  }
  else {
    cVar6 = (**(int (***)())(*piVar5 + 0xbc))(piVar5);
    if (cVar6 == '\0') goto LAB_8271e704;
    uVar3 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
    piVar7 = piVar5;
  }
  fn_826FE738(uVar3,piVar7);
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  puVar1[4] = 1;
  *puVar1 = 2;
LAB_8271e704:
  if (piVar5 != (int *)0x0) {
    fn_8267C498(piVar5);
  }
  return;
}


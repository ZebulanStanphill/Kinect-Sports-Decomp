extern unsigned int *auStack_1020;
extern unsigned int *auStack_1820;
extern unsigned int *auStack_820;
extern int fn_8229EC50();
extern int fn_8229ECE8();
extern int fn_8229EE18();
extern int fn_82358FD8();
extern int fn_82414950();
extern int fn_82528EE0();
extern unsigned int lbl_821939D8;
extern unsigned int lbl_821939DC;
extern unsigned int lbl_821939E0;
extern unsigned int lbl_821939E4;
extern unsigned int lbl_821939F0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824935B0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned char auStack_1820 [2048];
  unsigned char auStack_1020 [2048];
  unsigned char auStack_820 [2080];
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(iVar1 + 0x194);
  *(unsigned int *)(iVar2 + 0x200) = 5;
  *(unsigned int *)(iVar2 + 0x208) = 0;
  *(unsigned int *)(iVar2 + 0x2a4) = 1;
  fn_82414950(*(unsigned int *)(iVar1 + 0x2b50),0,0x1c);
  fn_82358FD8(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x40) + 0xd4) + 0x1c),auStack_1020,
                    0x400,lbl_821939F0);
  iVar1 = *(int *)(param_1 + 0x40);
  uVar3 = *(unsigned int *)(iVar1 + 0x2b48);
  if (uVar3 == 0) {
    if (*(int *)(iVar1 + 0x2b4c) == 0) {
      fn_8229EC50(*(unsigned int *)(param_2 + 0x5c),auStack_1020);
    }
    else {
      uVar5 = *(unsigned int *)(*(int *)(iVar1 + 0xd4) + 0x1c);
      if (*(int *)(iVar1 + 0x2b4c) == 1) {
        fn_82358FD8(uVar5,auStack_1820,0x400,lbl_821939E0);
        puVar6 = auStack_1820;
      }
      else {
        fn_82358FD8(uVar5,auStack_1820,0x400,lbl_821939E4);
        fn_82528EE0(auStack_820,0x400,auStack_1820,*(unsigned int *)(iVar1 + 0x2b4c));
        puVar6 = auStack_820;
      }
      fn_8229EE18(*(unsigned int *)(param_2 + 0x5c),auStack_1020,puVar6);
    }
  }
  else {
    puVar4 = lbl_821939DC;
    if ((uVar3 == 1) || (puVar4 = lbl_821939D8, uVar3 < 3)) {
      fn_82358FD8(*(unsigned int *)(*(int *)(iVar1 + 0xd4) + 0x1c),auStack_1820,0x400,puVar4);
      fn_8229ECE8(*(unsigned int *)(param_2 + 0x5c),auStack_1020,auStack_1820);
    }
  }
  return;
}


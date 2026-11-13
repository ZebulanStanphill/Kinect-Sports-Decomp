extern unsigned int *auStack_210;
extern int fn_82299AC8();
extern int fn_8229A000();
extern int fn_82358FD8();
extern int fn_82417F58();
extern int fn_8288B760();


void fn_8241F138(int *param_1)

{
  int iVar1;
  int uVar2;
  unsigned char auStack_210 [512];
  
  iVar1 = fn_82417F58();
  if (*(int *)(iVar1 + 0x24) != 0) {
    if (*(unsigned int *)(iVar1 + 0x168) != 0) {
      uVar2 = fn_8288B760(*(unsigned int *)(iVar1 + 0x168)) & 0xff;
    } else {
      uVar2 = *(int *)(iVar1 + 0x16c);
    }
    if ((uVar2 == 0) && (iVar1 = *param_1, *(int *)(iVar1 + 0x2b40) == 0)) {
      if (param_1 != *(int **)(iVar1 + 0x2b20)) {
        return;
      }
      iVar1 = *(int *)(iVar1 + 0xd4);
      fn_82358FD8(*(unsigned int *)(iVar1 + 0x1c),auStack_210,0x100,"spectator");
      fn_82299AC8(*(unsigned int *)(iVar1 + 0x20),auStack_210);
      return;
    }
  }
  if (param_1 == *(int **)(*param_1 + 0x2b20)) {
    fn_8229A000(*(unsigned int *)(*(int *)(*param_1 + 0xd4) + 0x20));
  }
  return;
}


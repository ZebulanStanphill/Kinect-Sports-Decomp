extern int fn_82645740();
extern int fn_826457A8();
extern int fn_8264D6C0();
extern int fn_82F68CC0();
extern int iRam83275d90;
extern unsigned int uRam83275b64;


unsigned __int64 fn_826518E0(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  
  if (*(int *)(param_1 + 0x4188) == *(int *)(param_1 + 0x5574)) {
    uVar1 = 1;
  }
  else {
    iVar2 = KeGetCurrentProcessType();
    if (iVar2 != 2) {
      if (*(int *)(param_1 + 0x5568) == 2) {
        if ((*(int *)(param_1 + 0x556c) != *(int *)(param_1 + 0x5570)) &&
           ((*(int *)(*(int *)(param_1 + 0x556c) * 0x10 + *(int *)(param_1 + 0x5560) + 0xc) == 0 ||
            (iVar2 = fn_826457A8(), iVar2 == 0)))) {
          fn_82F68CC0(0xffffffff83275db8,0xffffffff83275b68,0x1e0);
          uRam83275b64 = iRam83275d90;
          iVar2 = *(int *)(param_1 + 0x556c) * 0x10 + *(int *)(param_1 + 0x5560);
          if (*(int *)(iVar2 + 0xc) != 0) {
            fn_82645740();
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 4);
          fn_82F68CC0(0xffffffff83275b68,uVar4,0x1e0);
          fn_8264D6C0(uVar4,uVar4 + 0x1e0,0);
          iVar2 = *(int *)(param_1 + 0x556c);
          piVar3 = (int *)(*(int *)(param_1 + 0x5564) + iVar2 * 8);
          iRam83275d90 = piVar3[1] - *piVar3;
          if (iVar2 == 3) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar2 + 1;
          }
          *(int *)(param_1 + 0x556c) = iVar2;
          *(unsigned int *)(param_1 + 0x5574) = *(unsigned int *)(param_1 + 0x4188);
          return 1;
        }
      }
      else if (*(int *)(param_1 + 0x5568) == 0) {
        *(unsigned int *)(param_1 + 0x5568) = 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


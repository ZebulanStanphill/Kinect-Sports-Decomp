typedef unsigned char bool;
extern int fn_823AA970();
extern int fn_8288A398();
extern int fn_828E9D50();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned __int64 fn_828EA0D0(int, int);


void fn_828DD2D8(int param_1,int param_2)

{
  bool bVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  
  iVar3 = fn_828E9DA8(param_2);
  iVar4 = fn_828E9D90(param_2);
  if (iVar3 - iVar4 >= 0x20) {
    iVar3 = fn_828E9FF8(param_2,0x20);
  } else {
    iVar3 = 0;
  }
  iVar4 = fn_8288A398();
  bVar1 = iVar3 == *(int *)(iVar4 + 0x38);
  *(bool *)(param_1 + 0x90) = bVar1;
  if (bVar1) {
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 >= 0x40) {
    uVar2 = fn_828EA0D0(param_2,0x40);
  } else {
    uVar2 = 0;
  }
    *(unsigned __int64 *)(param_1 + 0x80) = uVar2;
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 >= 8) {
    uVar5 = fn_828E9FF8(param_2,8);
  } else {
    uVar5 = 0;
  }
    *(unsigned int *)(param_1 + 0x88) = uVar5;
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 >= 8) {
      uVar5 = fn_828E9FF8(param_2,8);
    } else {
      uVar5 = 0;
    }
    *(unsigned int *)(param_1 + 0x8c) = uVar5;
  }
  else {
    fn_828E9D50(param_2,fn_823AA970(param_2));
  }
  return;
}


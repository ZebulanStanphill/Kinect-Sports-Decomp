extern int fn_8284F9B8();
extern int fn_8284FA10();
extern int fn_8284FBD0();
extern int fn_8285A840();
extern int fn_8285A848();
extern int fn_8285A8F8();
extern int fn_8285C608();
extern unsigned int iStack_3c;


void fn_82850350(int param_1,int param_2)

{
  unsigned int iVar1;
  unsigned int uVar2;
  int iVar3;
  int lVar4;
  struct { int (*fn)(); int object; } callback;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_2 + 4);
  }
  else {
    iVar3 = 0;
  }
  uVar2 = *(unsigned int *)(iVar3 + 0x14);
  if (*(unsigned int *)(iVar3 + 0x10) == 0) {
    callback.fn = fn_8284F9B8;
    callback.object = param_1;
    fn_8285A8F8(iVar1,uVar2,&callback);
  }
  *(unsigned int *)(iVar3 + 0x10) = *(unsigned int *)(iVar3 + 0x10) + 1;
  fn_8284FBD0(iVar1,uVar2,param_1,param_2);
  lVar4 = 0;
  iVar3 = fn_8285A840(iVar1,uVar2);
  if (0 < iVar3) {
    do {
      fn_8285A848(iVar1,uVar2,lVar4);
      fn_8285C608(iVar1,uVar2);
      lVar4 = lVar4 + 1;
      iVar3 = fn_8285A840(iVar1,uVar2);
    } while ((int)lVar4 < iVar3);
  }
  fn_8284FA10(iVar1,uVar2,param_1,param_2);
  return;
}


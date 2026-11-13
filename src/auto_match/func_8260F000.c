extern int fn_82569980();
extern int fn_8262AA30();
extern int fn_8265C9E0();


void fn_8260F000(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  iVar3 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x10));
  if (iVar3 == -1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)((int)param_1 + 0xd8) + iVar3 * 0x30 + 0x10);
  }
  if ((iVar3 != 0) && (param_5 == 0)) {
    uVar1 = *(unsigned int *)(iVar3 + 0x4c);
    uVar2 = fn_8265C9E0(0x27150);
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8262AA30(uVar2,uVar1,iVar3,0,0);
    }
  }
  return;
}


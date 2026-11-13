extern int fn_822C69F0();
extern int fn_822C6D68();
extern int fn_822CA5B0();
extern int fn_8288B760();
extern int fn_82F68B7C();


void fn_8230D210(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  
  iVar1 = fn_82F68B7C(*(unsigned int *)(param_1 + 0xc));
  if (*(int *)(iVar1 + 0x168) == 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x16c);
  }
  else {
    uVar2 = fn_8288B760();
    uVar2 = uVar2 & 0xff;
  }
  if ((uVar2 == 0) && (*(int *)(iVar1 + 0x168) != 0)) {
    fn_822CA5B0();
  }
  else {
    lVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x114) + 0x50;
    fn_822C6D68(lVar3,iVar1 + 0x80,iVar1 + 0xc0);
    fn_822C69F0(lVar3,iVar1 + 0x80,iVar1 + 0xc0);
  }
  return;
}


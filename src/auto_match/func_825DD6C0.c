extern int fn_825DD5C8();
extern int fn_826214A8();
extern int fn_82621548();
extern int fn_82A1DD38();


void fn_825DD6C0(unsigned __int64 param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  
  uVar5 = 0;
  do {
    iVar2 = uVar5 + 0x95;
    iVar3 = uVar5 + 0xde;
    uVar5 = uVar5 + 1 & 0xff;
    *(unsigned int *)(iVar3 * 4 + param_3) = *(unsigned int *)(iVar2 * 4 + param_3);
  } while (uVar5 < 3);
  fn_82A1DD38(param_3 + 0x378,param_3 + 0x254,0x124);
  fn_82621548(param_1,param_3 + 0xd38);
  *(unsigned int *)(param_3 + 0x444) = *(unsigned int *)(param_3 + 0xd3c);
  fn_82621548(param_1,param_3 + 0xd60);
  fVar1 = *(float *)(param_3 + 0x178);
  *(unsigned int *)(param_3 + 0x3e0) = *(unsigned int *)(param_3 + 0xd64);
  if (fVar1 < *(float *)(param_3 + 0x29c)) {
    *(float *)(param_3 + 0x3c0) =
         (*(float *)(param_3 + 0x29c) - fVar1) * *(float *)(param_3 + 0xfbc) + fVar1;
  }
  if (*(int *)(param_3 + 0x824) == *(int *)(param_3 + 0x850)) {
    uVar5 = (unsigned int)*(unsigned char *)(param_3 + 0x820);
    if (uVar5 == *(unsigned char *)(param_3 + 0x84c)) goto LAB_825dd820;
    if (1 < *(unsigned char *)(param_3 + 0x820)) {
      uVar5 = 2;
    }
    *(char *)(param_3 + 0x820) = (char)uVar5;
    fn_825DD5C8(param_2,param_3,*(unsigned int *)((uVar5 + 0x95) * 4 + param_3),param_3 + 0x800);
    fn_82A1DD38(param_3 + 0x810,param_3 + 0x83c,0x10);
    uVar4 = 0x50;
    iVar3 = param_3 + 0xe0;
    iVar2 = param_3 + 0x90;
  }
  else {
    fn_825DD5C8(param_2,param_3,*(unsigned int *)((*(unsigned char *)(param_3 + 0x820) + 0x4c) * 4 + param_3)
                  ,param_3 + 0x800);
    fn_82A1DD38(param_3 + 0x810,param_3 + 0x83c,0x10);
    fn_82A1DD38(param_3 + 0x90,param_3 + 0xe0,0x50);
    uVar4 = 0x120;
    iVar3 = param_3 + 0x6e0;
    iVar2 = param_3 + 0x4a0;
  }
  fn_82A1DD38(iVar2,iVar3,uVar4);
LAB_825dd820:
  if (*(int *)(param_3 + 0xf1c) != 0) {
    fn_82A1DD38(param_3 + 0x810,param_3 + 0x83c,0x10);
    fn_82A1DD38(param_3 + 0x90,param_3 + 0xe0,0x50);
  }
  if (*(int *)(param_3 + 0xf28) != 0) {
    uVar5 = (unsigned int)*(unsigned char *)(param_3 + 0x84c);
    if (1 < *(unsigned char *)(param_3 + 0x84c)) {
      uVar5 = 2;
    }
    *(char *)(param_3 + 0x84c) = (char)uVar5;
    fn_825DD5C8(param_2,param_3,*(unsigned int *)((uVar5 + 0x95) * 4 + param_3),param_3 + 0x800);
    fn_82A1DD38(param_3 + 0x810,param_3 + 0x83c,0x10);
    fn_82A1DD38(param_3 + 0x90,param_3 + 0xe0,0x50);
    fn_82A1DD38(param_3 + 0x4a0,param_3 + 0x6e0,0x120);
  }
  uVar5 = (unsigned int)*(unsigned char *)(param_3 + 0x84c);
  if (1 < *(unsigned char *)(param_3 + 0x84c)) {
    uVar5 = 2;
  }
  *(char *)(param_3 + 0x84c) = (char)uVar5;
  iVar2 = *(int *)((uVar5 + 0x95) * 4 + param_3);
  iVar3 = iVar2;
  if (*(int *)(param_2 + 0x210) != 0) {
    iVar3 = *(int *)(param_2 + 0x210);
  }
  if (iVar3 != *(int *)(param_3 + 0x828)) {
    fn_825DD5C8(param_2,param_3,iVar3,param_3 + 0x82c);
    *(int *)(param_3 + 0x828) = iVar3;
    if ((*(int *)(param_2 + 0x210) != 0) || (*(int *)(param_3 + 0xf84) != 0)) {
      fn_825DD5C8(param_2,param_3,iVar2,param_3 + 0x800);
      fn_82A1DD38(param_3 + 0x810,param_3 + 0x83c,0x10);
    }
    *(unsigned int *)(param_3 + 0xf84) = (unsigned int)(*(int *)(param_2 + 0x210) != 0);
  }
  if (*(int *)(param_3 + 0xf30) != 0) {
    fn_82A1DD38(param_3 + 0x810,param_3 + 0x82c,0x10);
    fn_826214A8((double)*(float *)(param_3 + 0x834),param_3 + 0xc20);
    fn_826214A8((double)*(float *)(param_3 + 0x834),param_3 + 0xc70);
  }
  return;
}


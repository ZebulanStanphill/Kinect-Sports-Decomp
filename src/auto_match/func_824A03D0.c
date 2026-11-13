typedef unsigned char bool;
extern int fn_8225F160();
extern int fn_8225F3C0();
extern int fn_824A0520();
extern int fn_824A0720();
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;


void fn_824A03D0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  int iVar5;
  
  iVar5 = 1;
  iVar1 = *(int *)(*param_2 * 0x24 + param_1 + 4);
  fn_8225F160();
  iVar2 = fn_8225F3C0();
  if (1 < iVar2) {
    iVar5 = (*param_2 == 0 ^ 1) + 2;
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  if ((iVar2 == 1) || (bVar3 = 1, iVar5 != 1)) {
    bVar3 = 0;
  }
  if ((iVar2 != 1) || (bVar4 = 1, iVar5 == 1)) {
    bVar4 = 0;
  }
  if ((bool)(bVar4 | bVar3)) {
    fn_824A0520(param_1,iVar2,0);
    *(unsigned int *)(*param_2 * 0x24 + param_1 + 0xc) = 0;
  }
  *(int *)(param_1 + 0x5c) = iVar5;
  if (((bool)(bVar4 | bVar3)) || (iVar1 != *(int *)(*param_2 * 0x24 + param_1 + 0xc))) {
    fn_824A0520(param_1,iVar5,iVar1);
    *(int *)(*param_2 * 0x24 + param_1 + 0xc) = iVar1;
  }
  iVar2 = *param_2;
  fn_8225F160();
  fn_8225F3C0();
  fn_824A0720(param_1,iVar5,
                    (*(float *)(param_1 + 0x80) + lbl_821CA460) - lbl_82192604 <
                    *(float *)((iVar2 * 9 + iVar1 + 4) * 4 + param_1));
  return;
}


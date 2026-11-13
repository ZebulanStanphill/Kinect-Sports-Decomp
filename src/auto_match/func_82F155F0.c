extern int fn_82E829D0();
extern int fn_82F02410();
extern int fn_82F025F0();
extern unsigned int lbl_821551E0;
extern unsigned int lbl_8215F5F0;


void fn_82F155F0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = fn_82E829D0();
  *(int *)(param_1 + 0x88c) = (int)uVar3;
  if (*(double *)(param_1 + 0x1e08) < lbl_8215F5F0) {
    iVar4 = (int)*(double *)(param_1 + 0x1e08);
  }
  else {
    iVar4 = 0x1f;
  }
  if (*(double *)(param_1 + 0x1ed0) < lbl_821551E0) {
    iVar5 = (int)*(double *)(param_1 + 0x1ed0);
  }
  else {
    iVar5 = 0x7ff;
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar3,3);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),iVar4 >> 2,3);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),iVar5 >> 6,5);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x880),1);
  uVar1 = *(unsigned int *)(param_1 + 0x31c);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                    (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0) +
                    -1,0xc);
  uVar1 = *(unsigned int *)(param_1 + 800);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                    (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0) +
                    -1,0xc);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x644),1);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x314),1);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x978),2);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x648),1);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x920),1);
  if (*(int *)(param_1 + 0x59c) == 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),0,1);
    uVar2 = *(unsigned int *)(param_1 + 0x5a0);
  }
  else {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),1,1);
    uVar2 = *(unsigned int *)(param_1 + 0x594);
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar2,1);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(int *)(param_1 + 0x76e0) == 0,1);
  fn_82F025F0(*(unsigned int *)(param_1 + 0x1ebc));
  return;
}


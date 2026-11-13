extern unsigned int *auStack_38;
extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F21F0();
extern int fn_827F2220();
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_822B83D0(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  unsigned char auStack_38 [56];
  
  fn_8255F880(auStack_38,param_2 + 0x40);
  dVar4 = (double)*(float *)(param_2 + 0x4c);
  if (dVar4 == (double)lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    dVar4 = (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460);
  }
  uVar2 = fn_8255F8D0(dVar4,(double)*(float *)(param_2 + 0x48),auStack_38);
  iVar1 = *(int *)(param_1 + 0xc);
  *(unsigned int *)(iVar1 + 0x184) = *(unsigned int *)(param_2 + 0x50);
  uVar3 = fn_8251F720(param_2 + 0x44,0);
  fn_8255F448(iVar1,uVar2,uVar3,0);
  *(unsigned int *)(iVar1 + 0x168) = 0;
  *(unsigned int *)(iVar1 + 0x160) = *(unsigned int *)(param_2 + 0x44);
  fn_827F21F0(*(unsigned int *)(param_1 + 0xc));
  fn_827F2220(*(unsigned int *)(param_1 + 0xc));
  return uVar2;
}


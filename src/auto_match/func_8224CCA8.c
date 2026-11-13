extern __int64 fn_8225C590();
extern int fn_8225D580();
extern int fn_82292AE8();
extern __int64 fn_823AB158();
extern int fn_8251C3C0();
extern int fn_8288B760();
extern unsigned int lbl_82197CE8;
extern unsigned int lbl_82197D3C;


void fn_8224CCA8(unsigned int *param_1)

{
  unsigned char cVar4;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int iVar3;
  
  *param_1 = &lbl_82197CE8;
  param_1[0x1c] = &lbl_82197D3C;
  cVar4 = fn_8288B760();
  if (cVar4 == '\0') {
    uVar1 = fn_823AB158(param_1);
    uVar2 = fn_8225C590();
    fn_8225D580(uVar2,uVar1);
    iVar3 = param_1[0x219];
    if (iVar3 != 0) {
      uVar1 = fn_8225C590();
      fn_8225D580(uVar1,iVar3);
      param_1[0x219] = 0;
    }
    if ((*(char *)(param_1 + 0x11d) != '\0') &&
       (iVar3 = fn_82292AE8(), *(float *)(iVar3 + 0x5c) == 0.0f)) {
      *(float *)(iVar3 + 0x5c) = 100.0f;
    }
  }
  fn_8251C3C0(param_1);
  return;
}


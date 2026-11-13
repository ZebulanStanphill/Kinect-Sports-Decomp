typedef unsigned char bool;
extern int fn_82FF1AD8();
extern int fn_83027260();
extern int fn_830272C8();
extern int fn_83027308();
extern int fn_83027378();
extern int fn_83027398();
extern int fn_830273A8();
extern int fn_83027490();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1a;


void fn_82FF1BB0(double param_1,int param_2,unsigned __int64 param_3,__int64 param_4)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  unsigned short uStack_1a;
  
  iVar2 = (int)param_4;
  if (iVar2 < 0x16) {
    if (iVar2 == 0x15) {
      dVar3 = (double)fn_82FF1AD8(param_2);
      *(float *)(param_2 + 0x154) = (float)dVar3;
      return;
    }
    if (iVar2 == 0xb) {
      uStack_1a = (unsigned short)(__int64)(param_1 * (double)lbl_82005748);
      *(unsigned short *)(param_2 + 0x15a) = uStack_1a;
      return;
    }
    if (iVar2 == 0x14) {
      dVar3 = (double)fn_82FF1AD8();
      *(float *)(param_2 + 0x150) = (float)dVar3;
      return;
    }
  }
  else if (iVar2 == 0x21) {
    *(bool *)(param_2 + 0x158) = (double)lbl_821AAD20 < param_1;
    return;
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (((iVar2 == 0) || (7 < (param_4 - 0x20U & 0xffffffff))) ||
     (bVar1 = (int)(param_4 - 0x20U) != 0, param_4 == 0x21 && bVar1)) {
    return;
  }
  if (param_4 == 0x22 && bVar1) {
    fn_830272C8();
    return;
  }
  if (param_4 == 0x23 && bVar1) {
    fn_83027308();
    return;
  }
  if (param_4 == 0x24 && bVar1) {
    fn_83027378(iVar2,param_1 != (double)lbl_821AAD20);
    return;
  }
  if (param_4 == 0x25 && bVar1) {
    fn_830273A8(iVar2,param_1 != (double)lbl_821AAD20);
    return;
  }
  if (param_4 == 0x26 && bVar1) {
    fn_83027490(iVar2,(int)param_1);
    return;
  }
  if (bVar1) {
    fn_83027398(iVar2,(int)param_1);
    return;
  }
  fn_83027260(iVar2,(int)param_1);
  return;
}


extern int fn_8267C4C8();
extern int fn_827B3DB8();
extern int fn_827B5060();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820151C4;
extern unsigned int lbl_821AAD20;


unsigned int *
fn_82770708(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int param_6,unsigned int param_7,unsigned char param_8)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  param_1[2] = param_2;
  *param_1 = &lbl_820151C4;
  param_1[1] = 1;
  param_1[5] = 0x400;
  param_1[3] = 0x30;
  param_1[4] = 3;
  param_1[6] = 0x400;
  param_1[7] = param_6;
  if ((int)param_3 != 0) {
    fn_8267C4C8(param_3);
  }
  param_1[8] = (int)param_3;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  param_1[9] = (int)param_4;
  if ((param_5 & 0xffffffff) != 0) {
    fn_8267C4C8(param_5);
  }
  param_1[10] = (int)param_5;
  param_1[0xb] = param_7;
  fn_827B5060(param_1 + 0xc);
  fn_827B3DB8(param_1 + 0x25);
  uVar2 = lbl_82002AE0;
  param_1[0x41] = lbl_8200D8DC;
  param_1[0x40] = uVar2;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  uVar3 = lbl_821AAD20;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4d] = uVar2;
  param_1[0x4a] = 0;
  param_1[0x4e] = uVar2;
  *(unsigned char *)(param_1 + 0x51) = 0;
  param_1[0x4f] = uVar3;
  param_1[0x50] = uVar3;
  param_1[0x4b] = 0x7fffffff;
  param_1[0x4c] = 0x80000001;
  param_1[0x52] = 0;
  iVar1 = param_1[2];
  *(unsigned char *)(param_1 + 0x53) = param_8;
  if (iVar1 != 0) {
    param_1[3] = *(unsigned int *)(iVar1 + 0xc);
    param_1[4] = *(unsigned int *)(iVar1 + 0x10);
    param_1[5] = *(unsigned int *)(iVar1 + 0x14);
    param_1[6] = *(unsigned int *)(iVar1 + 0x18);
  }
  param_1[0xc] = param_1[5];
  param_1[0xd] = param_1[6];
  return param_1;
}


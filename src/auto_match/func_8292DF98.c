#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8265C940();
extern int fn_82924CD8();
extern unsigned int lbl_8202F0AC;


unsigned int * fn_8292DF98(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  fn_82924CD8(param_1,param_2,0,1);
  param_1[0x22] = 0;
  *param_1 = &lbl_8202F0AC;
  uVar2 = (unsigned __int64)(unsigned int)param_1[0x11] + 1 & 0xfffffffe;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = (int)uVar2;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 1;
  uVar2 = uVar2 - ((unsigned __int64)(unsigned int)param_1[0xf] & 0xfffffffe);
  param_1[0x21] = (int)((unsigned __int64)(unsigned int)param_1[0xf] & 0xfffffffe);
  param_1[0x27] = (int)uVar2;
  iVar1 = fn_8265C940((uVar2 & 0xfffffff) << 4,0x24810000);
  param_1[0x20] = iVar1;
  if (iVar1 == 0) {
    param_1[0x29] = 0;
  }
  uVar2 = CONCAT44(*(unsigned int *)(param_2 + 4),*(unsigned int *)(param_2 + 4)) & 0xfffffffffffffeff;
  uVar3 = uVar2 - 0x1828004b;
  if (uVar3 == 0) {
LAB_8292e064:
    param_1[0x2a] = 0;
    param_1[0x2b] = 8;
  }
  else {
    if ((uVar3 & 0xffffffff) != 1) {
      uVar2 = uVar2 - 0x1a20004b;
      if ((uVar2 & 0xffffffff) == 0) goto LAB_8292e064;
      if ((uVar2 & 0xffffffff) != 1) {
        return param_1;
      }
    }
    param_1[0x2b] = 0;
    param_1[0x2a] = 8;
  }
  return param_1;
}


extern unsigned int *auStack_70;
extern int fn_82A447A0();
extern int fn_82A47EB8();
extern int fn_82A48BD8();
extern int fn_82A495D8();
extern int fn_82A49DF8();
extern unsigned int lbl_82089AA8;
extern unsigned int lbl_82089AAC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_82A497D0(double param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_70 [112];
  
  uVar1 = *(unsigned int *)(param_5 + 4);
  if (*(short *)(param_5 + 2) == 1) {
    if ((float)((double)uVar1 * param_1) <= lbl_82089AAC) {
LAB_82a4986c:
      uVar2 = fn_82A48BD8(param_2 + 0x1ec,8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      fn_82A49DF8(auStack_70,0x28,1,*(unsigned short *)(param_5 + 2),uVar1,0x10,0x10,
                        *(unsigned int *)(param_5 + 0x14));
      uVar2 = fn_82A447A0(param_1,param_2,param_3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_82A47EB8(param_2,*(unsigned int *)(param_5 + 4));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_82A495D8(param_2,uVar1,param_2 + 0x1c0,param_2 + 0x1c4,param_2 + 0x1d8);
      return uVar2;
    }
  }
  else if ((float)((double)uVar1 * param_1) <= lbl_82089AA8) goto LAB_82a4986c;
  return 0xffffffff88960001;
}


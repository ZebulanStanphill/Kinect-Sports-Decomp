extern unsigned int *auStack_50;
extern int fn_827EB788();
extern int fn_827EDAD0();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_8285ABD8();
extern unsigned int lbl_821AAD20;


unsigned __int64
fn_8285D488(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  int iVar1;
  int iVar2;
  double dVar3;
  unsigned char auStack_50 [80];
  
  iVar1 = fn_8285ABD8(param_4,param_2);
  if (iVar1 != 0) {
    fn_82810328(param_3 + 4,*(unsigned int *)(param_4 + 0x14),auStack_50);
    dVar3 = (double)fn_82810280(param_5,auStack_50);
    if ((double)lbl_821AAD20 <= dVar3) {
      iVar1 = fn_827EB788(param_1,(double)*(float *)(param_4 + 0x10),param_6);
      if ((iVar1 != 0) && (iVar1 = 2, 2 < *(unsigned short *)(param_4 + 0x18))) {
        do {
          iVar2 = fn_827EDAD0(param_1,param_6);
          if (iVar2 != 0) {
            return 2;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(unsigned int)*(unsigned short *)(param_4 + 0x18));
      }
      return 1;
    }
  }
  return 0;
}


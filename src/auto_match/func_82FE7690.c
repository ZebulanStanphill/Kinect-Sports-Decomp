extern unsigned int fn_82FE72A0;
extern unsigned int lbl_832642F0;
#define CONCAT44(a, b) ((unsigned __int64)(((unsigned __int64)(a) << 32) | (unsigned __int64)(unsigned int)(b)))

/* WARNING: Inlined function: __savegprlr_29 */

unsigned __int64 fn_82FE7690(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned char auStack_60 [16];
  unsigned int uStack_50;
  int (**pcStack_4c)();
  unsigned char *puStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  if ((((param_1 & 0x7ff) == 0) && ((param_1 & 0xffffffff) != 0)) && (0x17 < (param_2 & 0xffffffff))
     ) {
    uVar2 = fn_82FF9460(param_1,param_2);
    *param_3 = uVar2;
    uVar1 = fn_82FE71B8(auStack_60);
    if ((int)uVar1 == 1) {
      uStack_40 = *param_3;
      uStack_38 = (unsigned int)param_1;
      uStack_34 = (unsigned int)param_2;
      uStack_50 = 0;
      puStack_48 = auStack_60;
      pcStack_4c = fn_82FE72A0;
      uStack_3c = 0xffffffff;
      uStack_44 = 1;
      uVar1 = fn_82FFA6E8(lbl_832642F0,fn_82FE72A0,CONCAT44(puStack_48,1),
                          CONCAT44(uStack_40,0xffffffff),CONCAT44(uStack_38,uStack_34),
                          (unsigned __int64)uStack_30 << 0x20);
      uVar1 = fn_82FE7220(auStack_60,uVar1);
    }
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}

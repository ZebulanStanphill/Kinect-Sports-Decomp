#define true 1
extern int fn_82ADD158();
extern int fn_82ADD198();
extern int fn_82ADD570();
extern int fn_82ADD590();
extern int fn_82ADD810();
extern int fn_82ADDE40();
extern int fn_82ADE7E8();
extern int fn_82ADFFA8();
extern int fn_82AE0148();


unsigned __int64 fn_82AF6A18(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  uVar1 = fn_82ADD810();
  uVar2 = fn_82ADD810(param_1,param_3);
  uVar7 = 1;
  if ((uVar1 & 0xffffffff) != (uVar2 & 0xffffffff)) {
    iVar3 = fn_82ADE7E8(param_1);
    fn_82AE0148(param_1,iVar3,uVar1,0,0,0,0,1);
    iVar4 = fn_82ADD158(param_1,param_2);
    iVar5 = fn_82ADD158(param_1,param_3);
    uVar8 = *(unsigned int *)(iVar4 + 8) >> 1 & 0xf;
    while( true ) {
      if (uVar8 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = ((unsigned __int64)*(unsigned short *)(iVar4 + 0x12) - LZCOUNT(uVar8 & ~(uVar8 - 1))) + 0x1f;
      }
      if ((uVar1 & 0xffffffff) == 0) break;
      uVar7 = fn_82ADD198(param_1,uVar1);
      iVar6 = fn_82ADD590(param_1,uVar7);
      uVar9 = *(unsigned int *)(iVar5 + 8) >> 1 & 0xf;
      while( true ) {
        if (uVar9 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = ((unsigned __int64)*(unsigned short *)(iVar5 + 0x12) - LZCOUNT(uVar9 & ~(uVar9 - 1))) + 0x1f;
        }
        if ((uVar1 & 0xffffffff) == 0) break;
        uVar7 = fn_82ADD198(param_1,uVar1);
        fn_82ADD570(param_1,*(unsigned int *)((iVar6 + 4) * 4 + iVar3),uVar7);
        uVar9 = uVar9 - (uVar9 & ~(uVar9 - 1));
      }
      uVar8 = uVar8 - (uVar8 & ~(uVar8 - 1));
    }
    uVar7 = fn_82ADFFA8(param_1,iVar3,uVar2,0,0,0,0);
    fn_82ADDE40(param_1,iVar3);
  }
  return uVar7;
}


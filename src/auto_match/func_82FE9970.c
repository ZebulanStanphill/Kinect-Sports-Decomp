#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FA5060();
extern int fn_82FE7320();
extern int fn_82FE8948();
extern int fn_82FFA6E8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


unsigned __int64
fn_82FE9970(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             __int64 param_5)

{
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uStack_58;
  unsigned int uStack_50;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = 0x1f;
  }
  else if ((param_3 & 0xffffffff) == 1) {
    uVar3 = fn_82FE8948(*param_2);
    uVar1 = fn_82FFA6E8(lbl_832642F0,
                              CONCAT44(((unsigned int)LZCOUNT((int)param_1) >> 5 ^ 1) + 2,(int)param_4),
                              param_5 << 0x20,CONCAT44(1,uVar3),uStack_58,
                              (unsigned __int64)uStack_50 << 0x20);
  }
  else {
    puVar2 = (unsigned int *)fn_82FA5060(lbl_831BC768,(param_3 & 0x3fffffff) << 2);
    if (puVar2 == (unsigned int *)0x0) {
      uVar1 = 0x34;
    }
    else {
      if ((param_3 & 0xffffffff) != 0) {
        uVar4 = param_3;
        puVar5 = puVar2;
        do {
          uVar3 = fn_82FE8948(*(unsigned int *)((int)param_2 + ((int)puVar5 - (int)puVar2)));
          *puVar5 = uVar3;
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
      }
      uVar1 = fn_82FE7320(param_1,param_4,param_5,puVar2,param_3,0);
    }
  }
  return uVar1;
}


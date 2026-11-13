#define CONCAT13(h,l) ((unsigned int)((((unsigned char)(h)) << 24) | ((unsigned int)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FA5060();
extern int fn_82FE7428();
extern int fn_82FE8948();
extern int fn_82FFA6E8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned int uStack_68;


unsigned __int64
fn_82FE9BA0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,__int64 param_7)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int uStack_68;
  
  if ((param_4 == (unsigned int *)0x0) || ((param_5 & 0xffffffff) == 0)) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = fn_82FE8948(param_3);
    if ((param_5 & 0xffffffff) == 1) {
      lVar2 = fn_82FE8948(*param_4);
      uStack_68 = CONCAT13(param_1 == 0,(((unsigned __int64)(uStack_68) >> 8) & 0xFFFFFF));
      uVar1 = fn_82FFA6E8(lbl_832642F0,CONCAT44(4,(int)param_6),param_7 << 0x20,
                                CONCAT44((int)param_2,(int)uVar1),CONCAT44(uStack_68,1),
                                lVar2 << 0x20);
    }
    else {
      puVar3 = (unsigned int *)fn_82FA5060(lbl_831BC768,(param_5 & 0x3fffffff) << 2);
      if (puVar3 == (unsigned int *)0x0) {
        uVar1 = 0x34;
      }
      else {
        if ((param_5 & 0xffffffff) != 0) {
          uVar5 = param_5;
          puVar6 = puVar3;
          do {
            uVar4 = fn_82FE8948(*(unsigned int *)((int)param_4 + ((int)puVar6 - (int)puVar3)));
            *puVar6 = uVar4;
            uVar5 = uVar5 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar5 != 0);
        }
        uVar1 = fn_82FE7428(param_6,param_7,param_1 == 0,param_2,uVar1,puVar3,param_5,0);
      }
    }
  }
  return uVar1;
}


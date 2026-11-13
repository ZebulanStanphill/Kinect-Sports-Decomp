#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_828C4CA0();
extern int fn_828C52A0();
extern int fn_828C59F0();
extern int fn_828C5E70();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_828C62E0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  unsigned int uStack_50;
  int iStack_4c;
  unsigned int uStack_48;
  int iStack_44;
  
  uStack00000018 = ((((unsigned __int64)(uStack00000018)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  iVar4 = (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  do {
    uVar1 = uStack00000010;
    iVar2 = (((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF);
    while( true ) {
      iVar3 = iVar4 - iVar2;
      if (iVar3 < 0x21) {
        if (1 < iVar3) {
          fn_828C4CA0(uVar1,param_2,param_4,0);
        }
        return;
      }
      iVar5 = (int)param_3;
      if (iVar5 < 1) {
        if (1 < iVar3) {
          fn_828C59F0(uVar1,param_2,param_4,0,0);
        }
        fn_828C5E70(uVar1,param_2,param_4);
        return;
      }
      fn_828C52A0(&uStack_50,uVar1,param_2,param_4);
      param_3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      if (iStack_4c - iVar2 < iVar4 - iStack_44) break;
      fn_828C62E0(CONCAT44(uStack_48,iStack_44),param_2,param_3,param_4);
      param_2 = CONCAT44(uStack_50,iStack_4c);
      iVar4 = iStack_4c;
      uStack00000018 = param_2;
    }
    fn_828C62E0(uVar1,CONCAT44(uStack_50,iStack_4c),param_3,param_4);
    uStack00000010 = CONCAT44(uStack_48,iStack_44);
  } while( true );
}


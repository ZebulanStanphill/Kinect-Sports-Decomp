#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_828D55B8();
extern int fn_828D6150();
extern int fn_828D6860();
extern int fn_828D70A0();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_828D7848(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned int uStack_38;
  int iStack_34;
  
  uStack00000018 = ((((unsigned __int64)(uStack00000018)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  iVar5 = (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  do {
    uVar1 = uStack00000010;
    iVar2 = (((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF);
    while( true ) {
      iVar3 = iVar5 - iVar2;
      if (iVar3 < 0x21) {
        if (1 < iVar3) {
          fn_828D55B8(uVar1,param_2,0);
        }
        return;
      }
      iVar4 = (int)param_3;
      if (iVar4 < 1) {
        if (1 < iVar3) {
          fn_828D6860(uVar1,param_2,0,0);
        }
        fn_828D70A0(uVar1,param_2);
        return;
      }
      fn_828D6150(&uStack_40,uVar1,param_2);
      param_3 = (__int64)(iVar4 >> 1) + (unsigned __int64)(iVar4 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      if (iStack_3c - iVar2 < iVar5 - iStack_34) break;
      fn_828D7848(CONCAT44(uStack_38,iStack_34),param_2,param_3);
      param_2 = CONCAT44(uStack_40,iStack_3c);
      iVar5 = iStack_3c;
      uStack00000018 = param_2;
    }
    fn_828D7848(uVar1,CONCAT44(uStack_40,iStack_3c),param_3);
    uStack00000010 = CONCAT44(uStack_38,iStack_34);
  } while( true );
}


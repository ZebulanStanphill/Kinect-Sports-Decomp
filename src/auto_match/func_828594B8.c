#define true 1
extern int fn_828611B8();
extern int fn_82F68CC0();
extern unsigned int lbl_83211320;
extern unsigned int lbl_83211328;


void fn_828594B8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  uVar3 = (unsigned __int64)lbl_83211328;
  fn_82F68CC0(uVar3 + 8,param_2,0xa8);
  iVar4 = 1;
  if (1 < lbl_83211320) {
    lVar1 = 0xd8;
    while( true ) {
      lVar2 = lVar1 + uVar3 + 8;
      fn_82F68CC0(lVar2,param_2,0xa8);
      fn_828611B8(lVar1 + uVar3 + 0xb0,param_1,0xf0,0xf0,lVar2);
      iVar4 = iVar4 + 1;
      lVar1 = lVar1 + 0xd8;
      if ((int)(unsigned int)lbl_83211320 <= iVar4) break;
      uVar3 = (unsigned __int64)lbl_83211328;
    }
  }
  return;
}


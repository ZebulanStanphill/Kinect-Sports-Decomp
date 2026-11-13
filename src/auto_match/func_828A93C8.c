extern int fn_8288B760();
extern int fn_828B2500();
extern int fn_828B2BF8();
extern int fn_828C39A0();
extern int fn_828EB650();


void fn_828A93C8(int param_1,unsigned __int64 param_2)

{
  char cVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  cVar3 = fn_8288B760();
  if (((cVar3 != '\0') &&
      (uVar1 = fn_828C39A0(*(unsigned int *)(param_1 + 0x10),param_2), (uVar1 & 0xffffffff) != 0
      )) && (cVar3 = fn_828EB650(), cVar3 == '\0')) {
    uVar2 = fn_828B2BF8();
    fn_828B2500(uVar2,uVar1,param_1);
  }
  return;
}


extern int fn_82693F78();
extern int fn_82695448();
extern int fn_82695468();
extern int fn_826954C0();


void fn_8271C690(unsigned __int64 param_1)

{
  unsigned char cVar2;
  unsigned int uVar1;
  
  cVar2 = fn_82695468(param_1,0x1b);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,"LoadVars",0,0);
  }
  else {
    uVar1 = fn_82695448(param_1);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_82693F78(uVar1 + 0xc,"LoadVars.send is not implemented.");
    }
  }
  return;
}


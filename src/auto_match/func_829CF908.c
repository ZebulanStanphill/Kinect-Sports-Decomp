extern int fn_829CF1C0();
extern int XamContentClose();
extern int XamContentOpenFile();


unsigned __int64 fn_829CF908(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  iVar3 = 2;
  iVar1 = XamContentOpenFile(0xff,0xffffffff820573d4,0xffffffff820573bc,0x43,0,0,0);
  iVar2 = 0;
  if ((iVar1 == 0) ||
     (iVar2 = XamContentOpenFile(0xff,0xffffffff820573d4,0xffffffff82057398,0x43,0,0,0), iVar2 == 0)) {
    iVar1 = XamContentOpenFile(0xff,0xffffffff820573b0,0xffffffff8205737c,0x43,0,0,0);
    iVar3 = 0;
    if ((iVar1 == 0) ||
       (iVar3 = XamContentOpenFile(0xff,0xffffffff820573b0,0xffffffff82057360,0x43,0,0,0), iVar3 == 0))
    {
      uVar4 = fn_829CF1C0(param_1,param_2,0xffffffff82057340,0xffffffff82057350,0);
    }
    else {
      uVar4 = 0xffffffff8301000d;
    }
  }
  else {
    uVar4 = 0xffffffff8301000d;
  }
  if (iVar2 == 0) {
    XamContentClose(0xffffffff820573d4,0);
  }
  if (iVar3 == 0) {
    XamContentClose(0xffffffff820573b0,0);
  }
  return uVar4;
}


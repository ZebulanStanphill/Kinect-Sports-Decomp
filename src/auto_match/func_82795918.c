extern int fn_8278FD18();
extern int fn_827923E8();
extern int fn_827954C0();


void fn_82795918(__int64 param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  
  cVar1 = fn_8278FD18();
  if (cVar1 != '\0') {
    uVar2 = (unsigned __int64)*(unsigned int *)((int)param_1 + 4);
    if ((uVar2 != 0) && (cVar1 = fn_8278FD18(param_1), cVar1 != '\0')) {
      uVar2 = uVar2 - 1;
    }
    fn_827923E8(param_1 + 0x10,uVar2,1);
    fn_827954C0(param_1 + 0x10,uVar2 + 1,1);
  }
  return;
}


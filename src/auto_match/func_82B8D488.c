extern int fn_82AEB338();
extern int fn_82AF4968();
extern int fn_82B8D3D0();


void fn_82B8D488(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  char cVar2;
  unsigned __int64 uVar3;
  
  cVar2 = fn_82AEB338(param_2);
  if (cVar2 != '\0') {
    uVar3 = param_3;
    if ((param_4 & 0xff) == 0) {
      do {
        uVar1 = *(unsigned int *)(((unsigned int)uVar3 & 0xfffffffe) + 0x24);
        if (((uVar1 & 1) != 0) || (uVar3 = ((unsigned __int64)uVar1 & 0xfffffffe) - 0x28, uVar3 == 0)) {
          cVar2 = '\0';
          goto LAB_82b8d4f8;
        }
      } while ((uVar3 & 0xffffffff) != (param_2 & 0xffffffff));
      cVar2 = '\x01';
    }
    else {
      cVar2 = fn_82AF4968(param_3,param_2);
    }
LAB_82b8d4f8:
    if (cVar2 == '\0') {
      fn_82B8D3D0(param_1,param_2,param_3,1,param_4);
    }
  }
  return;
}


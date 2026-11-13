#define true 1
extern int fn_82AF4968();
extern int fn_82B8B8A0();


void fn_82B8D3D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  do {
    uVar4 = param_3;
    uVar3 = uVar4;
    if ((param_5 & 0xff) == 0) {
      do {
        uVar1 = *(unsigned int *)(((unsigned int)uVar3 & 0xfffffffe) + 0x24);
        if (((uVar1 & 1) != 0) || (uVar3 = ((unsigned __int64)uVar1 & 0xfffffffe) - 0x28, uVar3 == 0)) {
          cVar2 = '\0';
          goto LAB_82b8d438;
        }
      } while ((uVar3 & 0xffffffff) != (param_2 & 0xffffffff));
      cVar2 = '\x01';
    }
    else {
      cVar2 = fn_82AF4968(uVar4,param_2);
    }
LAB_82b8d438:
    if (cVar2 == '\0') {
      fn_82B8B8A0(param_1,param_2,uVar4,param_4,param_5);
      return;
    }
    param_4 = (unsigned __int64)((param_4 & 0xff) == 0);
    param_3 = param_2;
    param_2 = uVar4;
  } while( true );
}


extern int fn_82AEB338();
extern int fn_82AF4968();
extern int fn_82B8B580();


unsigned __int64 fn_82B8BCB0(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  char cVar2;
  unsigned int uVar3;
  
  if ((*(int *)(param_2 + 0x1c) == *(int *)(param_3 + 0x1c)) &&
     (cVar2 = fn_82AEB338(param_3), cVar2 != '\0')) {
    cVar2 = fn_82AEB338(param_2);
    if (cVar2 != '\0') {
      uVar3 = param_3;
      if ((param_4 & 0xff) == 0) {
        do {
          uVar3 = *(unsigned int *)((uVar3 & 0xfffffffe) + 0x24);
          if (((uVar3 & 1) != 0) || (uVar3 = (uVar3 & 0xfffffffe) - 0x28, uVar3 == 0)) {
            cVar2 = '\0';
            goto LAB_82b8bd50;
          }
        } while (uVar3 != param_2);
        cVar2 = '\x01';
      }
      else {
        cVar2 = fn_82AF4968(param_3,param_2);
      }
LAB_82b8bd50:
      if (cVar2 == '\0') {
        uVar1 = fn_82B8B580(param_1,param_2,param_3,1,param_4);
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


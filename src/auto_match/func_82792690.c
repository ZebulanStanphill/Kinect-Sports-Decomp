extern int fn_8268D210();
extern int fn_826EFA28();
extern int fn_826F06A8();
extern int fn_826F0768();


void fn_82792690(int param_1,unsigned __int64 param_2)

{
  unsigned char cVar3;
  unsigned int uVar1;
  unsigned int uVar2;
  
  cVar3 = fn_826F06A8(param_1);
  if (cVar3 != '\0') {
    do {
      uVar1 = fn_8268D210(param_1 + 0xf4,0x14);
      if (uVar1 != 0) {
        uVar2 = fn_826EFA28(uVar1,param_1,param_2);
      }
      else {
        uVar2 = 0;
      }
      fn_826F0768(param_1,uVar2,1);
      cVar3 = fn_826F06A8(param_1);
    } while (cVar3 != '\0');
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  return;
}


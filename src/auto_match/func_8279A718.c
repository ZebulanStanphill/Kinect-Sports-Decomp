extern int fn_8276A220();
extern int fn_82793908();
extern int fn_82794DC0();
extern int fn_8279A600();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8279A718(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  uStack_20 = 0;
  uStack_1c = 0;
  uVar1 = fn_8279A600();
  if (uVar1 != 0xffffffff) {
    uVar3 = param_2 - 1;
    if ((unsigned __int64)uVar1 == (param_2 & 0xffffffff)) {
      uVar3 = param_2;
    }
    cVar2 = fn_82793908(*(unsigned int *)(param_1 + 8),&uStack_1c,&uStack_20,uVar3);
    if (cVar2 != '\0') {
      fn_8276A220(*(unsigned int *)(param_1 + 8),uStack_20);
      fn_82794DC0(*(unsigned int *)(param_1 + 8),uStack_1c);
    }
  }
  return;
}


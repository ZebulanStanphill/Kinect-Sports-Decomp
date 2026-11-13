typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int uStack0000001c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82F8DFB0(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  int *piStack00000014;
  unsigned int uStack0000001c;
  
  do {
    puVar3 = (unsigned int *)(ZEXT48(param_1) + 0x9c);
    lVar2 = (unsigned __int64)*puVar3 - 1;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(lVar2,0,ZEXT48(param_1) + 0x9c);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (((int)lVar2 == 0) && (param_1 != (int *)0x0)) {
    piStack00000014 = param_1;
    uStack0000001c = param_2;
    (**(int (***)())(*param_1 + 0x1c))(param_1,1);
  }
  return;
}


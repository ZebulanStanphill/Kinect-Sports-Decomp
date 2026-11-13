extern int fn_82E26DD0();
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


void fn_82E26E28(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  
  uStack00000014 = (unsigned int)param_1;
  uStack00000024 = (unsigned int)param_3;
  uStack0000001c = (unsigned int)param_2;
  uStack0000002c = (unsigned int)param_4;
  if (((((param_3 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) == 0)) ||
      ((param_1 & 0xffffffff) == 0)) || ((param_2 & 0xffffffff) == 0)) {
    *(unsigned int *)param_5 = 0;
    *(unsigned int *)param_6 = 0;
  }
  else {
    fn_82E26DD0(param_1,param_2,&stack0x00000014,&stack0x0000001c);
    fn_82E26DD0(param_3,param_4,&stack0x00000024,&stack0x0000002c);
    uVar2 = (unsigned __int64)uStack00000014;
    for (uVar1 = (unsigned __int64)uStack0000001c; (0xffff < uVar2 || (0xffff < uVar1)); uVar1 = uVar1 >> 1
        ) {
      uVar2 = uVar2 >> 1;
    }
    uVar4 = (unsigned __int64)uStack00000024;
    for (uVar3 = (unsigned __int64)uStack0000002c; (0xffff < uVar4 || (0xffff < uVar3)); uVar3 = uVar3 >> 1
        ) {
      uVar4 = uVar4 >> 1;
    }
    fn_82E26DD0((__int64)(int)uVar2 * (__int64)(int)uVar4,
                  (__int64)(int)uVar1 * (__int64)(int)uVar3,param_5,param_6);
  }
  return;
}


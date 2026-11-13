#define true 1
extern unsigned int *auStack_230;
extern int fn_82F65350();
extern int memcpy();


void fn_82424C80(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned char auStack_230 [496];
  
  uVar6 = 2;
  uVar5 = param_1;
  do {
    uVar5 = uVar5 + 0x1f0;
    if ((uVar5 & 0xffffffff) == (param_2 & 0xffffffff)) {
      return;
    }
    uVar3 = 0x7fff;
    uVar1 = fn_82F65350();
    uVar1 = uVar1 & 0x7fff;
    if (0x7fff < uVar6) {
      do {
        if (uVar3 == 0xffffffff) break;
        uVar2 = fn_82F65350();
        uVar1 = (uVar1 & 0x1ffff) << 0xf | uVar2 & 0xffffffff00007fff;
        uVar3 = uVar3 << 0xf | 0x7fff;
      } while (uVar3 < uVar6);
    }
    lVar4 = (uVar1 - (__int64)(int)((uVar1 & 0xffffffff) / (unsigned __int64)uVar6) * (__int64)(int)uVar6
            ) * 0x1f0 + param_1;
    memcpy(auStack_230,uVar5,0x1f0);
    memcpy(uVar5,lVar4,0x1f0);
    memcpy(lVar4,auStack_230,0x1f0);
    uVar6 = uVar6 + 1;
  } while( true );
}


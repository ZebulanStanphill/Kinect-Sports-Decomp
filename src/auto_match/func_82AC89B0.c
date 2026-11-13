#define true 1
extern int fn_82ABE190();


unsigned __int64 fn_82AC89B0(int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  puVar1 = (unsigned int *)*param_1;
  do {
    if (puVar1 == (unsigned int *)0x0) {
      return 0;
    }
    cVar3 = fn_82ABE190(puVar1);
    if (cVar3 != '\0') {
      uVar2 = *puVar1;
      uVar6 = uVar2 >> 0xd & 0xfff;
      if ((((uVar6 ^ param_2) & 0xfffffff0) == 0) && ((uVar6 & param_2 & 0xf) != 0)) {
        uVar6 = uVar2 >> 0x19 & 7;
        uVar4 = 0;
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar5 = 0;
          do {
            uVar7 = uVar7 + 1;
            uVar4 = 1 << ((uVar2 >> 5 & 0xff) >> (uVar5 & 0x3f) & 3) | uVar4;
            uVar5 = uVar5 + 2;
          } while (uVar7 < uVar6);
        }
        if ((uVar4 & param_2 & 0xf) != 0) {
          return 1;
        }
      }
    }
    puVar1 = (unsigned int *)puVar1[1];
  } while( true );
}


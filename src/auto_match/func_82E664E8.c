typedef unsigned char bool;
#define true 1
extern int fn_82A1E108();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82E664E8(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  
  do {
    do {
      while( true ) {
        puVar5 = (unsigned int *)param_1;
        uVar2 = *puVar5;
        if ((uVar2 & 0x80000000) == 0) break;
        fn_82A1E108(10);
      }
      bVar4 = (uVar2 & 0x3fffffff) == 0;
      uVar6 = (unsigned __int64)uVar2 | 0x40000000;
      if (bVar4) {
        uVar6 = (unsigned __int64)uVar2 | 0xc0000000;
      }
    } while ((unsigned int)uVar6 == uVar2);
    do {
      uVar1 = *puVar5;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1);
          *puVar5 = uVar3;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar6,0,param_1);
        *puVar5 = uVar3;
        bVar4 = true;
      }
    } while (!bVar4);
    if ((uVar1 == uVar2) && (sync(1), (uVar6 & 0x80000000) != 0)) {
      return;
    }
  } while( true );
}


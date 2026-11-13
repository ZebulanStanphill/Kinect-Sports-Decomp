typedef unsigned char bool;
#define true 1
#define false 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)


void fn_82F9AEA0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  
  if ((*param_2 & 1) == 0) {
    *param_2 = *param_2 + 1;
  }
  uVar1 = *param_2;
  do {
    bVar2 = false;
    uVar3 = 3;
    if (3 < (int)SQRT((double)uVar1) + 1) {
      do {
        trapWord(6,uVar3,0);
        if ((unsigned __int64)*param_2 ==
            (__int64)(int)((unsigned __int64)*param_2 / (uVar3 & 0xffffffff)) * (__int64)(int)uVar3) {
          bVar2 = true;
          break;
        }
        uVar3 = uVar3 + 2;
      } while ((int)uVar3 < (int)SQRT((double)uVar1) + 1);
    }
    if (!bVar2) {
      return;
    }
    *param_2 = *param_2 + 2;
  } while( true );
}


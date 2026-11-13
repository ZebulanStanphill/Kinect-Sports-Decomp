typedef unsigned char bool;
#define true 1
#define false 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82006848;


void fn_82FDFDC8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  bool bVar2;
  float fVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  fVar3 = lbl_82006848;
  uVar6 = 0;
  if (param_3 == 0) {
    return;
  }
code_r0x82fdfdf8:
  puVar4 = param_4 + uVar6;
  param_4[uVar6] = (unsigned int)(__int64)(*(float *)(uVar6 * 4 + param_1) * fVar3 * (float)param_2);
  if (uVar6 != 0) {
    if ((*puVar4 & 1) == 0) {
      *puVar4 = *puVar4 + 1;
    }
    uVar1 = *puVar4;
    do {
      bVar2 = false;
      uVar5 = 3;
      if (3 < (int)SQRT((double)uVar1) + 1) {
        do {
          trapWord(6,uVar5,0);
          if ((unsigned __int64)*puVar4 ==
              (__int64)(int)((unsigned __int64)*puVar4 / (uVar5 & 0xffffffff)) * (__int64)(int)uVar5) {
            bVar2 = true;
            break;
          }
          uVar5 = uVar5 + 2;
        } while ((int)uVar5 < (int)SQRT((double)uVar1) + 1);
      }
      if ((!bVar2) && (*puVar4 != puVar4[-1])) goto code_r0x82fdff60;
      *puVar4 = *puVar4 + 2;
    } while( true );
  }
  if ((*param_4 & 1) == 0) {
    *param_4 = *param_4 + 1;
  }
  uVar1 = *param_4;
  do {
    bVar2 = false;
    uVar5 = 3;
    if (3 < (int)SQRT((double)uVar1) + 1) {
      do {
        trapWord(6,uVar5,0);
        if ((unsigned __int64)*param_4 ==
            (__int64)(int)((unsigned __int64)*param_4 / (uVar5 & 0xffffffff)) * (__int64)(int)uVar5) {
          bVar2 = true;
          break;
        }
        uVar5 = uVar5 + 2;
      } while ((int)uVar5 < (int)SQRT((double)uVar1) + 1);
    }
    if ((!bVar2) && (*param_4 != 0)) break;
    *param_4 = *param_4 + 2;
  } while( true );
code_r0x82fdff60:
  uVar6 = uVar6 + 1;
  if (param_3 <= uVar6) {
    return;
  }
  goto code_r0x82fdfdf8;
}


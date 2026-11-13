#define true 1
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


unsigned __int64
fn_8281B838(int *param_1,unsigned __int64 param_2,char param_3,unsigned int *param_4,int *param_5)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar3 = (unsigned int)param_1 & 3;
  for (; (uVar3 != 0 && ((param_2 & 0xffffffff) != 0)); param_2 = param_2 - 1) {
    if (*(char *)param_1 != param_3) goto LAB_8281b8f4;
    param_1 = (int *)((int)param_1 + 1);
    uVar3 = uVar3 - 1;
  }
  do {
    if ((param_2 & 0xffffffff) < 4) {
      uVar2 = param_2 & 0xffffffff;
      while( true ) {
        if (uVar2 == 0) {
          return 0;
        }
        if (*(char *)param_1 != param_3) break;
        param_2 = param_2 - 1;
        param_1 = (int *)((int)param_1 + 1);
        uVar2 = param_2;
      }
LAB_8281b8f4:
      *param_4 = param_1;
      *param_5 = 0;
      uVar2 = param_2 & 0xffffffff;
      for (; (uVar2 != 0 && (*(char *)param_1 != param_3)); param_1 = (int *)((int)param_1 + 1)) {
        param_2 = param_2 - 1;
        *param_5 = *param_5 + 1;
        uVar2 = param_2;
      }
      return 1;
    }
    if (*param_1 != CONCAT31(CONCAT21(CONCAT11(param_3,param_3),param_3),param_3)) {
      cVar1 = *(char *)param_1;
      for (; (cVar1 == param_3 && ((param_2 & 0xffffffff) != 0)); param_2 = param_2 - 1) {
        param_1 = (int *)((int)param_1 + 1);
        cVar1 = *(char *)param_1;
      }
      goto LAB_8281b8f4;
    }
    param_2 = param_2 - 4;
    param_1 = param_1 + 1;
  } while( true );
}


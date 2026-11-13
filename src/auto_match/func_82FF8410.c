typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FA5190();
extern int fn_82FF6060();


unsigned __int64 fn_82FF8410(int *param_1)

{
  unsigned int *puVar1;
  bool bVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  
  if (param_1[4] != 0) {
    while (*param_1 != 0) {
      fn_82FF6060(param_1,*param_1,0);
    }
    puVar3 = (unsigned int *)param_1[2];
    while (puVar3 != (unsigned int *)0x0) {
      puVar1 = (unsigned int *)*puVar3;
      if ((puVar3 < (unsigned int *)param_1[6]) ||
         (bVar2 = false, (unsigned int *)param_1[6] + param_1[3] * 2 <= puVar3)) {
        bVar2 = true;
      }
      puVar3 = puVar1;
      if (bVar2) {
        fn_82FA5190(param_1[7]);
      }
    }
    if (param_1[6] != 0) {
      uVar4 = 0;
      if (param_1[3] != 0) {
        do {
          uVar4 = uVar4 + 1;
        } while (uVar4 < (unsigned int)param_1[3]);
      }
      fn_82FA5190(param_1[7]);
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return 1;
}


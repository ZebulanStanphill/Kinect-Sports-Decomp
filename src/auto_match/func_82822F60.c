#define true 1
extern int fn_82822AA8();
extern unsigned int lbl_8320A778;


unsigned __int64 fn_82822F60(unsigned int *param_1,unsigned int *param_2,int (**param_3)(),unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  
  puVar2 = lbl_8320A778;
  puVar4 = (unsigned int *)*param_1;
  while (puVar1 = puVar4, puVar1 != lbl_8320A778) {
    param_1 = puVar1;
    puVar4 = (unsigned int *)*puVar1;
  }
  param_2[1] = lbl_8320A778;
  param_2[2] = puVar2;
  param_2[3] = 0;
  puVar2 = param_1;
  do {
    while( true ) {
      puVar4 = puVar2;
      uVar3 = (*param_3)(puVar4,param_2,param_4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      if ((int)uVar3 < 0) break;
      puVar2 = (unsigned int *)puVar4[2];
      if ((unsigned int *)puVar4[2] == lbl_8320A778) {
        puVar4[2] = param_2;
LAB_8282300c:
        *param_2 = puVar4;
        if (param_1[3] != 2) {
          fn_82822AA8(param_2);
        }
        return 1;
      }
    }
    puVar2 = (unsigned int *)puVar4[1];
  } while ((unsigned int *)puVar4[1] != lbl_8320A778);
  puVar4[1] = param_2;
  goto LAB_8282300c;
}


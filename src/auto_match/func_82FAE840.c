#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_83037EB8();
extern unsigned int lbl_82160788;


unsigned __int64 fn_82FAE840(int param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 *puVar2;
  unsigned int uVar3;
  char cVar4;
  unsigned int uVar5;
  double dVar6;
  double dVar7;
  
  uVar5 = 0;
  *(unsigned int *)(param_1 + 0xa4) = *(unsigned int *)(param_1 + 0xa0);
  dVar7 = lbl_82160788;
  if (param_3 != 0) {
    do {
      dVar6 = *(double *)(param_2 + 2) * dVar7;
      uVar1 = *param_2;
      uVar3 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 3;
      if (((*(unsigned int *)(param_1 + 0xa8) <= uVar3) &&
          (cVar4 = fn_83037EB8((int *)(param_1 + 0xa0),8), cVar4 == '\0')) ||
         (*(unsigned int *)(param_1 + 0xa8) <= uVar3)) {
        return 2;
      }
      puVar2 = *(unsigned __int64 **)(param_1 + 0xa4);
      *(unsigned __int64 **)(param_1 + 0xa4) = puVar2 + 1;
      if (puVar2 == (unsigned __int64 *)0x0) {
        return 2;
      }
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 4;
      *puVar2 = CONCAT44(uVar1,(int)dVar6);
    } while (uVar5 < param_3);
  }
  return 1;
}


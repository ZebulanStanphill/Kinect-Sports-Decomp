extern unsigned int *auStack_3c;
extern int fn_8265CA20();
extern int fn_828B3E88();
extern int fn_828D5420();
extern int fn_828D8138();
extern int fn_828D8190();
extern int fn_828D81E8();
extern unsigned int uStack_40;


unsigned int * fn_828D8260(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  char cVar7;
  unsigned int uVar6;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned char uStack_40;
  unsigned char auStack_3c [1];
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    uVar10 = *param_1;
    uVar6 = (int)(param_2[1] - uVar2) / 0x1c;
    if (uVar6 == 0) {
      fn_828D81E8(auStack_3c,param_1,uVar10,param_1[1]);
    }
    else {
      uVar3 = param_1[1];
      uVar1 = (int)(uVar3 - uVar10) / 0x1c;
      if (uVar1 < uVar6) {
        if ((unsigned int)((int)(param_1[2] - uVar10) / 0x1c) < uVar6) {
          if (uVar10 != 0) {
            for (; uVar10 != uVar3; uVar10 = uVar10 + 0x1c) {
              fn_828B3E88(uVar10 + 4);
              fn_8265CA20(*(unsigned int *)(uVar10 + 4));
              *(unsigned int *)(uVar10 + 4) = 0;
            }
            fn_8265CA20(*param_1);
          }
          cVar7 = fn_828D5420(param_1,(int)(param_2[1] - *param_2) / 0x1c);
          if (cVar7 == '\0') {
            return param_1;
          }
          uVar6 = *param_1;
          uVar9 = (unsigned __int64)*param_2;
        }
        else {
          uVar9 = (__int64)(int)uVar1 * 0x1c + (unsigned __int64)uVar2;
          fn_828D8138((unsigned __int64)uVar2,uVar9);
          uVar6 = param_1[1];
        }
        uVar6 = fn_828D8190(uVar9,param_2[1],uVar6,param_1 + 3,uStack_40);
        param_1[1] = uVar6;
      }
      else {
        puVar5 = (unsigned int *)fn_828D8138();
        puVar4 = (unsigned int *)param_1[1];
        if (puVar5 != puVar4) {
          puVar5 = puVar5 + 1;
          do {
            fn_828B3E88(puVar5);
            fn_8265CA20(*puVar5);
            *puVar5 = 0;
            puVar8 = puVar5 + 6;
            puVar5 = puVar5 + 7;
          } while (puVar8 != puVar4);
        }
        param_1[1] = ((int)(param_2[1] - *param_2) / 0x1c) * 0x1c + *param_1;
      }
    }
  }
  return param_1;
}


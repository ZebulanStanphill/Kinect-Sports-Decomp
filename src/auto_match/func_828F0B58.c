typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern int fn_828F0AE0();


__int64 fn_828F0B58(unsigned __int64 param_1,unsigned __int64 param_2,char *param_3,unsigned __int64 param_4,
                      unsigned int *param_5,unsigned int *param_6,unsigned int *param_7,
                      unsigned char *param_8)

{
  bool bVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  __int64 lVar7;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  char *pcStack_84;
  unsigned char auStack_80 [64];
  
  piStack_88 = (int *)0x0;
  piStack_90 = (int *)0x0;
  piStack_8c = (int *)0x0;
  if (param_8 == (unsigned char *)0x0) {
    lVar7 = 8;
    ppiVar3 = &piStack_88;
    do {
      ppiVar5 = ppiVar3;
      ppiVar3 = ppiVar5 + 2;
      ppiVar3[0] = (int *)0x0;
      ppiVar3[1] = (int *)0x0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    ppiVar5[4] = (int *)0x0;
    param_8 = auStack_80;
  }
  bVar1 = false;
  if (((param_3 != (char *)0x0) && (*param_3 != 'v')) && (*param_3 != 'p')) {
    bVar1 = true;
    param_4 = param_4 | 0x100000;
  }
  pcStack_84 = param_3;
  if ((bVar1) || ((param_4 & 0x100000) != 0)) {
    lVar7 = fn_828F0AE0(param_1,param_2,&pcStack_84,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    lVar7 = fn_828F0AE0(param_1,param_2,&pcStack_84,param_4,&piStack_88,&piStack_90,&piStack_8c,
                          param_8);
    piVar2 = piStack_90;
    piVar6 = piStack_8c;
    piVar4 = piStack_88;
    if (-1 < lVar7) {
      if (param_7 != (unsigned int *)0x0) {
        *param_7 = piStack_8c;
        piVar6 = (int *)0x0;
      }
      if (param_5 != (unsigned int *)0x0) {
        *param_5 = piStack_88;
        piVar4 = (int *)0x0;
      }
    }
    if (param_6 != (unsigned int *)0x0) {
      piStack_90 = (int *)0x0;
      *param_6 = piVar2;
    }
    if (piVar4 != (int *)0x0) {
      (**(int (***)())(*piVar4 + 8))();
    }
    if (piVar6 != (int *)0x0) {
      (**(int (***)())(*piVar6 + 8))(piVar6);
    }
    if (piStack_90 != (int *)0x0) {
      (**(int (***)())(*piStack_90 + 8))(piStack_90);
    }
  }
  return lVar7;
}


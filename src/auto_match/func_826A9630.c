#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8269B790();
extern unsigned int lbl_82007284;


unsigned int * fn_826A9630(unsigned int *param_1,int *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  unsigned int uVar7;
  char *pcVar8;
  unsigned char bVar10;
  unsigned __int64 uVar9;
  
  *param_1 = &lbl_82007284;
  piVar4 = (int *)(**(int (***)())(*param_2 + 0x40))(param_2);
  *(unsigned char *)(param_1 + 2) = (unsigned char)((unsigned int)piVar4[0x2c0] >> 2) & 1;
  uVar3 = piVar4[0x2c0];
  param_1[3] = param_3;
  *(unsigned char *)((int)param_1 + 9) = (unsigned char)((~(unsigned __int64)uVar3 & 0xffffffff) >> 6) & 1;
  if (param_3 == (char *)0x0) {
    bVar10 = 0;
  }
  else {
    piVar5 = (int *)(**(int (***)())(*piVar4 + 4))(piVar4);
    pcVar8 = (char *)param_1[3];
    pcVar6 = (char *)(**(int (***)())(*piVar5 + 0x30))();
    do {
      cVar2 = *pcVar6;
      cVar1 = *pcVar8;
      if (cVar2 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 == cVar1);
    if (cVar2 == cVar1) {
      bVar10 = (unsigned char)((unsigned int)piVar4[0x2c0] >> 3) & 1;
    }
    else {
      bVar10 = (unsigned char)((unsigned int)piVar4[0x2c0] >> 4) & 1;
    }
  }
  *(unsigned char *)((int)param_1 + 10) = bVar10;
  uVar7 = fn_8269B790(piVar4);
  param_1[1] = uVar7;
  if ((*(char *)((int)param_1 + 10) != '\0') &&
     (pcVar8 = param_3, ((unsigned int)piVar4[0x2c0] >> 5 & 1) == 0)) {
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar9 = ZEXT48(pcVar8 + (-1 - (int)param_3));
    if (uVar9 != 0) {
      do {
        cVar2 = *(char *)(param_1[3] + (int)uVar9);
        if ((cVar2 == '/') || (cVar2 == '\\')) {
          param_1[3] = param_1[3] + (int)uVar9 + 1;
          return param_1;
        }
        uVar9 = uVar9 - 1;
      } while (0 < (__int64)uVar9);
    }
  }
  return param_1;
}


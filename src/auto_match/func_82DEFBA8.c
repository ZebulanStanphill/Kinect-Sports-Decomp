extern unsigned int *auStack_50;
extern int fn_82D89E30();
extern int fn_82D89E78();


unsigned char * fn_82DEFBA8(unsigned char *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  unsigned char auStack_50 [16];
  
  if (*(char *)(param_3 + 0x18) == '\x01') {
    param_3 = *(char *)(param_3 + 0x10) + param_3;
  }
  else {
    param_3 = 0;
  }
  if (*(char *)(param_4 + 0x18) == '\x01') {
    param_4 = *(char *)(param_4 + 0x10) + param_4;
  }
  else {
    param_4 = 0;
  }
  iVar7 = *(int *)(param_2 + 0x2c);
  if ((iVar7 == 0) ||
     (pcVar3 = (char *)(**(int (***)())(*(int *)(iVar7 + 8) + 4))(auStack_50,iVar7 + 8), *pcVar3 != '\0'
     )) {
    if ((param_3 != 0) && (param_4 != 0)) {
      uVar1 = fn_82D89E30(param_4);
      uVar2 = fn_82D89E30(param_3);
      iVar7 = param_4;
      if ((((~(uVar2 ^ uVar1) & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar2 <= uVar1) & 1) == 0) {
        iVar7 = param_3;
        param_3 = param_4;
      }
      iVar4 = fn_82D89E30(iVar7);
      lVar8 = 0;
      if (0 < iVar4) {
        do {
          iVar5 = fn_82D89E78(iVar7,lVar8);
          if (((iVar5 != 0) &&
              (iVar6 = (**(int (***)())(**(int **)(iVar5 + 0xc) + 0x20))(), iVar6 != 0xb)) &&
             ((*(int *)(iVar5 + 0x14) == param_3 || (*(int *)(iVar5 + 0x18) == param_3))))
          goto LAB_82defc30;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < iVar4);
      }
    }
    *param_1 = 1;
  }
  else {
LAB_82defc30:
    *param_1 = 0;
  }
  return param_1;
}


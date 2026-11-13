extern unsigned int *auStack_c0;
extern int fn_82755020();
extern int fn_82F66368();
extern int fn_82F66570();
extern unsigned int stack0x00000000;


__int64 fn_827553F0(unsigned __int64 param_1,unsigned char *param_2,unsigned __int64 param_3,char param_4,
                      unsigned __int64 param_5)

{
  __int64 lVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned int uVar4;
  unsigned char auStack_c0 [192];
  
  if (param_4 == '\0') {
    lVar1 = fn_82755020();
  }
  else {
    lVar1 = 0;
    do {
      iVar2 = fn_82F66570(param_2,0x2c);
      puVar3 = param_2;
      if (iVar2 == 0) {
LAB_82755478:
        lVar1 = fn_82755020(param_1,puVar3,param_3,param_5);
        if (lVar1 != 0) {
          return lVar1;
        }
      }
      else {
        uVar4 = iVar2 - (int)param_2;
        if (uVar4 < 0x80) {
          fn_82F66368(&stack0x00000000 + -0xc0,0x7f,param_2,uVar4);
          param_2 = param_2 + uVar4 + 1;
          auStack_c0[uVar4] = 0;
          puVar3 = &stack0x00000000 + -0xc0;
          goto LAB_82755478;
        }
      }
    } while (iVar2 != 0);
  }
  return lVar1;
}


typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8228E658();
extern unsigned int uStack_2c;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_8228E578(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  char cVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char bVar7;
  unsigned int uStack_2c;
  int *piStack_28;
  
  uStack_2c = 0;
  piStack_28 = (int *)0x0;
  fn_8228E658(&uStack_2c,*param_2 + 0x10);
  piVar2 = piStack_28;
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = ZEXT48(piStack_28);
  if (uVar6 != 0) {
    cVar3 = fn_8223AAC0(uVar6);
    bVar7 = (cVar3 == '\0') << 1;
    if (cVar3 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = piVar2;
      *param_1 = uStack_2c;
    }
    do {
      puVar5 = (unsigned int *)(uVar6 + 8);
      lVar4 = (unsigned __int64)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar4,0,uVar6 + 8);
        *puVar5 = uVar1;
        bVar7 = 2;
      }
    } while (!(bool)(bVar7 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(int (***)())(*piVar2 + 4))(uVar6);
    }
  }
  return param_1;
}


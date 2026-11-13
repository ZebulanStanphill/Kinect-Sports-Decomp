extern int fn_824BF8A8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_82358C90(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar2;
  unsigned int uVar1;
  unsigned int uVar3;
  unsigned int *piVar4;
  struct { int a; int b; } pair;
  
  piVar2 = (int *)fn_8251F720(param_3,0);
  uVar3 = 0;
  uVar1 = fn_8251FBA8(piVar2);
  piVar4 = piVar2;
  if ((int)((uVar1 & 0xffffffff) / 0x88) != 0) {
    do {
      if (*piVar4 != 0) {
        unsigned a = piVar4[0]; unsigned b = piVar4[0x21]; pair.a = a; pair.b = b;
        fn_824BF8A8(param_2,&pair.a);
      }
      piVar4 = piVar4 + 0x22;
      uVar3 = uVar3 + 1;
      uVar1 = fn_8251FBA8(piVar2);
    } while ((uVar3 & 0xffffffff) < (uVar1 & 0xffffffff) / 0x88);
  }
  if (piVar2 != (int *)0x0) {
    fn_8251FA58(piVar2);
  }
  return;
}


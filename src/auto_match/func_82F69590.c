extern unsigned int *auStack_28;
extern int _getptd();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;


unsigned int
_CallSETranslator(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5)

{
  int iVar1;
  unsigned int *puStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned char auStack_28 [24];
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  iVar1 = _getptd();
  (**(int (***)())(iVar1 + 0x74))(*param_1,auStack_28);
  return 0;
}


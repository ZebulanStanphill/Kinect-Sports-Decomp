extern unsigned int *auStack_20;
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F93A00();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001f;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;


void fn_82F91180(unsigned int param_1,unsigned char param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5)

{
  int iVar1;
  int *piVar2;
  unsigned int uStack00000014;
  unsigned char uStack0000001f;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned char auStack_20 [16];
  
  uStack00000014 = param_1;
  uStack0000001f = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  fn_82F90628(auStack_20,(unsigned __int64)param_1 + 4);
  iVar1 = fn_82F93A00((unsigned __int64)uStack00000014 + 0x28);
  if (iVar1 != 0) {
    piVar2 = (int *)fn_82F93A00((unsigned __int64)uStack00000014 + 0x28);
    (**(int (***)())(*piVar2 + 0x24))
              (piVar2,uStack0000001f,uStack00000024,uStack0000002c,uStack00000034);
  }
  fn_82F90680(auStack_20);
  return;
}


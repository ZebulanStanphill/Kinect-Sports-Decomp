extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827E0658();
extern int fn_827E2790();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;


unsigned __int64 fn_827DF420(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned char auStack_30 [4];
  int iStack_2c;
  unsigned char auStack_28 [4];
  int iStack_24;
  
  puVar1 = (unsigned int *)fn_827E2790(auStack_28);
  iVar2 = fn_827D5070(*puVar1);
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  if ((iVar2 != 0) &&
     (iVar2 = *(int *)(param_1 + 0xf4), fn_827E0658(&iStack_2c,param_1 + 0xf0,auStack_30),
     iStack_2c != iVar2)) {
    return 1;
  }
  return 0;
}


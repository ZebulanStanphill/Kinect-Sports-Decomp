#define true 1
extern int fn_82517A50();
extern int fn_8256DE08();
extern int fn_827D98C0();


unsigned int * fn_827D6E18(unsigned int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puStack00000014;
  
  *param_1 = 0;
  param_1[1] = 0;
  puStack00000014 = param_1;
  fn_8256DE08(param_1,0);
  RtlEnterCriticalSection(param_2 + 0x6c);
  puVar2 = *(unsigned int **)(param_2 + 0x44);
  do {
    if (puVar2 == *(unsigned int **)(param_2 + 0x48)) {
LAB_827d6e9c:
      RtlLeaveCriticalSection(param_2 + 0x6c);
      return param_1;
    }
    iVar1 = fn_827D98C0(*puVar2);
    if (iVar1 == param_3) {
      fn_82517A50(param_1,puVar2);
      goto LAB_827d6e9c;
    }
    puVar2 = puVar2 + 2;
  } while( true );
}


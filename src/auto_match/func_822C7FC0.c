extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_822C8A18();
extern int fn_823F2E20();
extern unsigned int iStack_1c;


void fn_822C7FC0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  if (0xf < (unsigned int)param_2[5]) {
    param_2 = (unsigned int *)*param_2;
  }
  uVar2 = fn_822C8A18(auStack_20,(unsigned __int64)uVar1,param_2);
  fn_823F2E20((unsigned __int64)uVar1 + 0x28,uVar2);
  if (iStack_1c != 0) {
    fn_822315A0();
    return;
  }
  return;
}


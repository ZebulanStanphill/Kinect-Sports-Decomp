extern int fn_8265C940();
extern int fn_82BD8038();


unsigned __int64 fn_82BD8120(int param_1,unsigned int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  piVar1 = (int *)fn_8265C940(0x14,0x618a8005);
  if (piVar1 != (int *)0x0) {
    iVar3 = param_1 << 3;
    iVar2 = fn_8265C940(iVar3,0x618a0003);
    piVar1[4] = iVar2;
    if (iVar2 != 0) {
      for (; param_1 != 0; param_1 = param_1 + -1) {
        iVar3 = iVar3 + -8;
        iVar2 = piVar1[4] + iVar3;
        *(unsigned int *)(iVar2 + 4) = 0;
        if (piVar1[1] == 0) {
          *piVar1 = iVar2;
        }
        else {
          *(int *)(piVar1[1] + 4) = iVar2;
        }
        piVar1[1] = iVar2;
      }
      goto LAB_82bd8164;
    }
  }
  uVar4 = 0xffffffff8007000e;
  fn_82BD8038(piVar1);
  piVar1 = (int *)0x0;
LAB_82bd8164:
  *param_2 = piVar1;
  return uVar4;
}


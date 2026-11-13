extern int fn_8265C940();
extern int fn_8265C990();


unsigned int fn_82A68EA0(unsigned int param_1,unsigned int param_2)

{
  unsigned int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if ((((int)param_2 >= 0) && (param_1 <= 0xffffffff - param_2)) &&
     (iVar1 = fn_8265C940(param_1 + param_2,0x248c8000), iVar1 != 0)) {
    if ((int)param_2 >= 4) {
      uVar3 = 0;
      uVar2 = param_2;
      while (1 < uVar2) {
        uVar3 = uVar3 + 1;
        uVar2 = param_2 >> uVar3;
      }
      uVar2 = iVar1 + param_2 & -1 << uVar3;
      *(char *)(uVar2 - 1) = (char)uVar2 - (char)iVar1;
      return uVar2;
    }
    fn_8265C990(iVar1,0x248c8000);
  }
  return 0;
}


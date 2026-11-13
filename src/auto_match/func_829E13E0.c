extern int fn_829E0C20();
extern int fn_829E0D20();
extern int fn_829E0E48();
extern int fn_829E1340();
extern int fn_82A1DDC0();


unsigned int fn_829E13E0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  short *psVar3;
  
  if (((param_3 & 0xffff) != 0) &&
     (puVar1 = (unsigned int *)fn_829E0C20(param_2,param_3), puVar1 != (unsigned int *)0x0)) {
    fn_82A1DDC0(param_1 + 0xd4c0,puVar1 + 2,4);
    psVar3 = (short *)((*puVar1 >> 0xe) + (int)puVar1);
    if (*psVar3 != 0) {
      uVar2 = fn_829E0E48(param_1,param_2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (psVar3[1] != 0) {
        uVar2 = fn_829E1340(param_1 + 0x70,param_2);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        if (psVar3[2] != 0) {
          uVar2 = fn_829E0D20(param_1 + 0x3820,param_2);
          return (int)uVar2 >> 0x1f & uVar2;
        }
      }
    }
  }
  return 0x80004005;
}


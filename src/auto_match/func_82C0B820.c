extern unsigned int *auStack_40;
extern int fn_82C17460();
extern int fn_82C1CDD0();


unsigned int fn_82C0B820(int param_1,unsigned short *param_2,unsigned short *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned short *puVar1;
  int iVar2;
  unsigned short *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int auStack_40 [8];
  
  auStack_40[0] = 0;
  if ((((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x248), iVar2 == 0)) ||
      (param_2 == (unsigned short *)0x0)) ||
     (((param_6 & 0xffffffff) == 0 ||
      (puVar5 = (unsigned int *)(param_1 + 0x24c), *(int *)(param_1 + 0x24c) != 3)))) {
    return 0;
  }
  if (((param_3 == (unsigned short *)0x0) || (param_3 == param_2 + 1)) ||
     (*(unsigned short *)(param_1 + 0x4c) < 2)) {
    iVar2 = fn_82C1CDD0(iVar2,param_5,auStack_40,param_2,param_4,0,param_6,puVar5);
  }
  else {
    iVar2 = fn_82C1CDD0(iVar2,(param_5 & 0xffffffff) >> 1 & 0x7fff,auStack_40,param_2,param_4,
                              0,param_6,puVar5);
    if (iVar2 < 0) goto LAB_82c0b93c;
    if (auStack_40[0] != 0) {
      uVar4 = 0;
      param_3 = param_3 + -1;
      puVar3 = param_2 + -1;
      do {
        uVar4 = uVar4 + 1 & 0xffff;
        puVar3 = puVar3 + 1;
        *puVar3 = *param_2;
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3 = param_3 + 1;
        *param_3 = *puVar1;
      } while (uVar4 < auStack_40[0]);
    }
  }
  if (-1 < iVar2) {
    if (auStack_40[0] == 0) {
      *(unsigned int *)(param_1 + 0x22c) = 0;
      *puVar5 = 2;
      return 0;
    }
    *(unsigned int *)(param_1 + 0x22c) = auStack_40[0];
    return auStack_40[0];
  }
LAB_82c0b93c:
  *(unsigned int *)(param_1 + 0x22c) = 0;
  auStack_40[0] = 0;
  *(unsigned int *)(param_1 + 0x188) = 7;
  *puVar5 = 1;
  fn_82C17460(*(unsigned int *)(param_1 + 0x248));
  return auStack_40[0];
}


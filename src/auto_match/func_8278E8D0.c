extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_8278BFA8();
extern int fn_8278CCD8();
extern int fn_8278E3E8();
extern int fn_8278E638();


unsigned __int64 fn_8278E8D0(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int auStack_30 [12];
  
  auStack_30[0] = (unsigned int)param_2;
  piVar5 = (int *)(param_1 + 0xc);
  iVar2 = fn_8278CCD8(piVar5,auStack_30);
  if (iVar2 < 0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3 = (unsigned int *)(iVar2 * 0xc + *piVar5 + 0x10);
  }
  if (puVar3 == (unsigned int *)0x0) {
    uVar4 = 0;
    if ((unsigned int *)*piVar5 != (unsigned int *)0x0) {
      uVar4 = *(unsigned int *)*piVar5;
    }
    if (*(unsigned int *)(param_1 + 0x14) <= uVar4) {
      fn_8278E638(param_1,0);
    }
    uVar1 = fn_8267B890(*(unsigned int *)(param_1 + 0x1c),0x18,0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_8278BFA8(uVar1,param_2);
    }
    auStack_30[0] = (unsigned int)uVar1;
    fn_8278E3E8(piVar5,piVar5,auStack_30);
  }
  else {
    *(int *)(*puVar3 + 4) = *(int *)(*puVar3 + 4) + 1;
    uVar1 = (unsigned __int64)*puVar3;
  }
  return uVar1;
}


extern int fn_8265C940();
extern int fn_828FC3D0();
extern int fn_82F68CC0();


unsigned __int64 fn_828FCDE0(int param_1,char *param_2,unsigned int param_3,unsigned int param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char *pcVar6;
  
  uVar3 = fn_828FC3D0(param_2);
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  lVar4 = fn_8265C940((int)pcVar6 - (int)param_2,0x24810000);
  if (lVar4 != 0) {
    fn_82F68CC0(lVar4,param_2,(int)pcVar6 - (int)param_2);
    puVar5 = (unsigned int *)fn_8265C940(0x24,0x24810000);
    if (puVar5 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      uVar2 = *(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + param_1);
      puVar5[3] = 0;
      *puVar5 = (int)lVar4;
      puVar5[1] = param_3;
      puVar5[2] = param_4;
      puVar5[8] = uVar2;
    }
    if (puVar5 != (unsigned int *)0x0) {
      *(unsigned int **)((int)((uVar3 & 0xffffffff) << 2) + param_1) = puVar5;
      return 0;
    }
  }
  return 0xffffffff8007000e;
}


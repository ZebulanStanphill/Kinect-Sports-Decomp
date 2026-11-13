extern int fn_828F5390();
extern int fn_828F5690();


unsigned __int64 fn_828F5778(int param_1,unsigned char *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  
  iVar4 = fn_828F5690();
  if (iVar4 == 0) {
    iVar4 = fn_828F5390(param_1,param_2);
    for (puVar1 = *(unsigned int **)((iVar4 + 0x1e) * 4 + param_1); puVar1 != (unsigned int *)0x0;
        puVar1 = (unsigned int *)puVar1[3]) {
      pbVar5 = (unsigned char *)*puVar1;
      pbVar6 = param_2;
      do {
        uVar3 = (unsigned int)*pbVar5;
        uVar2 = (unsigned int)*pbVar6;
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 == uVar3);
      if ((int)(uVar2 - uVar3) < 0) {
        return 0;
      }
      if (uVar2 == uVar3) {
        if (param_3 != (unsigned int *)0x0) {
          *param_3 = puVar1[1];
        }
        if (param_4 != (unsigned int *)0x0) {
          *param_4 = puVar1[2];
        }
        return 1;
      }
    }
  }
  return 0;
}


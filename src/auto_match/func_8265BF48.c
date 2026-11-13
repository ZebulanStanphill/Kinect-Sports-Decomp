extern unsigned int *auStack_4f;
extern int fn_82F691F0();
extern unsigned int lbl_82000E38;


unsigned __int64 fn_8265BF48(unsigned char *param_1,unsigned char param_2)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  char *pcVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  int iVar6;
  unsigned char auStack_4f [47];
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (((((bVar1 == 0x61) && (param_1[1] == 0x69)) && (param_1[2] == 100)) && (param_1[3] == 0x5f))
       || (((bVar1 == 0x41 && (param_1[1] == 0x4d)) &&
           ((param_1[2] == 0x49 && ((param_1[3] == 0x44 && (param_1[4] == 0x5f)))))))) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_4f,0,0x1f);
    }
    pcVar3 = strstr((char *)param_1,"XACT_CUE_");
    pbVar4 = param_1;
    if (pcVar3 != (char *)0x0) {
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      iVar6 = (int)pbVar4 - (int)param_1;
      pbVar4 = param_1;
      while (iVar6 != 1) {
        bVar1 = *pbVar4;
        if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
          *pbVar4 = bVar1 - 0x20;
        }
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar4;
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
        iVar6 = (int)pbVar5 - (int)pbVar4;
      }
      param_1 = param_1 + 10;
    }
    uVar2 = 0xffffffffffffffff;
    pbVar4 = param_1;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    iVar6 = (int)pbVar4 - (int)param_1;
    while ((iVar6 != 1 && (bVar1 = *param_1, bVar1 != param_2))) {
      param_1 = param_1 + 1;
      uVar2 = (unsigned __int64)*(unsigned int *)(&lbl_82000E38 + (int)((uVar2 & 0xff ^ (unsigned __int64)bVar1) << 2)) ^
              (uVar2 & 0xffffffff) >> 8;
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      iVar6 = (int)pbVar4 - (int)param_1;
    }
  }
  return uVar2;
}


extern unsigned int lbl_82024D24;


unsigned int * fn_828DC838(int param_1,int param_2,unsigned int *param_3)

{
  unsigned short *puVar1;
  unsigned short *puVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  
  if (param_1 != param_2) {
    iVar4 = param_1 + 8;
    do {
      if (param_3 != (unsigned int *)0x0) {
        *param_3 = &lbl_82024D24;
        puVar2 = (unsigned short *)(iVar4 + -2);
        param_3[1] = *(unsigned int *)(iVar4 + -4);
        puVar1 = (unsigned short *)((int)param_3 + 6);
        lVar5 = 0x15;
        do {
          puVar2 = puVar2 + 1;
          puVar1 = puVar1 + 1;
          *puVar1 = *puVar2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_3 = param_3 + 0xd;
      iVar3 = iVar4 + 0x2c;
      iVar4 = iVar4 + 0x34;
    } while (iVar3 != param_2);
  }
  return param_3;
}


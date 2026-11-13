extern int fn_822A53D8();
extern int fn_82F68CC0();
extern unsigned int lbl_821B9328;


unsigned int * fn_824382F0(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  char cVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  
  if (param_1 != param_2) {
    puVar5 = param_3 + 3;
    iVar4 = (int)param_3 - (int)param_1;
    puVar8 = param_1 + 1;
    do {
      if (param_3 != (unsigned int *)0x0) {
        *param_3 = &lbl_821B9328;
        puVar5[-1] = 0;
        puVar7 = (unsigned int *)(iVar4 + (int)puVar8);
        *(unsigned int *)(iVar4 + (int)puVar8) = 0;
        *puVar5 = 0;
        cVar2 = fn_822A53D8(puVar7,(int)(puVar8[1] - *puVar8) / 0x5c);
        if (cVar2 != '\0') {
          uVar3 = (unsigned __int64)*puVar8;
          uVar1 = puVar8[1];
          uVar6 = (unsigned __int64)*puVar7;
          if (uVar3 != uVar1) {
            do {
              if ((uVar6 & 0xffffffff) != 0) {
                fn_82F68CC0(uVar6,uVar3,0x5c);
              }
              uVar3 = uVar3 + 0x5c;
              uVar6 = uVar6 + 0x5c;
            } while ((uVar3 & 0xffffffff) != (unsigned __int64)uVar1);
          }
          puVar7[1] = (unsigned int)uVar6;
        }
        puVar5[2] = puVar8[4];
      }
      param_3 = param_3 + 6;
      puVar7 = puVar8 + 5;
      puVar5 = puVar5 + 6;
      puVar8 = puVar8 + 6;
    } while (puVar7 != param_2);
  }
  return param_3;
}


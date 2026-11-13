extern int fn_828FA8D8();


unsigned __int64 fn_828FC5B8(unsigned int *param_1,int param_2)

{
  unsigned char *pbVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char bVar5;
  unsigned __int64 uVar6;
  
  pbVar1 = *(unsigned char **)(param_2 + 8);
  uVar2 = 0;
  uVar3 = 0;
  if ((pbVar1 == (unsigned char *)0x0) || (bVar5 = *pbVar1, pbVar4 = pbVar1, bVar5 == 0)) {
    uVar2 = 0xf0000;
  }
  else {
    do {
      if (bVar5 < 0x78) {
        if ((bVar5 == 0x77) || (bVar5 == 0x61)) {
          uVar6 = 3;
          uVar2 = uVar2 | 0x80000;
        }
        else {
          if (bVar5 != 0x62) {
            if (bVar5 == 0x67) goto LAB_828fc67c;
            if (bVar5 != 0x72) goto LAB_828fc688;
            goto LAB_828fc620;
          }
LAB_828fc670:
          uVar6 = 2;
          uVar2 = uVar2 | 0x40000;
        }
      }
      else if (bVar5 == 0x78) {
LAB_828fc620:
        uVar6 = 0;
        uVar2 = uVar2 | 0x10000;
      }
      else {
        if (bVar5 != 0x79) {
          if (bVar5 != 0x7a) goto LAB_828fc688;
          goto LAB_828fc670;
        }
LAB_828fc67c:
        uVar6 = 1;
        uVar2 = uVar2 | 0x20000;
      }
      if ((pbVar4 != pbVar1) && (uVar6 <= uVar3)) {
LAB_828fc688:
        fn_828FA8D8(*param_1,param_2,0x7d3,0xffffffff8202c54c);
        param_1[0x13] = 1;
        return 0;
      }
      bVar5 = pbVar4[1];
      uVar3 = uVar6;
      pbVar4 = pbVar4 + 1;
    } while (bVar5 != 0);
  }
  return uVar2;
}


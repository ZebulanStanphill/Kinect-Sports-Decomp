extern int fn_828FA8D8();


unsigned int fn_82936020(unsigned int *param_1,int param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  unsigned int uVar5;
  int iVar6;
  
  pbVar4 = *(unsigned char **)(param_2 + 8);
  iVar6 = 0;
  uVar3 = 0;
  if ((pbVar4 == (unsigned char *)0x0) || (*pbVar4 == 0)) {
    uVar3 = 0xe4;
  }
  else {
    uVar5 = 0;
    do {
      bVar1 = *pbVar4;
      if (bVar1 != 0) {
        if (bVar1 < 0x78) {
          if ((bVar1 == 0x77) || (bVar1 == 0x61)) {
            iVar6 = 3;
          }
          else {
            if (bVar1 != 0x62) {
              if (bVar1 == 0x67) goto LAB_8293610c;
              if (bVar1 == 0x72) goto LAB_82936098;
              goto LAB_829360c0;
            }
LAB_82936104:
            iVar6 = 2;
          }
        }
        else if (bVar1 == 0x78) {
LAB_82936098:
          iVar6 = 0;
        }
        else {
          if (bVar1 != 0x79) {
            if (bVar1 == 0x7a) goto LAB_82936104;
            goto LAB_829360c0;
          }
LAB_8293610c:
          iVar6 = 1;
        }
        pbVar4 = pbVar4 + 1;
      }
      uVar2 = uVar5 & 0x3f;
      uVar5 = uVar5 + 2;
      uVar3 = iVar6 << uVar2 | uVar3;
    } while (uVar5 < 8);
    if (*pbVar4 != 0) {
LAB_829360c0:
      fn_828FA8D8(*param_1,param_2,0x7d4,0xffffffff8202c560);
      uVar3 = 0;
      param_1[0xd] = 1;
    }
  }
  return uVar3;
}


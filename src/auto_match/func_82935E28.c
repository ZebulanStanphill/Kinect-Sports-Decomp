typedef unsigned char bool;
extern int fn_828FA8D8();
extern unsigned int lbl_821AC4B4;


unsigned int fn_82935E28(unsigned int *param_1,int param_2)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned int uVar8;
  unsigned char *pbVar9;
  int iVar10;
  
  pbVar6 = *(unsigned char **)(param_2 + 8);
  if ((pbVar6 == (unsigned char *)0x0) || (*pbVar6 == 0)) {
    uVar5 = 0x8d1;
  }
  else {
    pbVar7 = &lbl_821AC4B4;
    pbVar9 = pbVar6;
    do {
      bVar2 = *pbVar9;
      bVar3 = *pbVar7;
      if (bVar2 == 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 == bVar3);
    if (bVar2 == bVar3) {
      uVar5 = 0xfff;
    }
    else {
      uVar5 = 0;
      uVar8 = 0;
      do {
        if (0xb < uVar8) goto LAB_82935f60;
        bVar2 = *pbVar6;
        if (bVar2 < 0x68) {
          if (bVar2 == 0x67) {
LAB_82935f34:
            iVar10 = 2;
          }
          else if (bVar2 == 0x30) {
            iVar10 = 5;
          }
          else if (bVar2 == 0x31) {
            iVar10 = 6;
          }
          else {
            if (bVar2 != 0x5f) {
              if (bVar2 != 0x61) {
                bVar1 = bVar2 == 0x62;
                goto LAB_82935f28;
              }
              goto LAB_82935f3c;
            }
            iVar10 = 7;
          }
LAB_82935eec:
          uVar4 = iVar10 << (uVar8 & 0x3f);
        }
        else {
          if (bVar2 != 0x72) {
            if (bVar2 == 0x77) {
LAB_82935f3c:
              iVar10 = 4;
            }
            else {
              if (bVar2 == 0x78) goto LAB_82935f44;
              if (bVar2 == 0x79) goto LAB_82935f34;
              bVar1 = bVar2 == 0x7a;
LAB_82935f28:
              if (!bVar1) {
LAB_82935f60:
                fn_828FA8D8(*param_1,param_2,0x7d3,0xffffffff8202c54c);
                param_1[0xd] = 1;
                return 0;
              }
              iVar10 = 3;
            }
            goto LAB_82935eec;
          }
LAB_82935f44:
          uVar4 = 1 << (uVar8 & 0x3f);
        }
        uVar5 = uVar4 | uVar5;
        pbVar6 = pbVar6 + 1;
        uVar8 = uVar8 + 3;
      } while (*pbVar6 != 0);
    }
  }
  return uVar5;
}


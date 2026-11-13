#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_54;
extern int fn_82A20370();
extern int fn_82F6DF30();


unsigned int fn_82A21DC0(int param_1,unsigned int param_2,unsigned char *param_3,unsigned __int64 param_4,int param_5)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char *pbVar6;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  unsigned char *pbStack_60;
  unsigned char *pbStack_5c;
  unsigned char *pbStack_58;
  unsigned int auStack_54 [21];
  
  pbVar6 = (unsigned char *)param_4;
  pbStack_60 = param_3;
  pbStack_5c = pbVar6;
  fn_82A20370(&pbStack_60,&pbStack_5c,0x3a);
  pbVar10 = pbStack_5c;
  pbVar9 = pbStack_60;
  if ((pbStack_5c != (unsigned char *)0x0) && (*pbStack_60 == 0x5c)) {
    pbVar10 = pbStack_5c + -1;
    pbVar9 = pbStack_60 + 1;
  }
  uVar2 = CONCAT44(pbVar10,pbVar10);
  for (; pbVar10 != (unsigned char *)0x0; pbVar10 = pbVar10 + -1) {
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar4 = fn_82F6DF30(bVar1);
    uVar2 = (uVar4 ^ (uVar2 & 0xff) * 0x11) & 0xffffffff;
  }
  if (param_2 < *(unsigned short *)(param_1 + 8)) {
    do {
      puVar8 = (unsigned int *)((param_2 - *(unsigned short *)(param_1 + 0xc)) * 4 + (unsigned int)*(unsigned short *)(param_1 + 4)
                       + param_1);
      pbStack_5c = (unsigned char *)((*puVar8 & 0xffff) + param_1);
      if ((unsigned __int64)*pbStack_5c == (uVar2 & 0xff)) {
        pbStack_5c = pbStack_5c + 1;
        uVar4 = (unsigned __int64)*(unsigned char *)((int)puVar8 + 1) - 1;
        auStack_54[0] = (unsigned int)uVar4;
        if (param_5 == 0) {
          if ((param_4 & 0xffffffff) == (uVar4 & 0xffffffff)) {
            lVar7 = 0;
            if ((param_4 & 0xffffffff) != 0) {
              pbVar10 = param_3;
              do {
                lVar7 = (unsigned __int64)*pbVar10 - (unsigned __int64)*pbStack_5c;
                if (lVar7 != 0) break;
                pbVar10 = pbVar10 + 1;
                pbStack_5c = pbStack_5c + 1;
              } while (pbVar10 != param_3 + (int)pbVar6);
            }
            iVar3 = (int)lVar7;
            goto LAB_82a21f94;
          }
        }
        else {
          pbStack_60 = param_3;
          pbStack_58 = pbVar6;
          if (((param_4 & 0xffffffff) == (uVar4 & 0xffffffff)) &&
             (iVar3 = RtlCompareStringN(param_3,param_4,pbStack_5c,uVar4,1), iVar3 == 0)) {
            return param_2;
          }
          fn_82A20370(&pbStack_60,&pbStack_58,0x3a);
          fn_82A20370(&pbStack_5c,auStack_54);
          uVar4 = ZEXT48(pbStack_58);
          pbVar10 = pbStack_60;
          if ((uVar4 != 0) && (*pbStack_60 == 0x5c)) {
            uVar4 = uVar4 - 1;
            pbVar10 = pbStack_60 + 1;
          }
          uVar5 = (unsigned __int64)auStack_54[0];
          pbVar9 = pbStack_5c;
          if ((uVar5 != 0) && (*pbStack_5c == 0x5c)) {
            uVar5 = uVar5 - 1;
            pbVar9 = pbStack_5c + 1;
          }
          if ((uVar4 & 0xffffffff) == (uVar5 & 0xffffffff)) {
            iVar3 = RtlCompareStringN(pbVar10,uVar4,pbVar9,uVar5,1);
LAB_82a21f94:
            if (iVar3 == 0) {
              return param_2;
            }
          }
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(unsigned short *)(param_1 + 8));
  }
  return 0xffffffff;
}


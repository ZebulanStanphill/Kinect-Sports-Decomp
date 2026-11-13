extern unsigned int *auStack_50;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E64220();
extern int fn_82E64450();
extern int fn_82E644B8();
extern int fn_82E72FC0();
extern int fn_82E7E7E0();


unsigned __int64 fn_82E64A80(int param_1,unsigned char *param_2,unsigned short *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  int iVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int auStack_50 [20];
  
  fn_82E50CB8(param_1 + 0xc);
  if (*(int *)(param_1 + 0xb8) == -1) {
    uVar10 = 0xffffffff80004005;
  }
  else {
    lVar3 = fn_82E644B8(param_1 + 0x4c,*(int *)(param_1 + 0xb8),auStack_50);
    uVar9 = -(unsigned int)(lVar3 != 0) & auStack_50[0];
    if (uVar9 == 0) {
LAB_82e64adc:
      uVar10 = 0xffffffff80004003;
    }
    else {
      uVar8 = 0;
      if (*(int *)(uVar9 + 0x6c) != 0) {
        do {
          lVar3 = fn_82E64450(uVar9 + 4,uVar8,auStack_50);
          pbVar4 = (unsigned char *)(-(unsigned int)(lVar3 != 0) & auStack_50[0]);
          if (pbVar4 == (unsigned char *)0x0) goto LAB_82e64adc;
          pbVar6 = param_2;
          pbVar7 = pbVar4;
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar6;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar6 = pbVar6 + 1;
          } while (pbVar7 != pbVar4 + 0x10);
          if (((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
             (*(int *)(pbVar4 + 0x10) == *(int *)(param_2 + 0x10))) goto LAB_82e64bf8;
          uVar8 = uVar8 + 1;
        } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(uVar9 + 0x6c));
      }
      pbVar4 = (unsigned char *)fn_82E50BE8(0x28,0,0,0,0);
      if (pbVar4 != (unsigned char *)0x0) {
        *(unsigned int *)pbVar4 = *(unsigned int *)param_2;
        *(unsigned int *)(pbVar4 + 4) = *(unsigned int *)(param_2 + 4);
        *(unsigned int *)(pbVar4 + 8) = *(unsigned int *)(param_2 + 8);
        *(unsigned int *)(pbVar4 + 0xc) = *(unsigned int *)(param_2 + 0xc);
        *(unsigned int *)(pbVar4 + 0x10) = *(unsigned int *)(param_2 + 0x10);
        pbVar4[0x18] = 0;
        pbVar4[0x19] = 0;
        pbVar4[0x1a] = 0;
        pbVar4[0x1b] = 0;
        pbVar4[0x1c] = 0;
        pbVar4[0x1d] = 0;
        pbVar4[0x1e] = 0;
        pbVar4[0x1f] = 0;
        pbVar4[0x20] = 0;
        pbVar4[0x21] = 0;
        pbVar4[0x22] = 0;
        pbVar4[0x23] = 0;
        pbVar4[0x24] = 0;
        pbVar4[0x25] = 0;
        pbVar4[0x26] = 0;
        pbVar4[0x27] = 0;
        iVar5 = fn_82E64220(uVar9 + 4,pbVar4,0);
        if (iVar5 != 0) {
LAB_82e64bf8:
          fn_82E7E7E0(pbVar4 + 0x18);
          uVar10 = fn_82E72FC0(pbVar4 + 0x18,param_3,*param_3);
          goto LAB_82e64c18;
        }
        fn_82E4FE40(pbVar4);
      }
      uVar10 = 0xffffffff8007000e;
    }
  }
LAB_82e64c18:
  fn_82E50F10(param_1 + 0xc);
  return uVar10;
}


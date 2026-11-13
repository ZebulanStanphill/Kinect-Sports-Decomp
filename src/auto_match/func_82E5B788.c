extern unsigned int *auStack_60;
extern int fn_82E5AF48();
extern int fn_82F68CC0();
extern unsigned int lbl_82154BD8;
extern unsigned int lbl_82154BE8;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_82E5B788(int param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned __int64 uVar7;
  unsigned char *pbVar8;
  unsigned int auStack_60 [4];
  unsigned int uStack_50;
  unsigned short uStack_4c;
  unsigned short uStack_4a;
  unsigned __int64 uStack_48;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    do {
      lVar4 = fn_82E5AF48(param_1 + 0x8c,uVar7,auStack_60);
      pbVar8 = (unsigned char *)(-(unsigned int)(lVar4 != 0) & auStack_60[0]);
      pbVar6 = &lbl_82154BD8;
      pbVar5 = pbVar8;
      if (pbVar8 != (unsigned char *)0x0) {
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != &lbl_82154BE8);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          uStack_50 = (unsigned int)pbVar8[3] << 0x18 | (unsigned int)pbVar8[2] << 0x10 | (unsigned int)pbVar8[1] << 8 |
                      (unsigned int)*pbVar8;
          uStack_48 = *(unsigned __int64 *)(pbVar8 + 8);
          uStack_4c = *(unsigned short *)(pbVar8 + 4) << 8 | *(unsigned short *)(pbVar8 + 4) >> 8;
          uStack_4a = *(unsigned short *)(pbVar8 + 6) << 8 | *(unsigned short *)(pbVar8 + 6) >> 8;
          fn_82F68CC0(*param_2,&uStack_50,0x10);
          uVar3 = *param_2;
          *param_2 = uVar3 + 0x10;
          *(unsigned short *)(uVar3 + 0x10) =
               *(unsigned short *)(pbVar8 + 0x10) << 8 | *(unsigned short *)(pbVar8 + 0x10) >> 8;
          uVar3 = *param_2;
          *param_2 = uVar3 + 2;
          *(unsigned int *)(uVar3 + 2) =
               (unsigned int)pbVar8[0x17] << 0x18 | (unsigned int)pbVar8[0x16] << 0x10 | (unsigned int)pbVar8[0x15] << 8 |
               (unsigned int)pbVar8[0x14];
          uVar3 = *param_2;
          *param_2 = (unsigned int)((unsigned __int64)uVar3 + 4);
          if (*(int *)(pbVar8 + 0x14) != 0) {
            fn_82F68CC0((unsigned __int64)uVar3 + 4,*(unsigned int *)(pbVar8 + 0x18));
            *param_2 = *param_2 + *(int *)(pbVar8 + 0x14);
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xf4));
  }
  return 0;
}


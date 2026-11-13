extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82F691F0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


void fn_82A362D0(unsigned int *param_1)

{
  int iVar1;
  unsigned short *puVar2;
  unsigned char *pbVar3;
  __int64 lVar4;
  unsigned short auStack_50 [2];
  unsigned char auStack_4c [8];
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned char auStack_34 [3];
  unsigned char bStack_31;
  unsigned char auStack_30 [48];
  
  auStack_50[0] = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  iVar1 = ExGetXConfigSetting(3,1,&uStack_44,4,auStack_50);
  if (-1 < iVar1) {
    *param_1 = uStack_44;
    iVar1 = ExGetXConfigSetting(3,2,auStack_34,4,auStack_50);
    if (-1 < iVar1) {
      pbVar3 = (unsigned char *)((int)&uStack_38 + 3);
      puVar2 = (unsigned short *)((int)param_1 + 2);
      lVar4 = 4;
      do {
        pbVar3 = pbVar3 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = (unsigned short)*pbVar3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *(unsigned short *)(param_1 + 3) = 0;
      iVar1 = ExGetXConfigSetting(3,3,auStack_30,4,auStack_50);
      if (-1 < iVar1) {
        pbVar3 = &bStack_31;
        puVar2 = (unsigned short *)((int)param_1 + 0x56);
        lVar4 = 4;
        do {
          pbVar3 = pbVar3 + 1;
          puVar2 = puVar2 + 1;
          *puVar2 = (unsigned short)*pbVar3;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        *(unsigned short *)(param_1 + 0x18) = 0;
        iVar1 = ExGetXConfigSetting(3,4,auStack_4c,4,auStack_50);
        if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(param_1 + 0x11,0,0x10);
        }
      }
    }
  }
  RtlNtStatusToDosError();
  return;
}


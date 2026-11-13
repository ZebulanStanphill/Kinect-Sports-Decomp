#define true 1
extern unsigned int fStack_70;
extern int fn_825889E0();
extern int fn_8263FB88();
extern unsigned int lbl_8320A898;
extern unsigned int uStack00000038;


void fn_82588890(double param_1,unsigned __int64 param_2,short *param_3,short *param_4,float *param_5,
                  unsigned int *param_6,unsigned __int64 param_7,unsigned __int64 param_8,unsigned __int64 param_9)

{
  unsigned int uVar1;
  short sVar2;
  __int64 lVar3;
  short *psVar4;
  int iVar5;
  double dVar6;
  unsigned __int64 uStack00000038;
  float fStack_70;
  
  iVar5 = 0;
  psVar4 = param_3;
  if (*param_3 != 0) {
    do {
      if (param_4 <= psVar4) break;
      if (*psVar4 != 0x20) {
        iVar5 = iVar5 + 1;
      }
      psVar4 = psVar4 + 1;
    } while (*psVar4 != 0);
    if (iVar5 != 0) {
      fStack_70 = *param_5;
      dVar6 = (double)fStack_70;
      uVar1 = *param_6;
      uStack00000038 = param_8;
      lVar3 = fn_8263FB88(lbl_8320A898,0xd,iVar5 << 2,0x14);
      if (-1 < (__int64)-(unsigned __int64)(lVar3 == 0)) {
        sVar2 = *param_3;
        while( true ) {
          if ((sVar2 == 0) || (param_4 <= param_3)) break;
          if (sVar2 == 0x20) {
            fStack_70 = (float)(dVar6 + param_1);
          }
          else {
            fn_825889E0(param_2,sVar2,param_9);
          }
          dVar6 = (double)fStack_70;
          param_3 = param_3 + 1;
          sVar2 = *param_3;
        }
        *(unsigned int *)(lbl_8320A898 + 0x30) = *(unsigned int *)(lbl_8320A898 + 0x3554);
      }
      *param_5 = (float)dVar6;
      *param_6 = uVar1;
    }
  }
  return;
}


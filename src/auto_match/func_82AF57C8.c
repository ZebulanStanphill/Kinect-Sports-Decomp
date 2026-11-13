typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AF4E80();
extern int fn_82B8BCB0();


unsigned __int64
fn_82AF57C8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,int *param_4,unsigned __int64 param_5,
             unsigned int *param_6)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  char cVar5;
  unsigned int uVar4;
  
  if (param_4 == param_2) {
LAB_82af57f0:
    uVar4 = *param_6 | 0x800;
LAB_82af57f8:
    param_6[1] = (unsigned int)param_2;
    uVar3 = 1;
    *param_6 = uVar4;
  }
  else {
    if ((param_4[2] & 0x3f80U) != 0x3700) {
      cVar5 = fn_82B8BCB0(param_1,param_2,param_5,1);
      if (cVar5 != '\0') {
        for (iVar1 = *param_2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
          if (*(int **)(iVar1 + 0xc) == param_4) {
            bVar2 = true;
            goto LAB_82af5860;
          }
        }
        bVar2 = false;
LAB_82af5860:
        if (bVar2) goto LAB_82af57f0;
        cVar5 = fn_82B8BCB0(param_1,param_4,param_2,1);
        if ((cVar5 != '\0') && (uVar4 = fn_82AF4E80(param_1,param_2,param_3,0,param_4), uVar4 < 5)
           ) {
          uVar4 = *param_6 & 0xfffff7ff;
          goto LAB_82af57f8;
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


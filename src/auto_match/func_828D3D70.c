typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern unsigned int *auStack_5c;
extern unsigned int fStack_60;
extern int fn_822315A0();
extern int fn_828D3C88();
extern int fn_82F68CC0();
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;
extern unsigned int uStack_64;
extern unsigned int uStack_70;


unsigned __int64
fn_828D3D70(double param_1,int param_2,int param_3,int param_4,int param_5,unsigned __int64 param_6,
             unsigned __int64 param_7,unsigned __int64 *param_8,unsigned __int64 param_9)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  unsigned int uStack_70;
  int iStack_6c;
  int iStack_68;
  unsigned int uStack_64;
  float fStack_60;
  unsigned char auStack_5c [36];
  unsigned __int64 uStack_38;
  unsigned char auStack_30 [48];
  
  if (param_4 == 0) {
    bVar1 = false;
    for (iVar2 = *(int *)(param_2 + 0x14); iVar2 != *(int *)(param_2 + 0x18); iVar2 = iVar2 + 0x50)
    {
      if (*(int *)(iVar2 + 8) == param_5) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      uStack_70 = 0;
      iStack_6c = 0;
      uStack_64 = 0;
      fStack_60 = lbl_821AAD20;
      iStack_68 = param_5;
      fn_82F68CC0(auStack_5c,param_7,0x24);
      uStack_38 = *param_8;
      fn_82F68CC0(auStack_30,param_9,0x10);
      fn_828D3C88(param_2 + 0x14,&uStack_70);
      if (iStack_6c != 0) {
        fn_822315A0();
      }
    }
  }
  else if (param_4 == 1) {
    for (piVar3 = *(int **)(param_2 + 4); piVar3 != *(int **)(param_2 + 8); piVar3 = piVar3 + 5) {
      if (*piVar3 == param_3) {
        iVar2 = piVar3[1];
        while( true ) {
          if (iVar2 == piVar3[2]) {
            return 1;
          }
          if (*(int *)(iVar2 + 8) == param_5) break;
          iVar2 = iVar2 + 0x50;
        }
        if ((double)lbl_821AAD20 < param_1) {
          *(float *)(iVar2 + 0x10) = (float)param_1;
          *(unsigned int *)(iVar2 + 0xc) = 2;
          return 1;
        }
        *(unsigned int *)(iVar2 + 0xc) = 3;
        return 1;
      }
    }
  }
  return 1;
}


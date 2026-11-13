extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int iStack_40;
extern unsigned int lbl_82005328;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216CBF0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_83004B48(unsigned __int64 param_1,int param_2,char param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  )

{
  unsigned int uVar1;
  __int64 lVar2;
  int aiStack_50 [2];
  float fStack_48;
  float fStack_44;
  int iStack_40;
  unsigned int uStack_3c;
  unsigned char uStack_38;
  
  if (param_2 != 0) {
    lVar2 = (__int64)(int)(*(unsigned char *)(param_2 + 0x3c) - 0xff);
    fStack_48 = (float)lVar2 * lbl_8216CBF0 * lbl_82005328;
    fStack_44 = lbl_821AAD20;
    if (param_3 == '\0') {
      fStack_44 = lbl_8216C698;
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      fn_82FF5400(lbl_832642F4,*(int *)(param_2 + 0x20),0x800000,lVar2,param_5,param_4,0);
    }
    if (*(int *)(param_2 + 0x20) == 0) {
      iStack_40 = (int)param_5;
      aiStack_50[1] = 0x800000;
      if (iStack_40 == 0) {
        (*(int (**)())**(unsigned int **)(param_2 + 4))((double)fStack_44,param_2 + 4,0x800000);
      }
      else {
        uStack_3c = (unsigned int)param_4;
        aiStack_50[0] = param_2 + 4;
        uStack_38 = 1;
        uVar1 = fn_82FF59A8(lbl_832642F4,aiStack_50,1,0);
        *(unsigned int *)(param_2 + 0x20) = uVar1;
      }
    }
  }
  return;
}


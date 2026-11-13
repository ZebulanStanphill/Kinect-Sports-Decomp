extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_8216CBF0;
extern float lbl_8216CBF4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_28;
extern unsigned int uStack_3c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82FA8CB0(int param_1,int *param_2,char param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puStack_40;
  unsigned int uStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  unsigned char uStack_28;
  
  if ((param_3 == '\0') && (1 < *(unsigned short *)(param_1 + 0x30))) {
    *(unsigned short *)(param_1 + 0x30) = *(unsigned short *)(param_1 + 0x30) - 1;
  }
  else {
    *(unsigned short *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      if (*param_2 < 1) {
        *(unsigned char *)(param_1 + 0x33) = 0xff;
        (**(int (***)())(*(int *)(param_1 + 4) + 0x10))(param_1 + 4,param_1 + 0x33,0xff);
      }
      else {
        iStack_2c = param_2[1];
        puVar2 = (unsigned int *)(param_1 + 0x18);
        fStack_34 = lbl_821AAD20;
        uStack_3c = 0x8000000;
        uStack_28 = 1;
        fStack_38 = (float)*(unsigned char *)(param_1 + 0x33) * lbl_8216CBF4 - lbl_8216CBF0;
        puStack_40 = puVar2;
        iStack_30 = *param_2;
        iVar1 = fn_82FF59A8(lbl_832642F4,&puStack_40,1,0);
        *(int *)(param_1 + 0x20) = iVar1;
        *(unsigned char *)(param_1 + 0x24) = *(unsigned char *)(param_1 + 0x24) | 0x40;
        if (iVar1 == 0) {
          (**(int (***)())*puVar2)((double)fStack_34,puVar2,uStack_3c);
        }
      }
    }
    else {
      fn_82FF5400((double)lbl_821AAD20,lbl_832642F4,*(int *)(param_1 + 0x20),0x8000000,
                        0xffffffff821b0000,*param_2,param_2[1],0);
    }
    (**(int (***)())(*(int *)(param_1 + 4) + 0xc))(param_1 + 4);
  }
  return 1;
}


extern unsigned int fStack_34;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int lbl_8216C698;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


unsigned __int64 fn_82FA8BA8(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  float fStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned char uStack_28;
  
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
  if (*(int *)(param_1 + 0x20) == 0) {
    uStack_30 = *param_2;
    uStack_2c = param_2[1];
    puVar2 = (unsigned int *)(param_1 + 0x18);
    uStack_3c = 0x4000000;
    uStack_38 = lbl_821AAD20;
    fStack_34 = lbl_8216C698;
    uStack_28 = 1;
    puStack_40 = puVar2;
    iVar1 = fn_82FF59A8(lbl_832642F4,&puStack_40,1,0);
    *(int *)(param_1 + 0x20) = iVar1;
    *(unsigned char *)(param_1 + 0x24) = *(unsigned char *)(param_1 + 0x24) | 0x40;
    if (iVar1 == 0) {
      (**(int (***)())*puVar2)((double)fStack_34,puVar2,uStack_3c);
    }
  }
  else {
    fn_82FF5400((double)lbl_8216C698,lbl_832642F4,*(int *)(param_1 + 0x20),0x4000000,
                      0xffffffff82170000,*param_2,param_2[1],0);
  }
  return 1;
}


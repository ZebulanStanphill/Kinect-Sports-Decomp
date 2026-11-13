extern unsigned int *auStack_50;
extern int fn_8280AC48();
extern int fn_8280C348();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_24;
extern unsigned int uStack_34;
extern unsigned int uStack_44;


void fn_8280C450(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char auStack_50 [12];
  unsigned int uStack_44;
  unsigned int uStack_34;
  unsigned int uStack_24;
  unsigned int uStack_14;
  
  if (param_1 == param_2) {
    fn_8280C348(param_1,auStack_50);
    uStack_44 = lbl_821AAD20;
    uStack_34 = lbl_821AAD20;
    uStack_24 = lbl_821AAD20;
    uStack_14 = lbl_82002AE0;
    fn_8280AC48(auStack_50,param_2);
  }
  else {
    fn_8280C348(param_1,param_2);
    uVar2 = lbl_821AAD20;
    uVar1 = lbl_82002AE0;
    *(unsigned int *)(param_2 + 0xc) = lbl_821AAD20;
    *(unsigned int *)(param_2 + 0x1c) = uVar2;
    *(unsigned int *)(param_2 + 0x2c) = uVar2;
    *(unsigned int *)(param_2 + 0x3c) = uVar1;
  }
  return;
}


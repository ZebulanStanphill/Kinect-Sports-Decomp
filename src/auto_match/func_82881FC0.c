extern int fn_8289F160();
extern unsigned int lbl_83212A04;
extern unsigned int uRam00000008;
extern unsigned int uRam0000000c;
extern unsigned int uStack_30;


void fn_82881FC0(unsigned int param_1,unsigned int param_2,unsigned char param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char uVar3;
  unsigned int uStack_30;
  int aiStack_2c [11];
  
  uStack_30 = param_1;
  fn_8289F160(aiStack_2c,0xffffffff83212a00,&uStack_30);
  uVar2 = param_2;
  uVar3 = param_3;
  if (aiStack_2c[0] != lbl_83212A04) {
    iVar1 = *(int *)(aiStack_2c[0] + 0x10);
    *(unsigned int *)(iVar1 + 8) = param_2;
    *(unsigned char *)(iVar1 + 0xc) = param_3;
    uVar2 = uRam00000008;
    uVar3 = uRam0000000c;
  }
  uRam0000000c = uVar3;
  uRam00000008 = uVar2;
  return;
}


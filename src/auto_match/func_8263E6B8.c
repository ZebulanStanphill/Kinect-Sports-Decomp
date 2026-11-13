extern unsigned int *auStack_2c;
extern int fn_8263E248();
extern unsigned int lbl_821CBFB0;
extern unsigned int lbl_821CBFB1;
extern unsigned int lbl_821CC0E0;
extern unsigned int uStack_30;


void fn_8263E6B8(int param_1,unsigned int *param_2,int param_3)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  if (param_3 == 0) {
    puVar4 = (unsigned int *)(param_1 + 0x2884);
  }
  else {
    puVar4 = (unsigned int *)((param_3 + 0xa22) * 4 + param_1);
  }
  uVar3 = *puVar4 >> 0x10 & 0xf;
  if (param_2 == (unsigned int *)0x0) {
    fn_8263E248(uVar3,*puVar4 >> 0x14 & 0x3f,&uStack_30,auStack_2c);
  }
  else {
    uVar5 = *param_2 & 0x3f;
    bVar1 = (&lbl_821CBFB1)[(unsigned int)(unsigned char)(&lbl_821CC0E0)[uVar3] * 2];
    if (uVar5 == 0x36) {
      uVar5 = 7;
    }
    uVar2 = *(unsigned short *)(&lbl_821CBFB0 + uVar5 * 2);
    fn_8263E248(uVar2 >> 8 & 0xf,param_2[1],&uStack_30,auStack_2c);
    if ((uVar2 & 0xff) < (unsigned short)bVar1) {
      auStack_2c[0] = uStack_30;
    }
  }
  *(unsigned int *)(param_1 + 0x2a30) = uStack_30;
  *(unsigned int *)(param_1 + 0x2a34) = auStack_2c[0];
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0xc0;
  return;
}


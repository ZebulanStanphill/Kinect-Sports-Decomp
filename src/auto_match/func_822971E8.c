extern unsigned int *auStack_3c;
extern int fn_82F62DA8();
extern unsigned int uStack_40;


unsigned short *
fn_822971E8(__int64 param_1,unsigned short *param_2,unsigned short *param_3,unsigned char param_4,
             int param_5)

{
  int iVar1;
  unsigned char uVar2;
  unsigned char *puVar3;
  unsigned int uStack_40;
  unsigned char auStack_3c [60];
  
  if (param_2 != param_3) {
    puVar3 = (unsigned char *)(param_5 + -1);
    do {
      uStack_40 = 0;
      iVar1 = fn_82F62DA8(auStack_3c,*param_2,&uStack_40,param_1 + 0x18);
      uVar2 = param_4;
      if (iVar1 == 1) {
        uVar2 = auStack_3c[0];
      }
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
    } while (param_2 != param_3);
  }
  return param_2;
}


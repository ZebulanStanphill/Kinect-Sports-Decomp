extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_82529D38();
extern int fn_82A1EFC0();
extern unsigned int uStack_30;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8253C548(int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned char auStack_78 [8];
  unsigned char auStack_70 [16];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_30;
  
  fn_82A1EFC0(auStack_78,0,0x58);
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uStack_80 = 0x2a;
  uStack_7c = 0x60;
  puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  if (param_3 == (unsigned int *)0x0) {
    fn_82529D38(param_1,&uStack_60);
  }
  else {
    uStack_60 = *param_3;
    uStack_5c = param_3[1];
    uStack_58 = param_3[2];
  }
  uStack_30 = 0;
  (**(int (***)())(*param_1 + 0xc))(param_1,&uStack_80);
  return;
}


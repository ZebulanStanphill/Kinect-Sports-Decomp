extern unsigned int *auStack_100;
extern unsigned int *auStack_f0;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82CE5410();
extern int fn_82D8B168();
extern int fn_82D8C258();
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_56;
extern unsigned int uStack_59;
extern unsigned int uStack_5c;


void fn_82563908(double param_1,double param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [128];
  float fStack_70;
  float fStack_6c;
  unsigned char uStack_5c;
  unsigned char uStack_59;
  unsigned char uStack_56;
  
  fn_82D8B168(&uStack_110);
  uStack_110 = 1;
  uStack_5c = 5;
  puVar1 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_59 = 0;
  puVar1 = (unsigned int *)((unsigned int)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fStack_70 = (float)param_1;
  uStack_56 = 2;
  fStack_6c = (float)param_2;
  uStack_10c = param_3;
  iVar2 = fn_82CE5410();
  iVar2 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x220);
  *(unsigned short *)(iVar2 + 4) = 0x220;
  iVar2 = fn_82D8C258(iVar2,&uStack_110);
  *(unsigned int *)(iVar2 + 0xc) = param_4;
  return;
}


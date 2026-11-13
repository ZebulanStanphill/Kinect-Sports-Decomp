typedef unsigned char bool;
extern unsigned int *auStack_30;
extern int fn_82F534A0();
extern int fn_82F53548();
extern int fn_8306E888();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;
extern unsigned int uStack_24;


bool fn_82F5A598(double param_1)

{
  unsigned int *puVar1;
  int in_r0;
  double dVar2;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  float in_stack_0000002c;
  unsigned char auStack_30 [12];
  unsigned int uStack_24;
  
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  uStack_24 = lbl_821AAD20;
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fn_82F53548();
  dVar2 = (double)fn_82F534A0();
  dVar2 = (double)fn_8306E888((double)(float)(dVar2 + (double)in_stack_0000002c));
  return dVar2 < param_1;
}


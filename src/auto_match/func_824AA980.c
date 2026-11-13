extern unsigned int stack0x00000010;
extern unsigned int stack0x00000020;


void fn_824AA980(void)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  float in_stack_00000010;
  float in_stack_00000020;
  
  puVar1 = (unsigned int *)((int)&stack0x00000020 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  puVar1 = (unsigned int *)((int)&stack0x00000010 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  if (ABS(in_stack_00000020) < ABS(in_stack_00000010)) {
    return;
  }
  return;
}


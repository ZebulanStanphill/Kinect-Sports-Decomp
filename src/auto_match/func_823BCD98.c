extern int fn_8265C9E0();
extern unsigned int lbl_82196C88;
extern unsigned int lbl_821B5EC4;
extern unsigned int lbl_821B5EDC;


unsigned int *
fn_823BCD98(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  param_1[1] = 0;
  *param_1 = &lbl_821B5EC4;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 4) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar1 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = param_4;
    *puVar1 = &lbl_82196C88;
    puVar1[5] = param_5;
    puVar1[6] = param_6;
    puVar1[7] = param_7;
  }
  puVar2 = (unsigned int *)param_1[8];
  if (puVar1 != puVar2) {
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    param_1[8] = puVar1;
  }
  puVar2 = (unsigned int *)fn_8265C9E0(8);
  puVar1 = (unsigned int *)0x0;
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &lbl_821B5EDC;
    puVar1 = puVar2;
  }
  puVar2 = (unsigned int *)param_1[9];
  if (puVar1 != puVar2) {
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    param_1[9] = puVar1;
  }
  return param_1;
}


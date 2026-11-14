extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int tan();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82079FB0;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_83218BEC;
extern unsigned int lbl_83218BF0;
extern unsigned int stack0x00000010;


void fn_829F3488(int *param_1)

{
  unsigned int *puVar1;
  float fVar2;
  unsigned int uVar3;
  int in_r0;
  double dVar4;
  double dVar5;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  unsigned char auStack_40 [8];
  float fStack_38;
  
  uVar3 = lbl_83218BF0;
  puVar1 = (unsigned int *)((int)&stack0x00000010 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  dVar5 = (double)lbl_820885C8;
  if ((uVar3 & 1) == 0) {
    lbl_83218BF0 = uVar3 | 1;
    dVar4 = (double)tan(lbl_82079FB0);
    lbl_83218BEC = (float)(dVar5 / (double)(float)dVar4);
  }
  in_stack_00000010 = lbl_83218BEC * in_stack_00000010;
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fVar2 = lbl_8200DFF4;
  in_stack_00000018 = lbl_82002AE0 / in_stack_00000018;
  dVar4 = (double)lbl_82015B38;
  *param_1 = (int)((double)in_stack_00000010 * (double)in_stack_00000018 + dVar5);
  param_1[1] = (int)-(float)((double)(lbl_83218BEC * in_stack_00000014) * (double)in_stack_00000018
                            - dVar4);
  param_1[2] = (int)(fStack_38 * fVar2);
  return;
}


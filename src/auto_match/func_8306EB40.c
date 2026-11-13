extern int fn_8306ED58();
extern int fn_8306ED98();
extern int fn_8306EE38();
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


double fn_8306EB40(int param_1)

{
  unsigned int *puVar1;
  int in_r0;
  double dVar2;
  double dVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  dVar2 = (double)fn_8306EE38();
  if (dVar2 <= (double)lbl_82196080) {
    puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    dVar2 = (double)lbl_821AAD20;
  }
  else {
    dVar2 = (double)fn_8306ED98();
    dVar3 = (double)fn_8306EE38();
    dVar2 = (double)(float)(dVar2 / (double)(float)(dVar3 * dVar3));
    fn_8306ED58(dVar2);
    puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
  }
  return dVar2;
}


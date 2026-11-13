extern int fn_8232B210();
extern int fn_82535F50();
extern int fn_82590C38();
extern int fn_82F63108();
extern unsigned int ltcg_pool_0_0f;


void fn_8232B0A8(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned __int64 uVar6;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  
  iVar2 = param_2[0x44];
  puVar5 = (unsigned int *)(in_r0 + (int)(param_2 + 0x4c) & 0xfffffff0);
  *puVar5 = in_register_00010010;
  puVar5[1] = in_register_00010014;
  puVar5[2] = in_register_00010018;
  puVar5[3] = in_vr1;
  if ((iVar2 != 0) && (param_2[0x46] != 0)) {
    if (*(int *)(iVar2 + 0xf8) != 0) {
      piVar3 = *(int **)(*(int *)(iVar2 + 0xf8) + 0x1b0);
      uVar6 = fn_82590C38(piVar3);
      (**(int (***)())(*piVar3 + 8))(uVar6,0x18,0);
    }
    puVar5 = (unsigned int *)(iVar2 + 0x110U & 0xfffffff0);
    *puVar5 = in_register_00010020;
    puVar5[1] = in_register_00010024;
    puVar5[2] = in_register_00010028;
    puVar5[3] = in_vr2;
    iVar2 = param_2[0x46];
    iVar4 = *(int *)(iVar2 + 0xf8);
    if (iVar4 != 0) {
      piVar3 = *(int **)(iVar4 + 0x1b0);
      uVar6 = fn_82590C38(piVar3);
      (**(int (***)())(*piVar3 + 8))(uVar6,0x18,0);
    }
    puVar5 = (unsigned int *)(iVar2 + 0x110U & 0xfffffff0);
    *puVar5 = in_register_00010030;
    puVar5[1] = in_register_00010034;
    puVar5[2] = in_register_00010038;
    puVar5[3] = in_vr3;
  }
  fVar1 = (float)param_2[1];
  param_2[1] = (int)(float)((double)fVar1 - param_1);
  if (((param_2[2] != 0) && ((float)((double)fVar1 - param_1) <= ltcg_pool_0_0f)) && (*param_2 != 0))
  {
    fn_8232B210(param_2);
    if (param_2[0x56] == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(*(int *)param_2[0x56] + 4))((int *)param_2[0x56],1);
  }
  if (param_2[0x48] != 0) {
    fn_82535F50(param_2[0x48],param_2 + 0x4c);
  }
  return;
}


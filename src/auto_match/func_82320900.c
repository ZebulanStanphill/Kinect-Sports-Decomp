extern unsigned int *auStack_40;
extern int fn_82320B00();
extern int fn_82320BE0();
extern int fn_82528FA8();
extern int fn_827F6210();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned int *
fn_82320900(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
             unsigned int param_5)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char auStack_40 [64];
  
  *param_1 = *param_3;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 4) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_48 = lbl_821CA1A8;
  uStack_4c = lbl_821CA1A4;
  uStack_50 = lbl_821CA1A0;
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  iVar2 = fn_82528FA8((double)lbl_821CA460,param_4,param_2,auStack_40,&uStack_50,uStack_48,0);
  param_1[10] = param_5;
  param_1[0xc] = (int)param_4;
  param_1[8] = iVar2;
  param_1[9] = 0;
  param_1[0xb] = 1;
  if ((*(int *)(iVar2 + 400) != 0) &&
     (*(int *)(**(int **)(*(int *)(iVar2 + 400) + 400) + 0x110) != 0)) {
    fn_827F6210((double)lbl_821916FC);
  }
  fn_82320B00(param_1,1);
  fn_82320BE0(param_1,1);
  *(unsigned int *)(param_1[8] + 0xb50) = 1;
  return param_1;
}


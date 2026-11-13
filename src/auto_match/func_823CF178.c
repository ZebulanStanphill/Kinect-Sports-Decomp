extern int fn_82359698();
extern int fn_8236B4F0();
extern int fn_8236B7E0();
extern int fn_823CC298();
extern int fn_823D6088();
extern int fn_82508078();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;


void fn_823CF178(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  iVar1 = *(int *)(param_1 + 0x41c);
  *(unsigned int *)(param_1 + 0x1028) = 0;
  *(unsigned int *)(param_1 + 0x1024) = lbl_8218E8E8;
  puVar2 = (unsigned int *)(param_1 + 0xd30U & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  if (((((iVar1 == 2) || (iVar1 == 8)) || (iVar1 == 9)) || ((iVar1 == 6 || (iVar1 == 7)))) &&
     (*(int *)(param_1 + 0x4c0) == 0)) {
    fn_82508078(*(unsigned int *)(param_1 + 0xa4),0xffffffff821b60b4,0);
  }
  fn_823CC298(*(unsigned int *)(param_1 + 0x4b8),2);
  *(int *)(param_1 + 0xd80) = (int)param_2;
  fn_82359698(param_1,7);
  fn_8236B7E0(param_1,param_2,2);
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) == 0) {
    fn_8236B4F0((double)lbl_821CA460,param_1);
  }
  fn_823D6088(param_1 + 0x9f8);
  return;
}


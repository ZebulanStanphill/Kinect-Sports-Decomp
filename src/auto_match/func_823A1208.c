extern unsigned int fStack_4c;
extern int fn_82230300();
extern int fn_823A1398();
extern int fn_8252D2F8();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_48;
extern unsigned int iStack_54;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000020;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;


void fn_823A1208(int *param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  float afStack_a0;
  int *apiStack_90 [4];
  unsigned int ***apppuStack_80 [5];
  unsigned int uStack_6c;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  int iStack_54;
  unsigned int uStack_50;
  float fStack_4c;
  int iStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  puVar2 = (unsigned int *)((unsigned int)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  fn_823A1398(apppuStack_80,param_1);
  if (uStack_6c < 0x10) {
    apppuStack_80[0] = apppuStack_80;
  }
  fn_8255FD70(apiStack_90,*(unsigned int *)(param_1[2] + 0x180),apppuStack_80[0]);
  uStack_3c = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_44 = 0x40;
  uStack_60 = 0x4d697850;
  uStack_58 = ltcg_pool_0_0f;
  uStack_50 = lbl_821917C0;
  iVar1 = *apiStack_90[0];
  fStack_4c = *(float *)(iVar1 + 0x4c);
  uStack_5c = *(unsigned int *)(iVar1 + 0x48);
  iStack_48 = (int)*(char *)(iVar1 + 0x58);
  iStack_54 = (int)*(char *)(iVar1 + 0x5a);
  if (fStack_4c == lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    afStack_a0 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
    fStack_4c = afStack_a0 - lbl_821CA460;
  }
  uStack_40 = *(unsigned int *)(iVar1 + 0x50);
  fn_8252D2F8(param_1[2],0,&uStack_60,iVar1 + 0x40);
  afStack_a0 = *(float *)(*param_1 + 8);
  afStack_a0 =
       (float)fn_825354B8(&afStack_a0,&stack0x00000020,0,*(unsigned int *)(param_2 + 0x84c),
                                0xffffffff83296bc0,0xffffffff83296bd0);
  fn_82536288(&afStack_a0);
  fn_8265CA20(apiStack_90[0]);
  fn_82230300(apppuStack_80,1,0);
  return;
}


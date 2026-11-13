extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int fStack_88;
extern int fn_82539560();
extern int fn_8306E7E8();
extern int fn_8306E890();
extern int fn_8306EB40();
extern int fn_8306EC70();
extern int fn_8306EEF8();
extern int fn_83075A68();
extern int fn_83075D30();
extern int fn_83075D80();
extern int fn_83075DB8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_820145B8;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_8202236C;
extern unsigned int lbl_8207F514;
extern unsigned int lbl_82186E30;
extern unsigned int lbl_82186E68;
extern unsigned int lbl_821AAD20;


void fn_83070F70(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,int param_7)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_90 [8];
  float fStack_88;
  unsigned char auStack_80 [128];
  
  dVar4 = (double)fn_8306EB40(auStack_80);
  iVar1 = *(int *)(param_7 + 0x40);
  iVar3 = iVar1 * 0x20 + param_7;
  fn_83075D30(auStack_90,param_4,param_5);
  altv207_13(in_vs32,in_vs43);
  puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f4;
  puVar2[2] = in_register_000103f8;
  puVar2[3] = in_vr63;
  if ((*(char *)(param_2 + 0xd08) != '\0') && (*(int *)(param_2 + 0xd24) != 0)) {
    uVar5 = fn_8306E890((double)lbl_8202236C,param_1);
    uVar6 = fn_8306E890((double)lbl_8207F514,param_1);
    fn_83075A68(uVar5,uVar6,(double)(float)(param_1 * (double)lbl_820145BC),param_1,iVar3,
                      param_7 + iVar1 * -0x20 + 0x20);
    dVar7 = (double)fn_8306EEF8();
    dVar8 = (double)(float)(dVar7 * (double)*(float *)(param_2 + 0xd20));
    dVar7 = (double)fn_8306E7E8((double)*(float *)(iVar3 + 8),(double)fStack_88);
    *(float *)(iVar3 + 8) = (float)dVar7;
    fn_82539560(dVar8,(double)lbl_820145B8,(double)lbl_82186E30,(double)lbl_82002AE0,
                 (double)lbl_821AAD20);
    if (((double)lbl_8200533C < dVar4) && (dVar4 < (double)lbl_82186E68)) {
      fn_8306EC70();
      fn_83075D80(param_4,param_5);
      altv207_13(in_vs32,in_vs43);
      fn_83075DB8(param_4,param_6);
    }
  }
  *(int *)(param_7 + 0x40) = 1 - *(int *)(param_7 + 0x40);
  return;
}


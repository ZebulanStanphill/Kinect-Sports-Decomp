extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern unsigned int *auStack_44;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82261580();
extern int fn_82261660();
extern int fn_82291C30();
extern int fn_822B17A8();
extern int fn_82340AF0();
extern int fn_8242C1B8();
extern int fn_82436190();
extern int fn_82436568();
extern int fn_824365E0();
extern int fn_824395F8();
extern int fn_8243D2D8();
extern int fn_82452CF8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82193AF0;
extern unsigned int ltcg_pool_0_0f;


void fn_82447878(int *param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int *piVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar2;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned char auStack_50 [4];
  unsigned char auStack_4c [4];
  unsigned char auStack_48 [4];
  unsigned char auStack_44 [4];
  unsigned char auStack_40 [4];
  unsigned char auStack_3c [4];
  __int64 lStack_38;
  
  fn_82452CF8();
  if (param_3 == 0xc) {
    fn_824395F8((double)ltcg_pool_0_0f,
                      (unsigned __int64)*(unsigned int *)(*(int *)param_1[0x10] + 0x174) + 0x1c,7,0);
    iVar4 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
    fn_82340AF0((unsigned __int64)*(unsigned int *)(iVar4 + 0x1a0) + 0x194,0xb,1);
    iVar4 = fn_824365E0(param_1);
    if (iVar4 == 0) {
      lVar2 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
      uVar6 = 0;
    }
    else {
      fn_82436568(param_1,1);
      lVar2 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
      uVar6 = 0x21;
    }
    fn_82291C30(*(unsigned int *)(*(int *)param_1[0x10] + 0xd4),0x16,uVar6,1,lVar2 + 0x30,1);
    iVar4 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
    iVar4 = *(int *)(iVar4 + 0x24);
    if (iVar4 == 0) {
      return;
    }
    piVar5 = (int *)(**(int (***)())(*param_1 + 0x40))(auStack_3c,param_1,0);
    iVar1 = *piVar5;
  }
  else {
    if (param_3 != 0xd) {
      if (param_3 == 0xe) {
        piVar5 = (int *)(**(int (***)())(*param_1 + 0x40))(auStack_44,param_1,1);
        lStack_38 = (__int64)*piVar5;
        fn_824395F8((double)((float)lStack_38 * lbl_82193AF0),
                          (unsigned __int64)*(unsigned int *)(*(int *)param_1[0x10] + 0x174) + 0x1c,5,1);
        return;
      }
      if (param_3 != 0xf) {
        return;
      }
      fn_8243D2D8((unsigned __int64)*(unsigned int *)(*(int *)param_1[0x10] + 0x174) + 8,0xffffffff821b9c2c,0,0);
      piVar5 = (int *)param_1[0x12];
      piVar3 = (int *)(**(int (***)())(*param_1 + 0x40))(auStack_50,param_1,0);
      if ((*piVar5 < *piVar3) && (*(int *)(param_1[0x10] + 0x148) == 0)) {
        fn_82436190(param_1,1);
      }
      iVar4 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
      iVar4 = *(int *)(iVar4 + 0x24);
      dVar7 = (double)lbl_82193AF0;
      if (iVar4 != 0) {
        piVar5 = (int *)(**(int (***)())(*param_1 + 0x40))(auStack_4c,param_1,0);
        lStack_38 = (__int64)*piVar5;
        fn_82261580((double)(float)((double)lStack_38 * dVar7),
                          *(unsigned int *)
                           (*(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x5c) + 0x1ec),
                          *(unsigned int *)(iVar4 + 0x2c));
      }
      piVar5 = (int *)(**(int (***)())(*param_1 + 0x40))(auStack_48,param_1,0);
      lStack_38 = (__int64)*piVar5;
      if (lbl_8218E8FC <= (float)((double)lStack_38 * dVar7)) {
        return;
      }
      iVar4 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
      if (*(int *)(iVar4 + 0x24) == 0) {
        return;
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 0x34);
      if (iVar4 == 0) {
        return;
      }
      fn_822B17A8(iVar4,0x2d,0);
      return;
    }
    iVar4 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
    fn_82340AF0((unsigned __int64)*(unsigned int *)(iVar4 + 0x1a0) + 0x194,0xb,1);
    fn_8243D2D8((unsigned __int64)*(unsigned int *)(*(int *)param_1[0x10] + 0x174) + 8,0xffffffff821b9c2c,0,0);
    lVar2 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
    fn_82291C30(*(unsigned int *)(*(int *)param_1[0x10] + 0xd4),0x16,0x20,1,lVar2 + 0x30,1);
    iVar4 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
    iVar4 = *(int *)(iVar4 + 0x24);
    if (iVar4 == 0) {
      return;
    }
    piVar5 = (int *)(**(int (***)())(*param_1 + 0x40))(auStack_40,param_1,0);
    iVar1 = *piVar5;
  }
  lStack_38 = (__int64)iVar1;
  dVar7 = (double)((float)lStack_38 * lbl_82193AF0);
  fn_8242C1B8(*(unsigned int *)param_1[0x10]);
  fn_82261660(dVar7,*(unsigned int *)
                           (*(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x5c) + 0x1ec),
                    *(unsigned int *)(iVar4 + 0x2c));
  return;
}


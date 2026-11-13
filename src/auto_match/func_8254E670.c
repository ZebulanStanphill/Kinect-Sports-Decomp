extern unsigned int *auStack_5c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern int fn_8254F830();
extern int fn_8254F968();
extern int fn_825500E8();
extern int fn_82F68CC0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_3c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8254E670(double param_1,double param_2,double param_3,double param_4,int *param_5,
                  unsigned int param_6,unsigned int param_7)

{
  float fVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  double dVar6;
  double dVar7;
  unsigned int *puStack_60;
  unsigned char auStack_5c [12];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  unsigned int uStack_3c;
  
  if (param_4 < param_3) {
    param_4 = param_3;
  }
  fStack_48 = (float)param_1;
  fStack_44 = (float)param_3;
  dVar7 = (double)(float)((double)*(float *)(*param_5 + 0x82c) + param_2);
  fStack_40 = (float)param_4;
  uStack_3c = 0;
  puVar5 = (unsigned int *)param_5[0x17];
  puVar4 = (unsigned int *)((unsigned int *)param_5[0x17])[1];
  while (*(char *)((int)puVar4 + 0x29) == '\0') {
    if (dVar7 <= (double)(float)puVar4[3]) {
      puVar5 = puVar4;
      puVar4 = (unsigned int *)*puVar4;
    }
    else {
      puVar4 = (unsigned int *)puVar4[2];
    }
  }
  puStack_60 = *(unsigned int **)param_5[0x17];
  uStack_50 = param_6;
  uStack_4c = param_7;
  if (puStack_60 != puVar5) {
    dVar6 = (double)ltcg_pool_0_0f;
    do {
      if (((double)(float)((double)(float)puStack_60[3] + (double)(float)puStack_60[7]) <= dVar7) ||
         (fVar1 = (float)(dVar7 - (double)(float)puStack_60[3]), puStack_60[7] = fVar1,
         dVar6 < (double)fVar1)) {
        fn_825500E8(&puStack_60);
      }
      else {
        puStack_60 = (unsigned int *)fn_8254F968(auStack_5c,param_5 + 0x16);
        puStack_60 = (unsigned int *)*puStack_60;
      }
    } while (puStack_60 != puVar5);
  }
  puStack_60 = (unsigned int *)(unsigned int)(float)dVar7;
  uVar3 = fn_8254F830(param_5 + 0x16,&puStack_60);
  fn_82F68CC0(uVar3,&uStack_50,0x18);
  if (param_5[1] != 0) {
    param_5[0x75] = 0;
    param_5[0x73] = 0;
    iVar2 = lbl_821CA460;
    param_5[0x74] = lbl_82192734;
    param_5[0x78] = iVar2;
  }
  return;
}


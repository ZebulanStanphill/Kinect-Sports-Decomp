extern unsigned int *fStack_30;
extern int fn_825B98E0();
extern int fn_825B99F8();
extern unsigned int lbl_821CA460;


void fn_82569440(unsigned __int64 param_1,int param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,unsigned __int64 param_7,int param_8)

{
  __int64 lVar1;
  double dVar2;
  double dVar3;
  float fStack_30;
  float afStack_2c [11];
  
  dVar3 = (double)lbl_821CA460;
  lVar1 = (unsigned __int64)*(unsigned int *)(param_2 + 0x74) * 0x94 +
          (unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0xd0) + 0x10);
  if (param_3 != (float *)0x0) {
    if (param_8 == 0) {
      dVar2 = (double)fn_825B99F8(lVar1 + 100);
    }
    else {
      dVar2 = (double)fn_825B98E0(lVar1 + 100,param_3,afStack_2c,&fStack_30);
      dVar2 = (double)((float)(dVar3 - dVar2) * afStack_2c[0] + (float)((double)fStack_30 * dVar2));
    }
    *param_3 = (float)dVar2;
  }
  if (param_4 != (float *)0x0) {
    if (param_8 == 0) {
      dVar2 = (double)fn_825B99F8(param_1,lVar1 + 0x70);
    }
    else {
      dVar2 = (double)fn_825B98E0();
      dVar2 = (double)((float)(dVar3 - dVar2) * fStack_30 + (float)((double)afStack_2c[0] * dVar2));
    }
    *param_4 = (float)dVar2;
  }
  if (param_5 != (float *)0x0) {
    if (param_8 == 0) {
      dVar2 = (double)fn_825B99F8(param_1,lVar1 + 0x7c);
    }
    else {
      dVar2 = (double)fn_825B98E0();
      dVar2 = (double)((float)(dVar3 - dVar2) * fStack_30 + (float)((double)afStack_2c[0] * dVar2));
    }
    *param_5 = (float)dVar2;
  }
  if (param_6 != (float *)0x0) {
    if (param_8 == 0) {
      dVar3 = (double)fn_825B99F8(param_1,lVar1 + 0x88);
    }
    else {
      dVar2 = (double)fn_825B98E0();
      dVar3 = (double)((float)(dVar3 - dVar2) * fStack_30 + (float)((double)afStack_2c[0] * dVar2));
    }
    *param_6 = (float)dVar3;
  }
  return;
}


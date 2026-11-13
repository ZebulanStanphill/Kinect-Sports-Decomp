extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8306E818();
extern int fn_8306E890();
extern int fn_8306ECE8();
extern int fn_83076028();
extern int fn_830763C8();
extern int fn_83076AD0();
extern int fn_8307DA20();
extern int fn_8307DA38();
extern int fn_8307DA68();
extern int fn_8307DAF8();
extern unsigned int lbl_8207F514;
extern unsigned int lbl_8207F51C;


void fn_83079670(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3,float *param_4,
                  unsigned __int64 param_5,char param_6)

{
  float *pfVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  double dVar4;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  uVar3 = fn_8306E890((double)lbl_8207F51C,param_1);
  pfVar1 = param_4;
  if (param_6 != '\0') {
    pfVar1 = (float *)fn_8307DA20(auStack_80);
  }
  puVar2 = (unsigned __int64 *)
           fn_8307DAF8(auStack_70,*(unsigned __int64 *)pfVar1,(unsigned __int64)(unsigned int)pfVar1[2] << 0x20,
                             *(unsigned __int64 *)param_3,(unsigned __int64)(unsigned int)param_3[2] << 0x20);
  puVar2 = (unsigned __int64 *)
           fn_8307DA38(uVar3,auStack_80,*puVar2,(unsigned __int64)*(unsigned int *)(puVar2 + 1) << 0x20);
  pfVar1 = (float *)fn_8307DA68(auStack_60,*(unsigned __int64 *)param_3,
                                      (unsigned __int64)(unsigned int)param_3[2] << 0x20,*puVar2,
                                      (unsigned __int64)*(unsigned int *)(puVar2 + 1) << 0x20);
  *param_3 = *pfVar1;
  dVar4 = (double)lbl_8207F514;
  param_3[1] = pfVar1[1];
  param_3[2] = pfVar1[2];
  uVar3 = fn_8306E890(dVar4,param_1);
  dVar4 = (double)fn_8306E818((double)*param_3,(double)*param_4,uVar3);
  *param_3 = (float)dVar4;
  fn_8306ECE8();
  fn_830763C8(param_2);
  fn_83076AD0(*(unsigned __int64 *)param_3,(unsigned __int64)(unsigned int)param_3[2] << 0x20);
  fn_83076028();
  return;
}


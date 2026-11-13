extern unsigned int *auStack_50;
extern int fn_82681B80();
extern int fn_8268CC00();
extern int fn_82696330();
extern int fn_826972E0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


float * fn_82741A50(float *param_1,__int64 param_2,__int64 param_3)

{
  char cVar1;
  __int64 lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  unsigned char auStack_50;
  
  fn_8268CC00();
  lVar2 = param_3 + 0x78;
  auStack_50 = 0;
  param_2 = param_2 + 0x10;
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff8200befc,&auStack_50);
  dVar5 = (double)lbl_82002AE0;
  if (cVar1 == '\0') {
    *param_1 = lbl_82002AE0;
  }
  else {
    dVar3 = (double)fn_826972E0(&auStack_50,param_3);
    *param_1 = (float)dVar3;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff8200bef0,&auStack_50);
  dVar3 = (double)lbl_821AAD20;
  if (cVar1 == '\0') {
    param_1[3] = lbl_821AAD20;
  }
  else {
    dVar4 = (double)fn_826972E0(&auStack_50,param_3);
    param_1[3] = (float)dVar4;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff8201261c,&auStack_50);
  if (cVar1 == '\0') {
    param_1[1] = (float)dVar3;
  }
  else {
    dVar4 = (double)fn_826972E0(&auStack_50,param_3);
    param_1[1] = (float)dVar4;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff8200bef8,&auStack_50);
  if (cVar1 == '\0') {
    param_1[4] = (float)dVar5;
  }
  else {
    dVar5 = (double)fn_826972E0(&auStack_50,param_3);
    param_1[4] = (float)dVar5;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff82012618,&auStack_50);
  if (cVar1 == '\0') {
    param_1[2] = (float)dVar3;
  }
  else {
    dVar5 = (double)fn_826972E0(&auStack_50,param_3);
    param_1[2] = (float)dVar5;
  }
  cVar1 = fn_82681B80(param_2,lVar2,0xffffffff82012614,&auStack_50);
  if (cVar1 == '\0') {
    param_1[5] = (float)dVar3;
  }
  else {
    dVar5 = (double)fn_826972E0(&auStack_50,param_3);
    param_1[5] = (float)dVar5;
  }
  fn_82696330(&auStack_50);
  return param_1;
}


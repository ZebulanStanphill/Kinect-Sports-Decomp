extern int fn_82681930();
extern int fn_8272DDC8();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005748;


void fn_8272E140(unsigned __int64 param_1,double *param_2)

{
  int *piVar1;
  unsigned char uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iStack_80;
  int iStack_7c;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  piVar1 = (int *)fn_82F6A540();
  fn_82681930(&iStack_80);
  fn_8272DDC8(piVar1,&iStack_80,0);
  dVar5 = (double)((float)piVar1[0xf] * lbl_82005748);
  dVar4 = (double)(__int64)iStack_80 * lbl_82005720;
  dVar3 = (double)(__int64)iStack_7c * lbl_82005720;
  uVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
  *param_2 = dVar4;
  param_2[1] = dVar3;
  *(unsigned char *)(param_2 + 6) = uVar2;
  param_2[2] = dStack_68;
  param_2[3] = dStack_78;
  param_2[4] = dStack_70;
  *(unsigned char *)((int)param_2 + 0x31) = *(unsigned char *)((int)param_2 + 0x31) | 0x7f;
  param_2[5] = dVar5;
  fn_82F6A58C();
  return;
}


extern int fn_82230300();
extern int fn_822EE628();
extern int fn_82865E68();
extern unsigned int uStack_30;


unsigned __int64 fn_82865000(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned char uStack_30;
  
  uVar1 = param_2[4];
  fn_82230300(param_1,0,0);
  fn_822EE628(param_1,uVar1,0x20);
  puVar3 = param_2;
  if (7 < (unsigned int)param_2[5]) {
    puVar3 = (unsigned int *)*param_2;
  }
  piVar2 = param_2 + 4;
  if (7 < (unsigned int)param_2[5]) {
    param_2 = (unsigned int *)*param_2;
  }
  fn_82865E68(param_1,param_2,*piVar2 * 2 + (int)puVar3,uStack_30);
  return param_1;
}


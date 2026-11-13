extern unsigned int *auStack_2c;
extern int fn_82827DB8();
extern int fn_82829338();
extern unsigned int uStack_30;


unsigned int * fn_82829530(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned char cVar1;
  unsigned int *puVar2;
  unsigned int uStack_30;
  unsigned int auStack_2c [1];
  
  uStack_30 = fn_82829338(param_2,param_3);
  if ((uStack_30 == *(unsigned int *)(param_2 + 4)) ||
     (cVar1 = fn_82827DB8(param_2,*param_3,*(unsigned int *)(uStack_30 + 0xc)), cVar1 != '\0')) {
    puVar2 = auStack_2c;
    auStack_2c[0] = *(unsigned int *)(param_2 + 4);
  }
  else {
    puVar2 = &uStack_30;
  }
  *param_1 = *puVar2;
  return param_1;
}


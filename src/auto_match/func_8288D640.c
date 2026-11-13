extern int fn_8288C8C8();
extern unsigned int iStack_20;
extern unsigned int iStack_30;
extern unsigned int iStack_40;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


unsigned __int64 fn_8288D640(unsigned __int64 param_1,int *param_2,int *param_3,int *param_4)

{
  unsigned int *puVar1;
  unsigned char uStack_50;
  unsigned int uStack_48;
  unsigned int uStack_44;
  int iStack_40;
  unsigned int uStack_38;
  unsigned int uStack_34;
  int iStack_30;
  unsigned int uStack_28;
  unsigned int uStack_24;
  int iStack_20;
  
  uStack_48 = 0;
  uStack_44 = 0;
  if (((int *)*param_4 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_4, puVar1 != (unsigned int *)0x0)) {
    uStack_48 = *puVar1;
  }
  iStack_40 = param_4[2];
  uStack_38 = 0;
  uStack_34 = 0;
  if (((int *)*param_3 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_3, puVar1 != (unsigned int *)0x0)) {
    uStack_38 = *puVar1;
  }
  iStack_30 = param_3[2];
  uStack_28 = 0;
  uStack_24 = 0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_2, puVar1 != (unsigned int *)0x0)) {
    uStack_28 = *puVar1;
  }
  iStack_20 = param_2[2];
  fn_8288C8C8(param_1,&uStack_28,&uStack_38,&uStack_48,uStack_50);
  return param_1;
}


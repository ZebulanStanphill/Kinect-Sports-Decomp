extern int fn_83001FE8();
extern int fn_83004190();
extern int fn_83007888();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


void fn_83002448(unsigned __int64 param_1,double param_2,double param_3,int *param_4)

{
  short sVar1;
  char cVar2;
  short asStack_40 [4];
  __int64 lStack_38;
  
  asStack_40[0] = 0;
  fn_83004190(asStack_40);
  cVar2 = fn_83007888(param_4,8);
  sVar1 = asStack_40[0];
  if (cVar2 != '\0') {
    lStack_38 = (__int64)*(short *)((int)param_4 + 0x2e);
    (**(int (***)())(*param_4 + 0x3c))
              ((double)((float)(__int64)asStack_40[0] * lbl_82186E6C -
                       (float)lStack_38 * lbl_82186E6C),param_4,1,lStack_38,0,0);
  }
  *(short *)((int)param_4 + 0x2e) = sVar1;
  if ((((param_2 != (double)lbl_821AAD20) || (param_3 != (double)lbl_821AAD20)) ||
      (param_4[0x1a] != 0)) && (cVar2 = fn_83001FE8(param_4), cVar2 != '\0')) {
    *(float *)(param_4[0x1a] + 0xc) = (float)param_2;
    *(float *)(param_4[0x1a] + 0x10) = (float)param_3;
  }
  return;
}


typedef unsigned char bool;
extern unsigned int *lbl_83217B88;
extern unsigned int *lbl_83217BA4;


bool fn_829E1A80(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
                  unsigned int *param_5,unsigned __int64 param_6,unsigned int *param_7)

{
  int iVar1;
  
  iVar1 = (**(int (***)())(*lbl_83217BA4 + 4))
                    (lbl_83217BA4,param_1,param_2,param_3,*param_4,param_4[1],param_6,lbl_83217B88);
  if (-1 < iVar1) {
    *param_5 = *lbl_83217B88;
    param_5[2] = lbl_83217B88[2];
    param_5[1] = lbl_83217B88[1];
    param_5[3] = lbl_83217B88[3];
  }
  else {
    *param_7 = *param_7 | 1;
  }
  return -1 < iVar1;
}


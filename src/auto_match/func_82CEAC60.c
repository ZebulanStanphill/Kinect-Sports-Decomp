#define true 1
extern int fn_82CFBBF0();


unsigned char * fn_82CEAC60(unsigned char *param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  
  while( true ) {
    if (param_3 == (unsigned int *)0x0) {
      *param_1 = 0;
      return param_1;
    }
    iVar1 = fn_82CFBBF0(*param_3,*param_2);
    if (iVar1 == 0) break;
    param_3 = (unsigned int *)param_3[1];
  }
  *param_1 = 1;
  return param_1;
}


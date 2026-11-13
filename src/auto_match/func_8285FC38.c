extern int fn_82859E28();
extern int fn_8285FBC0();
extern int iRam8321161c;
extern unsigned int uRam832115d0;
extern unsigned int uRam832115d4;
extern unsigned int uRam832115d8;
extern unsigned int uRam832115dc;
extern unsigned int uRam832115e0;
extern unsigned int uRam8321160c;
extern unsigned int uRam83211610;
extern unsigned int uRam83211614;
extern unsigned int uRam83211618;


void fn_8285FC38(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82859E28();
  uRam832115d0 = *(unsigned int *)(param_1 + 0x34);
  uRam832115d4 = (unsigned int)param_2;
  uRam832115d8 = *(unsigned int *)(param_1 + 0x2c);
  uRam832115dc = *(unsigned int *)(param_1 + 0x30);
  uRam8321160c = *puVar1;
  uRam832115e0 = **(unsigned int **)(param_1 + 0x34) >> 0x1f;
  iRam8321161c = *(int *)(param_1 + 0x44);
  if (iRam8321161c == 0) {
    uRam83211614 = 0;
    uRam83211618 = 0;
  }
  else {
    uRam83211614 = *(unsigned int *)(iRam8321161c + 0x44);
    uRam83211618 = *(unsigned int *)(iRam8321161c + 0x48);
  }
  uRam83211610 = param_3;
  fn_8285FBC0(param_1,param_2);
  return;
}


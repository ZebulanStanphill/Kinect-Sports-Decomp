typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern int fn_8288B760();
extern int fn_828A94B0();
extern int fn_828AA188();
extern int fn_828B1340();
extern int fn_828ED1A0();


void fn_828AA3B0(int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  unsigned __int64 auStack_30;
  
  bVar1 = false;
  fn_8288B760(param_2);
  (**(int (***)())(*param_2 + 0x44))(param_2);
  auStack_30 = (**(int (***)())(*param_2 + 0x48))(param_2);
  cVar2 = fn_828B1340(param_1);
  if ((cVar2 != '\0') || (cVar2 = fn_828ED1A0(*(unsigned int *)(param_1 + 0x8c)), cVar2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    fn_828AA188(param_1 + 0x188);
  }
  else {
    fn_828A94B0(param_1,&auStack_30);
  }
  return;
}


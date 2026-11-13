typedef unsigned char bool;
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_82864988();
extern int fn_82864898();
extern int fn_828647F0();
extern unsigned int *lbl_8327F868;


bool fn_82536590(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  char cVar3;
  int *apiStack_90 [4];
  unsigned char auStack_80 [48];
  unsigned char auStack_50 [48];

  if (param_2 == 0) {
    fn_828647F0(auStack_80,0xffffffff821c3abc);
  }
  else {
    fn_82864988(auStack_50);
  }
  uVar1 = fn_828647D8();
  apiStack_90[0] = (int *)*param_1;
  piVar2 = (int *)fn_82535298(apiStack_90,uVar1,0xffffffff83296bc0,0xffffffff83296bd0);
  apiStack_90[0] = piVar2;
  if (param_2 == 0) {
    fn_82864898(auStack_80);
  }
  else {
    fn_82864898(auStack_50);
  }
  cVar3 = (**(int (***)())(*piVar2 + 8))(piVar2);
  if (cVar3 == '\0') {
    fn_82536288(apiStack_90);
  }
  else {
    fn_82536288(apiStack_90);
    (**(int (***)())(*lbl_8327F868 + 8))
              (lbl_8327F868,0xffffffff821c3f38,0xb60,0xffffffff821c3efc,*param_1);
  }
  return cVar3 == '\0';
}

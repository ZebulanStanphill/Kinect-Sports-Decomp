extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern int fn_82811898();
extern int fn_8285D080();
extern int fn_8285D200();
extern int fn_8285D258();
extern int fn_8285DF00();
extern int memcpy();
extern unsigned int lbl_832115A4;
extern unsigned int lbl_832115A5;


void fn_8285E398(unsigned __int64 param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, float *param_7, unsigned __int64 param_8, unsigned int in_stack_00000054)

{

  unsigned char auStack_f0 [8];
  unsigned char auStack_e8 [8];
  unsigned char auStack_e0 [160];
  
  if (lbl_832115A5 == '\0') {
    fn_8285D200(param_1,param_2);
    fn_8285DF00(param_3,0,0,0,0);
  }
  else {
    if (lbl_832115A4 == '\0') {
      fn_8285D080(param_1,param_2,param_7,param_5,param_4,param_6,param_8,in_stack_00000054);
    }
    memcpy(auStack_e0,0xffffffff83211408,0xa8);
    fn_8285D200(param_1,param_2);
    fn_82811898((double)*param_7,(double)param_7[1],auStack_f0);
    fn_82811898((double)(param_7[2] + *param_7),(double)(param_7[3] + param_7[1]),auStack_e8);
    fn_8285DF00(param_3,param_8,auStack_f0,auStack_e8,0);
    memcpy(0xffffffff83211408,auStack_e0,0xa8);
    fn_8285D258(0xffffffff83211380,0xffffffff83211408);
  }
  return;
}


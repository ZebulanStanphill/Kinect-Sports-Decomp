#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_30;
extern int fn_826A91F0();
extern int fn_826A9798();
extern int fn_826A9FB0();
extern int fn_826C8C70();
extern int fn_826E7800();
extern int fn_82716330();


void fn_82716570(unsigned int *param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned __int64 uVar3;
  unsigned char *puVar4;
  unsigned int auStack_30;
  
  if ((int)param_4 != 0) {
    if (param_3 == 7) {
      *param_1 = 8;
    }
    else {
      *(unsigned char *)(param_2 + 0x15) = 0;
      if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 2) {
        fn_826E7800(param_2,2);
      }
      param_4 = param_4 + -2;
      puVar4 = (unsigned char *)(*(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x2c));
      uVar1 = puVar4[1];
      uVar2 = *puVar4;
      *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 2;
      *param_1 = (unsigned int)CONCAT11(uVar1,uVar2);
    }
    fn_826C8C70(param_2,0xffffffff8200f780,*param_1);
    fn_826A91F0(param_2,0xffffffff8200f768);
    uVar3 = fn_826A9FB0();
    auStack_30 = (unsigned int)uVar3;
    fn_826A9798(uVar3,param_2,param_4);
    fn_82716330(param_1 + 1,&auStack_30);
  }
  return;
}


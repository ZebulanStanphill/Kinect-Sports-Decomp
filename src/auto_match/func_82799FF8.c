extern unsigned int *auStack_2c;
extern int fn_827912D8();
extern int fn_82793908();
extern int fn_82796838();
extern int fn_82797968();
extern unsigned int uStack_30;


void fn_82799FF8(int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned char cVar2;
  unsigned int uStack_30;
  unsigned int auStack_2c;
  
  uVar1 = fn_827912D8(param_1[2]);
  if ((uVar1 == 0) ||
     (cVar2 = fn_82793908(param_1[2],&auStack_2c,&uStack_30,uVar1 - 1), cVar2 == '\0')) {
    fn_82797968(param_1[2],param_2,param_3,
                  (~*(unsigned char *)((int)param_1 + 0x13f) & 0xffffffff) >> 3 & 1);
  }
  else {
    fn_82796838(param_1[2],param_2,param_3,
                  (~*(unsigned char *)((int)param_1 + 0x13f) & 0xffffffff) >> 3 & 1,auStack_2c,
                  uStack_30);
  }
  (*(int (**)())(*param_1 + 4))(param_1,6);
  return;
}


extern unsigned int *auStack_50;
extern int fn_82A58F78();
extern int fn_82A590E0();
extern int fn_82A59558();
extern int fn_82A75390();
extern int fn_82A753E8();


void fn_82A59450(unsigned short *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_50 [32];
  
  fn_82A59558(param_1,auStack_50);
  uVar1 = fn_82A58F78(param_1,param_2);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_82A753E8(*param_1);
    uVar3 = fn_82A75390(*param_1);
    fn_82A590E0(uVar3,uVar2,auStack_50,param_2,uVar1,param_3);
  }
  return;
}


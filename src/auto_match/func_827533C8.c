extern unsigned int *auStack_50;
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B1F0();
extern int fn_82752D38();
extern int fn_827532F0();
extern unsigned int lbl_831E7E64;


extern char lbl_82196582[];
void fn_827533C8(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int auStack_50 [4];
  
  if ((param_1 & 0xffffffff) != 0) {
    fn_8268AFB0(auStack_50,lbl_831E7E64);
    fn_8268B1F0(auStack_50,param_2,0xffffffffffffffff);
    fn_8268B1F0(auStack_50,param_3,0xffffffffffffffff);
    fn_8268B1F0(auStack_50,param_4,0xffffffffffffffff);
    fn_8268B1F0(auStack_50,fn_82752D38(param_5),0xffffffffffffffff);
    fn_8268B1F0(auStack_50,param_6,0xffffffffffffffff);
    uVar2 = (unsigned __int64)auStack_50[0];
    if (uVar2 == 0) {
      uVar2 =lbl_82196582;
    }
    fn_827532F0(param_1,uVar2);
    fn_8268AFD8(auStack_50);
  }
  return;
}


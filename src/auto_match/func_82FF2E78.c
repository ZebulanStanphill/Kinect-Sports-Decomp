extern unsigned int *auStack_20;
extern int fn_82FF2778();
extern int fn_82FF2D40();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC770;
extern unsigned int lbl_8326431C;
extern unsigned int lbl_832643D0;


unsigned __int64 fn_82FF2E78(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_20;
  
  uVar1 = fn_82FF2778((double)lbl_8326431C,lbl_831BC768);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = fn_82FF2778((double)lbl_832643D0,lbl_831BC770);
  }
  if ((uVar1 & 0xff) != 0) {
    auStack_20 = 0;
    uVar2 = fn_82FF2D40(param_1,uVar1,0,0,1,&auStack_20);
    return uVar2;
  }
  return 1;
}


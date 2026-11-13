extern int fn_8224F2B8();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


static void init(int *part,int owner,int other) {
 int n=fn_82897B18(other);
 fn_82897600(owner,part,n);
 part[10]=*(int *)(owner+12);
 fn_82898220(part,owner,other,*(int *)(owner+4));
}
void fn_822CABC8(int param_1)

{
  int uVar1;
  int uVar2;
  
  uVar2 = *(int *)(param_1 + 0x10);
  fn_8224F2B8(param_1 + 0x9c,param_1,uVar2 + 0x9c);
  fn_8224F2B8(param_1 + 0x48,param_1,uVar2 + 0x34);
  init((int *)(param_1+0x144),param_1,uVar2+0x15c);
  init((int *)(param_1+0xf0),param_1,uVar2+0x104);
  init((int *)(param_1+0x198),param_1,uVar2+0x1b4);
}

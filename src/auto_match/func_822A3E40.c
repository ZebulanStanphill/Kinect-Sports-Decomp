extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822A3E40(int *param_1,unsigned int param_2)

{
  struct { unsigned int a,b,c,d; } v;
  
  v.a = 0;
  v.b = 0;
  fn_82273CD8(&v,5);
  v.c = param_2;
  if (*(int *)(*param_1 + 0x28) != 0) {
    fn_82672C20(*(int *)(*param_1 + 0x28),"_root.setTitleText",&v,1);
  }
  fn_82273C88(&v);
  return;
}


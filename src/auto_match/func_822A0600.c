extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822A0678();
extern int fn_82672C20();


void fn_822A0600(int param_1,unsigned int param_2)

{
  struct { unsigned a, b, c; } args;
  
  args.a = 0;
  args.b = 0;
  fn_82273CD8(&args.a,5);
  args.c = param_2;
  fn_822A0678(param_1);
  fn_82672C20(*(unsigned int *)(param_1 + 4),"_root.caption.DisplayCaption",&args.a,1);
  fn_82273C88(&args.a);
  return;
}


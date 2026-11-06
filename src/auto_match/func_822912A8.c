typedef struct Value_822912A8 { unsigned type, flags; unsigned char value; char pad[7]; } Value_822912A8;
extern void fn_82273CD8(Value_822912A8 *,int);
extern void fn_82273C88(Value_822912A8 *);
extern unsigned *fn_82279C58(unsigned *,int);
extern void fn_82672C20(unsigned,const char *,Value_822912A8 *,int);
extern void fn_822315A0(unsigned);
void fn_822912A8(int object,int selected) {
  unsigned result[2];
  Value_822912A8 options[3];
  int i;
  Value_822912A8 *p=options;
  for(i=0;i<3;i++,p++) {p->type=0;p->flags=0;}
  fn_82273CD8(&options[0],2);options[0].value=selected==0;
  fn_82273CD8(&options[1],2);options[1].value=selected==1;
  fn_82273CD8(&options[2],2);options[2].value=selected==2;
  fn_82672C20(*fn_82279C58(result,object),"_root.SetSelectedOptions",options,3);
  if (result[1]) fn_822315A0(result[1]);
  p=options+3;i=2;
  do {--p;fn_82273C88(p);--i;}while(i>=0);
}

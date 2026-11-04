typedef struct { int type,pad; union { double number; unsigned text; } value; } Value_82299E90;
extern void fn_82273CD8(Value_82299E90 *,int);
extern void fn_82273C88(Value_82299E90 *);
extern void fn_8229A0B8(int *);
extern void fn_82672C20(int,const char *,Value_82299E90 *,int);
extern int fn_82F64988(void *,unsigned,const char *,...);
void fn_82299E90(int *o,const char *a,const char *b,const char *c) {
 int k=o[0x484]; int other=1;
 if(k>=0 && (k<=3 || (k>7 && k<=10))) other=0;
 if(o[0x48a] && (!other || o[0x485]==1)) {
  Value_82299E90 vals[4]; int i; double num;
  for(i=0;i<4;i++) { vals[i].type=0; vals[i].pad=0; }
  num=(double)(unsigned __int64)(unsigned)o[2];
  fn_82273CD8(&vals[0],3);vals[0].value.number=num;
  fn_82273CD8(&vals[1],5);vals[1].value.text=(unsigned)a;
  fn_82273CD8(&vals[2],5);vals[2].value.text=(unsigned)b;
  fn_82273CD8(&vals[3],5);vals[3].value.text=(unsigned)c;
  fn_82672C20(*o,"_root.mainCtrl.displayFullCaption",vals,4);
  o[0x489]=0;o[0x483]=3;o[0x488]=1;
  {Value_82299E90 *p=vals+4; int n=3; do {--p;fn_82273C88(p);} while(--n>=0);}
 } else {
  fn_82F64988(o+3,0x100,a);fn_82F64988(o+0x83,0x400,b);fn_82F64988(o+0x283,0x400,c);
  o[0x485]=1;fn_8229A0B8(o);
 }
}
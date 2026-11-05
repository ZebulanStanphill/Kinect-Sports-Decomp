extern unsigned fn_82A1C510(void);extern void fn_82A1D008(void);extern void fn_82A1CFC8(void);
extern void fn_82A1D310(unsigned,int,unsigned,unsigned,void *);extern unsigned char lbl_8315D2D8[];
extern unsigned *lbl_83219B8C;extern void RtlInitAnsiString(void *,const char *);extern void fn_82A22EB8(int,int);
typedef struct { int a; void *name; unsigned flags; } Attr_82A23A48;
int fn_82A23A48(int a,int b) { struct { unsigned handle[2]; unsigned name[2]; unsigned io[2]; Attr_82A23A48 attr; } t;
fn_82A1D008();fn_82A1D310(fn_82A1C510(),1,0x8000,0x4b000,lbl_8315D2D8);
RtlInitAnsiString(t.name,"cache:\\$cache$");t.attr.a=-3;t.attr.flags=0x40;t.attr.name=t.name;
((void (*)(void *,unsigned,void *,void *,int,int,int,int,int))lbl_83219B8C[3])(t.handle,0x100001,&t.attr,t.io,0,0x80,0,2,0x4021);
((void (*)(unsigned))lbl_83219B8C[1])(t.handle[0]);fn_82A22EB8(a,b);fn_82A1CFC8();return 0;}

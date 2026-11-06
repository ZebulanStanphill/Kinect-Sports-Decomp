typedef void (*Callback_82CFA0B8)(const char*,unsigned);
typedef struct { char pad[0x20]; Callback_82CFA0B8 cb; unsigned ctx; } Sink_82CFA0B8;
extern unsigned lbl_8323B50C;
extern unsigned fn_82D00DD8(void); extern void fn_82CE3E48(unsigned);
extern int fn_82D00D50(unsigned,unsigned*,int);
extern void fn_82D00D38(unsigned,unsigned*,int,Callback_82CFA0B8,unsigned);
extern int fn_82CFBB60(char*,unsigned,const char*,...);
static __forceinline unsigned get_82CFA0B8(void) {
 unsigned r=lbl_8323B50C;
 if(!r) { unsigned n=fn_82D00DD8(); if(lbl_8323B50C) fn_82CE3E48(lbl_8323B50C); lbl_8323B50C=n; r=n; }
 return r;
}
void fn_82CFA0B8(Sink_82CFA0B8 *s,unsigned a,unsigned b,unsigned c,unsigned d,unsigned e,char trace) {
 unsigned stack[20]; char message[2048];
 fn_82CFBB60(message,2048,"%s(%d): [0x%08X] %s : %s\n",d,e,b,a,c);
 message[2047]=0; s->cb(message,s->ctx);
 if(trace) { int n=fn_82D00D50(get_82CFA0B8(),stack,20);
  if(n>2) { s->cb("Stack trace is:\n",s->ctx); fn_82D00D38(lbl_8323B50C,stack+2,n-2,s->cb,s->ctx); }
 }
}
typedef struct { int *vt; } Impl_824C97F0;
typedef struct { char pad[16]; Impl_824C97F0 *impl; } Callback_824C97F0;
typedef struct { union {char buf[16];char *ptr;} u; unsigned size,cap,alloc; } String_824C97F0;
extern void fn_82230110(void *,const char *);extern void fn_82230300(void *,int,int);
extern unsigned fn_824C9E38(void *,void *);extern char *fn_824C9FB8(void *,void *);extern void fn_824CA298(void *,void *,void *);
extern __declspec(noreturn) void fn_82F63108(void);
unsigned fn_824C97F0(char *self,char *name) {
 unsigned it[4];String_824C97F0 one,two;char *owner;void *text;
 if(*name=='*') {
  if(*(unsigned *)(self+0xa8)) { Callback_824C97F0 *cb=(Callback_824C97F0 *)(self+0x98); if(*(unsigned *)((char *)cb+0x10)==0)fn_82F63108();(*(void (**)(void *,const char *))(*(int *)(*(unsigned *)((char *)cb+0x10))+4))((void *)*(unsigned *)((char *)cb+0x10),name+1); }
  return 0;
 }
 { String_824C97F0 *s=(String_824C97F0 *)(self+8); if(s->cap>=16) text=s->u.ptr; else text=s->u.buf; }
 owner=fn_824C9FB8(self,text);
 if(owner) {
  fn_82230110(&one,name);fn_824CA298(it,owner+0x38,&one);fn_82230300(&one,1,0);
  if(it[0]!=*(unsigned *)(owner+0x3c))return fn_824C9E38(self,(void *)(it[0]+0x28));
 }
 fn_82230110(&two,name);fn_824CA298(it,self+0x54,&two);fn_82230300(&two,1,0);
 if(it[0]!=*(unsigned *)(self+0x58))return fn_824C9E38(self,(void *)(it[0]+0x28));
 return 0;
}

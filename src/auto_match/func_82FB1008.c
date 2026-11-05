extern int fn_82A2A288(unsigned,unsigned,void*,int,void*,unsigned);
extern unsigned __int64 fn_82FB0EE0(void*,void*,void*,unsigned,unsigned);
unsigned __int64 fn_82FB1008(void *a,void*b,void*c,unsigned d,unsigned e){unsigned short buf[260]; unsigned __int64 r=1; if(fn_82A2A288(0,0,c,-1,buf,260)>0) r=fn_82FB0EE0(a,b,buf,d,e); return r;}
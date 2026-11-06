struct Request_82A87DE0 { unsigned p; unsigned short a,b,c;};
extern "C" unsigned char fn_82A87790(int,int,Request_82A87DE0*);
extern "C" unsigned char fn_82A87868(int,int,Request_82A87DE0*,int,int,int);
extern "C" bool fn_82A87DE0(int a,int b,int c,int d,int e) {Request_82A87DE0 t;t.a=0;t.b=0;t.c=0;
 return fn_82A87790(a,b,&t) && fn_82A87868(a,b,&t,c,d,e);}

extern int fn_82E27D58(unsigned,unsigned,unsigned*,unsigned*);
unsigned fn_82E2C2D0(unsigned a,unsigned b,unsigned c){unsigned d,e,f,g;__int64 x,y,s,t,u;
if(fn_82E27D58(a,c,&e,&g)<0)return 1;
if(fn_82E27D58(b,c,&f,&d)<0)return 1;
x=(unsigned __int64)d*e;y=(unsigned __int64)f*g;
t=y*999;s=x*1000;u=y*1000;
if((s<t||x>y)&&(u<x*999||y>x))return 0;return 1;
}
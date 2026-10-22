typedef int (*Callback)(int,int,int,int,int *);
extern void fn_82C108A8(int,int,int,int,int,int,int);
int fn_82C10710(int p,int index,int unused,int a,int b,int c,int *out,int flag) {
 int result; int *e;
 if(index<0 || index>=127) result=0x80070057;
 else { e=(int *)(p+12*index); if(!e[0]) result=0x805000b6;
 else { result=((Callback)e[1])(e[2],a,b,c,out);
 if(flag) switch(out[0]) {case 1: fn_82C108A8(p,out[4],out[2],out[3],out[5],1,index); break; case 2: result=0x805000bd; break;}
 }} return result;
}

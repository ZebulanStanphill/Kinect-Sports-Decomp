typedef struct Query_826E9E48 {char pad[20]; int c;unsigned __int64 b,a;} Query_826E9E48;
extern int fn_82F6B2E8(unsigned,Query_826E9E48 *);
unsigned char fn_826E9E48(unsigned __int64 *out,unsigned *p) {Query_826E9E48 q;if(fn_82F6B2E8((*p&~3u)+8,&q)!=0)return 0;out[2]=q.c;out[1]=q.b;out[0]=q.a;return 1;}

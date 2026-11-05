extern unsigned lbl_821A8D8C;
extern unsigned *fn_8265C9E0(unsigned);
extern void fn_823C52C0(void *,char *,int,unsigned,unsigned,void *,void *);

typedef struct S { char *a; char *b; } S;
static __forceinline unsigned *make(char *p,int v,S s,unsigned *out) {unsigned *m=fn_8265C9E0(0x3f0);
if(m) {m[1]=1;m[0]=(unsigned)&lbl_821A8D8C;m[2]=1; if((unsigned)m+16) fn_823C52C0((char *)m+16,p,v,*(unsigned *)(p+0x1c),*(unsigned *)(p+0x4ac),s.a,s.b);}else m=0;
out[1]=(unsigned)m;out[0]=(unsigned)m+16;return out;}
unsigned *fn_823687C0(unsigned *out,char *p,int v) { S s; s.b = p+0x4a8; s.a = p+0x4a4; return make(p,v,s,out);}

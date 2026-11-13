extern int fn_8230D230();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


static unsigned int *ctor(unsigned int *p,unsigned __int64 a,unsigned __int64 b,unsigned __int64 c,unsigned int *d) {
 p[1]=1;p[0]=(unsigned int)&lbl_821A8D8C;p[2]=1;
 if(p+4) fn_8230D230(p+4,a,b,c,*d);
 return p;
}
unsigned int *fn_822C5CB8(unsigned int *out,unsigned __int64 a,unsigned __int64 b,unsigned __int64 c,unsigned int *d) {
 unsigned int *p=(unsigned int*)fn_8265C9E0(0x520);
 p=p?ctor(p,a,b,c,d):0;
 out[1]=(unsigned int)p;out[0]=(unsigned int)(p+4);return out;
}

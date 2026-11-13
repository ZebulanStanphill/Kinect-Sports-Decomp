extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B0440;


static void inner(unsigned int *p) { p[1] = 0; p[0] = (unsigned int)&lbl_821B0440; }
static unsigned int *ctor(unsigned int *p) {
 p[1]=1; p[0]=(unsigned int)&lbl_821AD588; p[2]=1;
 if (p+3) inner(p+3);
 return p;
}
unsigned int *fn_823297C8(unsigned int *out) {
 unsigned int *p=(unsigned int*)fn_8265C9E0(0x14);
 p=p?ctor(p):0;
 out[1]=(unsigned int)p;out[0]=(unsigned int)(p+3);return out;
}

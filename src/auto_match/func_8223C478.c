extern unsigned fn_828E9D90(void*);extern unsigned fn_823AA970(void*);
extern void fn_8223C3D0(void*,unsigned);extern void fn_828E9D28(void*,unsigned,unsigned);extern void fn_828E9D60(void*,unsigned);
void fn_8223C478(unsigned *p,unsigned bits){unsigned n=(fn_828E9D90(p)+bits+7)>>3;unsigned char ok;
ok=(p[4]==0&&p[5]==0)||n<=p[5];
if(ok&&p[4]==0&&n>fn_823AA970(p)){unsigned pos;fn_8223C3D0(p+6,n);pos=fn_828E9D90(p);fn_828E9D28(p,p[6],n);fn_828E9D60(p,pos);}
}
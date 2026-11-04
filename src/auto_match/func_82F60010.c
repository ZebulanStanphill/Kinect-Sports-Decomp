extern unsigned char fn_82F5E9F8(unsigned);
extern unsigned char fn_82F5EFC0(unsigned,int);
extern unsigned char fn_82F5F5E8(unsigned,int);
extern unsigned char fn_82F5FD20(unsigned);
unsigned char fn_82F60010(unsigned p) {
 if (!fn_82F5E9F8(p)) return 0;
 if (!fn_82F5EFC0(p,0)) return 0;
 if (!fn_82F5EFC0(p,1)) return 0;
 if (!fn_82F5F5E8(p,0)) return 0;
 if (!fn_82F5F5E8(p,1)) return 0;
 return fn_82F5FD20(p)!=0;
}

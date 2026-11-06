typedef struct { unsigned short type, size; unsigned value, first, second; unsigned char reserved[32]; } Message_82FE6A00;
extern unsigned fn_8300F108(void);
extern void fn_8300F208(unsigned,Message_82FE6A00 *,unsigned short);
extern unsigned lbl_832642E4;
void fn_82FE6A00(unsigned a,unsigned b,unsigned c) {
 Message_82FE6A00 m;
 unsigned short id;
 m.size=4; m.value=c; m.first=a; m.second=b;
 id=fn_8300F108();
 fn_8300F208(lbl_832642E4,&m,id);
}

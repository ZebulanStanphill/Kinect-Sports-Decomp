extern int fn_82A33688(int,void *,unsigned);
extern void fn_82A2B760(void);
extern void fn_82A35FB8(void *,int);
unsigned char fn_82A35B80(int self,int arg) {
 unsigned char buf[0x148];
 if(fn_82A33688(self,buf,0x148)<0) {fn_82A2B760(); return 0;}
 fn_82A35FB8(buf,arg); return 1;
}

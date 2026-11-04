typedef int (*Code)(int *);
extern int fn_82E2F530(int,unsigned,int **);
extern void fn_82E50CB8(int);
extern void fn_82E50F10(int);
int fn_82E2FA90(int self,unsigned index,int **out) {
 int *p = 0; int hr = 0;
 if (!out) return 0x80070057;
 if (*(unsigned *)(self+0x1d4) <= index) return 0xc00d36bf;
 *out=0;
 fn_82E50CB8(self+0x54);
 if (fn_82E2F530(self+0x16c,index,&p)==0) hr=0xc00d36bf;
 else { *out=p; (*(Code *)(*p+4))(p); }
 fn_82E50F10(self+0x54);
 return hr;
}
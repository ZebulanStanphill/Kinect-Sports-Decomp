typedef int (*Code)(int *);
extern int fn_82E2F4C8(int,unsigned,int **);
extern void fn_82E50CB8(int);
extern void fn_82E50F10(int);
int fn_82E2F8F8(int self,unsigned index,int **out) {
 int *p = 0; int hr = 0;
 if (!out) return 0x80070057;
 if (*(unsigned *)(self+0x168) <= index) return 0xc00d36bf;
 *out=0;
 fn_82E50CB8(self+0x54);
 if (fn_82E2F4C8(self+0x100,index,&p)==0) hr=0xc00d36bf;
 else { *out=p; (*(Code *)(*p+4))(p); }
 fn_82E50F10(self+0x54);
 return hr;
}
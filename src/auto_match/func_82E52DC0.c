typedef struct Value_82E52DC0 { unsigned short type; char pad[6]; double value; } Value_82E52DC0;
extern void fn_82E50F00(void *, int);
extern void fn_82E51028(void *, int);
extern Value_82E52DC0 *fn_82E52428(void *, unsigned);
int fn_82E52DC0(char *self, unsigned key, double *out) {
 int hr = 0;
 fn_82E50F00(self+4,1);
 { Value_82E52DC0 *v=fn_82E52428(self,key);
 if (v!=0) { if(v->type==5) *out=v->value; else hr=0xc00d36bd; } else hr=0xc00d36e6;
 }
 fn_82E51028(self+4,1);
 return hr;
}

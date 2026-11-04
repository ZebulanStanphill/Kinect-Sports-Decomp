extern void fn_82E50F00(int,int);
extern void fn_82E51028(int,int);
extern unsigned short *fn_82E52428(int,int);
extern unsigned fn_82F64CE0(void *);
extern void *memcpy(void *,const void *,unsigned);
int fn_82E63730(int self,int key,void *dst,unsigned cap,unsigned *out) {
 int hr=0; unsigned short *v; unsigned len;
 fn_82E50F00(self+4,1);
 v=fn_82E52428(self,key);
 if(v) {
  if(*v==0x1f) {
   len=fn_82F64CE0(*(void **)(v+4));
   if(len>=0x7ffffffe) hr=0x8007000e;
   else { if(out) *out=len; if(len+1>cap) hr=0x8007007a;
    else memcpy(dst,*(void **)(v+4),(len+1)*2); }
  } else hr=0xc00d36bd;
 } else hr=0xc00d36e6;
 fn_82E51028(self+4,1); return hr;
}
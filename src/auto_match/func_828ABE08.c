extern unsigned char fn_82F64538(void *,void *);
extern char lbl_831D7088[],lbl_831E73E8[];
typedef void *(*GetType)(void *);
void *fn_828ABE08(void **p) {
 if(p) { void *t; if(*p)t=(*(GetType *)(*(int *)*p+4))(*p);else t=lbl_831D7088;
 if(fn_82F64538(t,lbl_831E73E8))return (char *)*p+4;
 }
 return 0;
}

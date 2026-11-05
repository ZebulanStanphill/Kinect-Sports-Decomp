extern void fn_82E50F00(void *,int);extern void fn_82E51028(void *,int);
typedef struct { unsigned short type; unsigned short pad[3]; unsigned size; void *data; } Entry_82E52ED0;
extern Entry_82E52ED0 *fn_82E52428(void *,unsigned);
extern void *memcpy(void *,const void *,unsigned);
unsigned fn_82E52ED0(char *self,unsigned key,void *dst,unsigned cap,unsigned *needed) { Entry_82E52ED0 *e; unsigned hr=0; fn_82E50F00(self+4,1); e=fn_82E52428(self,key); if(e) { if(e->type==0x1011) { if(needed)*needed=e->size; if(e->size>cap)hr=0x8007007a;else memcpy(dst,e->data,e->size); } else hr=0xc00d36bd; }else hr=0xc00d36e6; fn_82E51028(self+4,1);return hr; }

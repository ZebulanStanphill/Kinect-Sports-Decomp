typedef unsigned int uint;
extern void *fn_82E50BE8(uint,int,int,int,int);
extern void fn_82E4FE40(void *);
extern void *memcpy(void *,const void *,uint);
typedef struct { int a; char *data; uint cap,len; } Buffer;
int fn_82EF0F88(Buffer *p,const void *src,uint n){
 if(n){
  uint need=p->len+n;
  if(need>p->cap){
   uint cap=need+0x400;
   char *data=fn_82E50BE8(cap,0,0,0,0);
   if(!data)return 0x8007000e;
   if(p->data)memcpy(data,p->data,p->len);
   if(p->data)fn_82E4FE40(p->data);
   p->data=data;p->cap=cap;
  }
  if(p->len>p->len+n)return 0xc00d36bb;
  memcpy(p->data+p->len,src,n);
  p->len+=n;
 }
 return 0;
}

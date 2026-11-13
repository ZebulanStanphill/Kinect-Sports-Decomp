extern void *fn_82E50BE8(unsigned int,int,int,int,int);
extern void fn_82E4FE40(void *);
extern void *memcpy(void *,const void *,unsigned int);
typedef struct { int a; char *data; unsigned int cap,len; } Buffer;
int fn_82EF0F88(Buffer *p,const void *src,unsigned int n){
 if(n){
  unsigned int need=p->len+n;
  if(need>p->cap){
   unsigned int cap=need+0x400;
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

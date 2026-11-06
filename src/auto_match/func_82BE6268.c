typedef struct Buffer_82BE6268 { char pad[28]; char *data; int cursor,length,capacity; } Buffer_82BE6268;
extern int fn_82BE6148(Buffer_82BE6268 *,int,int);
extern int fn_82BE5240(Buffer_82BE6268 *,int,const char *,...);
extern void *memcpy(void *,const void *,unsigned);
static __forceinline int invalid(Buffer_82BE6268 *p) { return !p->data || p->capacity<=0; }
int fn_82BE6268(Buffer_82BE6268 *p, const void *data,int n) {
 const char *error;
 if (invalid(p)) error="Can't append to an invalid buffer.";
 else {
  if (data && n > 0) {
   int size = p->length+n;
   if (size > p->capacity && fn_82BE6148(p,size,64)==0) return 0;
   memcpy(p->data+p->cursor,data,n);
   p->length += n; p->cursor=p->length; return 1;
  }
  error="Data being passed to append is null or zero/negative length";
 }
 fn_82BE5240(p,101,error); return 0;
}

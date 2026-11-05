extern void *fn_8265CA60(unsigned);
extern void *memcpy(void *,const void *,unsigned);
typedef struct Buffer_822DB770 {union {void *ptr;char buf[8];} u; unsigned size;} Buffer;
Buffer *fn_822DB770(Buffer *d,Buffer *s) {
 Buffer *out=d;
 unsigned n=s->size;
 void *dest;
 const void * source;
 out->size=n;
 out->u.ptr=0;
 if (out->size <= 8) {dest=out;source=s;}
 else {dest=fn_8265CA60(out->size);out->u.ptr=dest;source=(const void *)s->u.ptr;}
 memcpy(dest,source,out->size);
 return out;
}

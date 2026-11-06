typedef struct {unsigned __int64 v[3];} Payload_828E64F8;
typedef void (*Copy_828E64F8)(void *,void *,int);
unsigned *fn_828E64F8(unsigned *dst,unsigned *src) {
 unsigned tag;*dst=0;tag=*src;
 if(tag) { *dst=tag;
 if(tag&1) *(Payload_828E64F8 *)(dst+2)=*(Payload_828E64F8 *)(src+2);
 else (*(Copy_828E64F8 *)(tag&~1U))(src+2,dst+2,0);
 }return dst;
}

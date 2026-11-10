typedef struct Blob_828D1000 { unsigned char bytes[0xc4]; } Blob_828D1000;
extern void *memset(void *,int,unsigned);
void fn_828D1000(Blob_828D1000 *p,unsigned n) {
 Blob_828D1000 tmp;
 while(n!=0) {
  memset(&tmp,0,0xc4);
  if(p!=0) *p=tmp;
  p++; n--;
 }
}

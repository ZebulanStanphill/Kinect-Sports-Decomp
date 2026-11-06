extern "C" { void fn_828D0EF0(void *);void fn_828D13D0(void *,unsigned);unsigned fn_82A1E740(void *,unsigned *,int);void *memcpy(void *,const void *,unsigned); }
struct Buffer_828D14D0 { unsigned pad[3];void *data;
 __forceinline void Resize(unsigned n) { fn_828D13D0(&data,n); }
};
extern "C" void fn_828D14D0(char *self) {
 if(*(unsigned char *)(self+60)!=1 && *(unsigned *)(self+28)!=997) {
  unsigned n=0;
  unsigned r=fn_82A1E740(self+28,&n,1);
  if(r) { if(r==997)return; }else if(n) {
   Buffer_828D14D0 *buffer=(Buffer_828D14D0 *)(self+64);
   void *src=*(void **)(self+24);
   unsigned count=n;
   buffer->Resize(count);
   memcpy(buffer->data,src,count*196);
  }
  *(unsigned char *)(self+60)=1;fn_828D0EF0(self);
 }
}

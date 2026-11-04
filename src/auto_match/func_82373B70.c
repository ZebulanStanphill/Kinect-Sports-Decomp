static __forceinline unsigned exchange_82373B70(unsigned *p) {unsigned old=*p;*p=0;return old;}
typedef struct Pair_82373B70 { unsigned obj,rc; } Pair_82373B70;
typedef struct Vector_82373B70 { Pair_82373B70 *first,*last,*end; } Vector_82373B70;
extern float lbl_8218EC10;
extern void fn_822315A0(unsigned);
void fn_82373B70(char *p) {
 Vector_82373B70 *v=(Vector_82373B70 *)(p+0x184);
 Pair_82373B70 *it=v->first; Pair_82373B70 tmp;
 if(it!=v->last) { float limit=lbl_8218EC10;
 do {
  unsigned obj=it->obj;
  if(*(int *)(obj+0xd4)==0 || *(float *)(obj+0xe0)>=limit) ++it;
  else {
   Pair_82373B70 *end=v->last, *next=it+1;
   for(;next!=end;++next){
    unsigned a=0,b=0,old;
    if(&tmp!=next){b=exchange_82373B70(&next->rc);a=exchange_82373B70(&next->obj);}
    old=next[-1].rc; next[-1].rc=b;next[-1].obj=a;
    if(old)fn_822315A0(old);
   }
   end=v->last;next=end-1;
   for(;next!=end;++next) if(next->rc)fn_822315A0(next->rc);
   v->last--;
  }
 }while(it!=*(Pair_82373B70 **)(p+0x188));
 }
}

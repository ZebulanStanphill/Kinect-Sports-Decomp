typedef struct { unsigned words[5]; } Entry_82FAFC28;
typedef struct { Entry_82FAFC28 *first,*last; unsigned capacity; } Vec_82FAFC28;
typedef struct { unsigned allocator; Vec_82FAFC28 vec; } Array_82FAFC28;
extern unsigned char fn_82FB0110(Vec_82FAFC28*,int);
void fn_82FAFC28(char *self,Array_82FAFC28 *output) {
 Array_82FAFC28 *array; Vec_82FAFC28 *src,*dst; Entry_82FAFC28 *p,*q;
 if(*(int *)(self+0x10)!=0) fn_82FAFC28((char *)*(int *)(self+0x10),output);
 array=*(Array_82FAFC28 **)(self+0x9c);
 if(array) {
  src=&array->vec; dst=&output->vec;
  for(p=src->first;p!=src->last;p++) {
   q=dst->first;
   while(q!=dst->last) {
    if(q->words[0]==p->words[0]) {
     if((unsigned)(dst->last-dst->first)>1) *q=dst->last[-1];
     dst->last--;
    } else q++;
   }
   { unsigned n=dst->last-dst->first;
    if((n<dst->capacity || fn_82FB0110(dst,3)) && n<dst->capacity) {
     q=dst->last++; if(q) *q=*p;
    }
   }
  }
 }
}
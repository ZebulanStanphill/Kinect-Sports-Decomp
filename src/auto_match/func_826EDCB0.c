typedef struct Floats_826EDCB0 { float a,b,c,d,e,f; } Floats_826EDCB0;
typedef struct Input_826EDCB0 { char pad[16]; Floats_826EDCB0 value; } Input_826EDCB0;
typedef struct Array_826EDCB0 { Floats_826EDCB0 *data; unsigned size,cap; } Array_826EDCB0;
typedef struct InputArray_826EDCB0 { Input_826EDCB0 *data; unsigned size; } InputArray_826EDCB0;
extern Array_826EDCB0 *fn_8267BED0(void *,unsigned,unsigned *);
extern void fn_826EBF90(Array_826EDCB0 *,Array_826EDCB0 *,unsigned);
extern void fn_826EB7F8(Floats_826EDCB0 *,unsigned);
static __forceinline void copy(Floats_826EDCB0 *d,const Floats_826EDCB0 *s) {d->a=s->a;d->b=s->b;d->c=s->c;d->d=s->d;d->e=s->e;d->f=s->f;}
void fn_826EDCB0(char *self,InputArray_826EDCB0 *in) {
 Array_826EDCB0 **slot=(Array_826EDCB0 **)(self+0x6c);Array_826EDCB0 *arr; unsigned old,n,i;
 if(*slot==0) { unsigned heap=2;Array_826EDCB0 *mem=fn_8267BED0(self,12,&heap);Array_826EDCB0 *result;
 if(mem) { mem->data=0;mem->size=0;mem->cap=0;result=mem;} else result=0;
 *slot=result; }
 arr=*slot;n=in->size;old=arr->size;fn_826EBF90(arr,arr,n);
 if(n>old)fn_826EB7F8(arr->data+old,n-old);
 for(i=0;i<in->size;i++) { copy(&(*slot)->data[i],&in->data[i].value); }
}

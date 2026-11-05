extern "C" void *fn_82CE5410();extern "C" void fn_82599388(void*,int);
struct Heap_82598DF0 {virtual void vf00();virtual void vf04();virtual void vf08();virtual void vf0c();virtual void vf10(void*,unsigned,int);};
struct Element_82598DF0 {int data[3];__forceinline ~Element_82598DF0(){fn_82599388(this,0);}};
struct Array_82598DF0 {Element_82598DF0 *p;int n;unsigned cap;__forceinline void tidy(){void *t=fn_82CE5410();int count=n;Element_82598DF0 *cur=p;Heap_82598DF0 *heap=*(Heap_82598DF0 **)((char*)t+16);for(int i=0;i<count;i++)cur[i].~Element_82598DF0();
n=0;if(!(cap&0x80000000u))heap->vf10(p,cap&0x3fffffffu,12);p=0;cap=0x80000000u;}};
extern "C" void fn_82598DF0(char *o){((Array_82598DF0 *)(o+8))->tidy();}
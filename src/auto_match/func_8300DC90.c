typedef unsigned char (*Check_8300DC90)(void *);
typedef struct Entry_8300DC90 { unsigned key; void *value; } Entry_8300DC90;
typedef struct Range_8300DC90 { Entry_8300DC90 *first,*last,*end; } Range_8300DC90;
static __forceinline unsigned char nonempty_8300DC90(unsigned n) {return n>0;}
static __forceinline void **Find_8300DC90(Range_8300DC90 *r,unsigned key) { Entry_8300DC90 *e=r->first; while(e!=r->last && e->key!=key) e++; return nonempty_8300DC90((unsigned)r->last-(unsigned)e) ? &e->value : 0; }
unsigned fn_8300DC90(char *p,unsigned lo,int hi) {
 unsigned key=(hi<<16)|lo; unsigned i=0;
 if(*(unsigned char *)(p+0x4d)) { Range_8300DC90 *r=(Range_8300DC90 *)(p+12); do {
  void **slot=Find_8300DC90(r,key);
  if(slot && (*(Check_8300DC90 *)(*(unsigned *)*slot+0x34))(*slot)) return 1;
  i++; r++;
 } while(i<*(unsigned char *)(p+0x4d)); }
 return 0;
}
typedef struct Ref_82710928 { int a,b; unsigned refs; } Ref_82710928;
extern void fn_826944C8(Ref_82710928 *);
extern void fn_826C1AD8(void *); extern void fn_8267BE38(void *);
void *fn_82710928(void *self,unsigned flags) {
 Ref_82710928 *r=*(Ref_82710928 **)((char *)self+0x30);
 if (--r->refs==0) fn_826944C8(r);
 fn_826C1AD8(self); if(flags&1) fn_8267BE38(self); return self;
}
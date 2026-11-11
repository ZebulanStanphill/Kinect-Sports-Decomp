typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern __vector4 __vxor(__vector4,__vector4);
extern __vector4 lbl_8209AB20;
extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry_82DBB550;
typedef struct { void *pad; TimerEntry_82DBB550 *current; void *pad2; TimerEntry_82DBB550 *end; } TimerStream_82DBB550;
extern TimerStream_82DBB550 *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

static __forceinline void timer(const char *name)
{
    TimerStream_82DBB550 *stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        TimerEntry_82DBB550 *entry = stream->current;
        entry->name = name;
        entry->time = (unsigned)__mftb();
        stream->current = entry + 1;
    }
}

typedef struct { unsigned short type; short pad[7]; unsigned short size; short pad2[7]; __vector4 velocity; } Msg_82DBB550;
typedef struct Heap_82DBB550 Heap_82DBB550;
typedef struct { void *f0; Msg_82DBB550 *(*alloc)(Heap_82DBB550 *h, unsigned int size); } HeapVt_82DBB550;
struct Heap_82DBB550 { HeapVt_82DBB550 *vt; };
typedef struct { int pad[4]; Heap_82DBB550 *heap; } Sys_82DBB550;
typedef struct Body_82DBB550 Body_82DBB550;
typedef struct { char pad[0x18]; void (*touch)(Body_82DBB550 *b); } BodyVt_82DBB550;
struct Body_82DBB550 { BodyVt_82DBB550 *vt; };
typedef struct Src_82DBB550 Src_82DBB550;
typedef struct { char pad[0x40]; void *(*getWorld)(Src_82DBB550 *s); } SrcVt_82DBB550;
struct Src_82DBB550 { SrcVt_82DBB550 *vt; };
extern Msg_82DBB550 *fn_82DBBD28(void *world, int type);
extern Sys_82DBB550 *fn_82CE5410(void);
extern void fn_82DBBF60(void *world, Body_82DBB550 *b, Msg_82DBB550 *m);

void fn_82DBB550(Src_82DBB550 *s,unsigned key,Body_82DBB550 *b,const __vector4 *velocity)
{
 void *world=s->vt->getWorld(s);
 if(world!=0) {
  __vector4 v;
  Msg_82DBB550 *found;
  b->vt->touch(b);
  timer("TtSetSurfVel");
  v=*velocity;
  if(*(unsigned *)((char *)world+0x14)==key) v=__vxor(v,lbl_8209AB20);
  found=fn_82DBBD28(world,0x1a);
  if(found!=0) { found->velocity=v; }
  else {
   Heap_82DBB550 *h=fn_82CE5410()->heap;
   Msg_82DBB550 *mem=h->vt->alloc(h,0x30);
   Msg_82DBB550 *m;
   if(mem!=0) { mem->type=0x1a; mem->size=0x30; m=mem; }
   else { m=0; }
   m->velocity=v;
   fn_82DBBF60(world,b,m);
  }
  timer("Et");
 }
}

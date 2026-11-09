extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry_82DBB3F8;
typedef struct { void *pad; TimerEntry_82DBB3F8 *current; void *pad2; TimerEntry_82DBB3F8 *end; } TimerStream_82DBB3F8;
extern TimerStream_82DBB3F8 *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

static __forceinline void timer(const char *name)
{
    TimerStream_82DBB3F8 *stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        TimerEntry_82DBB3F8 *entry = stream->current;
        entry->name = name;
        entry->time = (unsigned)__mftb();
        stream->current = entry + 1;
    }
}

typedef struct { unsigned short type; short pad[7]; unsigned short size; short pad2[7]; float x,y; char tail[8]; } Msg_82DBB3F8;
typedef struct Heap_82DBB3F8 Heap_82DBB3F8;
typedef struct { void *f0; Msg_82DBB3F8 *(*alloc)(Heap_82DBB3F8 *h, unsigned int size); } HeapVt_82DBB3F8;
struct Heap_82DBB3F8 { HeapVt_82DBB3F8 *vt; };
typedef struct { int pad[4]; Heap_82DBB3F8 *heap; } Sys_82DBB3F8;
typedef struct Body_82DBB3F8 Body_82DBB3F8;
typedef struct { char pad[0x18]; void (*touch)(Body_82DBB3F8 *b); } BodyVt_82DBB3F8;
struct Body_82DBB3F8 { BodyVt_82DBB3F8 *vt; };
typedef struct Src_82DBB3F8 Src_82DBB3F8;
typedef struct { char pad[0x40]; void *(*getWorld)(Src_82DBB3F8 *s); } SrcVt_82DBB3F8;
struct Src_82DBB3F8 { SrcVt_82DBB3F8 *vt; };
extern Msg_82DBB3F8 *fn_82DBBD28(void *world, int type);
extern Sys_82DBB3F8 *fn_82CE5410(void);
extern void fn_82DBBF60(void *world, Body_82DBB3F8 *b, Msg_82DBB3F8 *m);

void fn_82DBB3F8(Src_82DBB3F8 *s, unsigned key, int unused, Body_82DBB3F8 *b, float x, float y)
{
 void *world=s->vt->getWorld(s);
 if(world!=0) {
  Msg_82DBB3F8 *found;
  b->vt->touch(b);
  timer("TtSetSoftContact");
  found=fn_82DBBD28(world,0x17);
  if(found!=0) { found->x=x; found->y=y; }
  else {
   Heap_82DBB3F8 *h=fn_82CE5410()->heap;
   Msg_82DBB3F8 *mem=h->vt->alloc(h,0x30);
   Msg_82DBB3F8 *m;
   if(mem!=0) {
    mem->type=0x17; mem->size=0x30; mem->x=0.1f; mem->y=20.0f; m=mem;
   } else { m=0; }
   m->x=x; m->y=y;
   fn_82DBBF60(world,b,m);
  }
  timer("Et");
 }
}

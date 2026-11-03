typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

static void timer(const char *name)
{
  TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    TimerEntry *entry = stream->current;
    entry->name = name;
    entry->time = (unsigned)__mftb();
    stream->current = entry + 1;
  }
}

typedef struct Obj_8309A490 {
  char pad0[0x18];
  int f18;
  char pad1c[0x28 - 0x1c];
  int f28;
  int f2c;
} Obj_8309A490;

extern int fn_8309A2A0(Obj_8309A490 *, int, int, int);
extern int fn_82CE8E78(void *, Obj_8309A490 *, Obj_8309A490 *, int);

void fn_8309A490(void *param_1, Obj_8309A490 *o)
{
  timer("TtCollQueryPairGetClosestPoints");
  fn_8309A2A0(o, o->f18, o->f28, o->f2c);
  timer("Et");
  fn_82CE8E78(param_1, o, o, 0);
}

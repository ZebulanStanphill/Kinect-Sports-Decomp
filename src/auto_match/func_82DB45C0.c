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
//BODY
extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time; int pad; const char *name2; } TimerEntryA;
typedef struct { const char *name; unsigned time, pad; } TimerEntryB;
typedef struct { void *pad; char *current; void *pad2; char *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
extern void fn_82D92950(void *);
extern void fn_82DB4770(void *, void *, void *);

typedef struct { char pad[0xc]; float f; } Obj_82DB45C0;

void fn_82DB45C0(Obj_82DB45C0 *o, void *b, float *c)
{
  TimerStream *s;
  TimerEntryA *ea;
  TimerEntryB *eb;
  s = KeTlsGetValue(lbl_8323B4A0);
  if (s->current < s->end) {
    ea = (TimerEntryA *)s->current;
    ea->name = "LtMaintenance";
    ea->name2 = "StSplit";
    ea->time = (unsigned)__mftb();
    s->current = (char *)(ea + 1);
  }
  fn_82D92950(b);
  if (!(*c < o->f)) {
    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
      eb = (TimerEntryB *)s->current;
      eb->name = "StResetTime";
      eb->time = (unsigned)__mftb();
      s->current = (char *)(eb + 1);
    }
    fn_82DB4770(o, b, c);
  }
  s = KeTlsGetValue(lbl_8323B4A0);
  if (s->current < s->end) {
    eb = (TimerEntryB *)s->current;
    eb->name = "lt";
    eb->time = (unsigned)__mftb();
    s->current = (char *)(eb + 1);
  }
}

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
typedef struct { void *pad; unsigned int *current; void *pad2; unsigned int *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern int fn_82DB4770(int, int, float *);
extern unsigned int lbl_8323B4A0;

void fn_82DB46B8(int param_1, int param_2, float *param_3)
{
  TimerStream *stream;
  unsigned int *e;

  stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    e = stream->current;
    e[0] = (unsigned int)"LtMaintenance";
    e[3] = (unsigned int)"StResetTime";
    e[1] = (unsigned int)__mftb();
    stream->current = e + 4;
  }
  if (*param_3 >= *(float *)(param_1 + 0xc)) {
    fn_82DB4770(param_1, param_2, param_3);
  }
  stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    e = stream->current;
    e[0] = (unsigned int)"lt";
    e[1] = (unsigned int)__mftb();
    stream->current = e + 3;
  }
}

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


typedef struct Buf_8278FE08 { unsigned int data; unsigned int size; } Buf_8278FE08;
typedef struct Obj_8278FE08 { char pad[0x18]; Buf_8278FE08 *buf; unsigned int idx; } Obj_8278FE08;

int fn_8278FE08(Obj_8278FE08 *o, int *out)
{
  Buf_8278FE08 *b = o->buf;
  unsigned char done;
  if (b == 0 || !(o->idx < b->size)) {
    done = 1;
  } else {
    done = 0;
  }
  if (!done) {
    if (out != 0) {
      *out = b->size - o->idx;
    }
    return o->buf->data + o->idx * 2;
  }
  *out = 0;
  return 0;
}

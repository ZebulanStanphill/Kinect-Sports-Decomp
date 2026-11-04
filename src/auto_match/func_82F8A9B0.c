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
typedef struct { char pad[4]; int status; void *pending_buf; char pad2[0x38 - 0xc]; void *window; char pad3[4]; void *prev; void *head; } DS;
typedef struct z_stream_s {
  char pad[0x1c]; DS *state; void *zalloc; void (*zfree)(void *, void *); void *opaque;
} z_stream;
int fn_82F8A9B0(z_stream *strm)
{
  int status;
  if (strm == 0 || strm->state == 0) return -2;
  status = strm->state->status;
  if (status != 0x2a && status != 0x45 && status != 0x49 && status != 0x5b && status != 0x67 && status != 0x71 && status != 0x29a) return -2;
  if (strm->state->pending_buf) strm->zfree(strm->opaque, strm->state->pending_buf);
  if (strm->state->head) strm->zfree(strm->opaque, strm->state->head);
  if (strm->state->prev) strm->zfree(strm->opaque, strm->state->prev);
  if (strm->state->window) strm->zfree(strm->opaque, strm->state->window);
  strm->zfree(strm->opaque, strm->state);
  strm->state = 0;
  return status == 0x71 ? -3 : 0;
}

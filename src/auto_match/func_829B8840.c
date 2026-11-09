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
typedef struct Buffer { char pad[20]; void *owner; } Buffer;
typedef struct State { char pad[28]; Buffer *buffer; unsigned x; void (*release)(void *,Buffer *); void *arg; } State;
extern void d3dx_inflate_blocks_free(void *,State *);
int d3dx_inflateEnd(State *s) {
 if (!s || !s->buffer || !s->release) return -2;
 if (s->buffer->owner) d3dx_inflate_blocks_free(s->buffer->owner,s);
 s->release(s->arg,s->buffer);
 s->buffer=0;
 return 0;
}

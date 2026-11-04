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
extern void *fn_82FA5060(void *, unsigned int);
extern void fn_82A1DDC0(void *, void *, unsigned int);
extern void fn_82FA5190(void *, void *);
extern void *lbl_831BC770;

typedef struct { char pad[0x10]; unsigned short n; short pad2; void *data; } Src_83021D68;

void fn_83021D68(Src_83021D68 *s, unsigned short *count, void **dst)
{
  void *buf;
  if (s->n != 0) {
    if (*dst == 0) {
      *dst = s->data;
      s->data = 0;
    } else {
      buf = fn_82FA5060(lbl_831BC770, (*count + s->n) * 0x14);
      if (buf != 0) {
        fn_82A1DDC0(buf, *dst, *count * 0x14);
        fn_82A1DDC0((char *)buf + *count * 0x14, s->data, s->n * 0x14);
        fn_82FA5190(lbl_831BC770, *dst);
        fn_82FA5190(lbl_831BC770, s->data);
        s->data = 0;
        *dst = buf;
      }
    }
    *count = *count + s->n;
  }
}

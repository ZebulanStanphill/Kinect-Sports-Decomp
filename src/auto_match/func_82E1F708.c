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


extern unsigned strlen(const char *);

int fn_82E1F708(char *s)
{
  unsigned len;
  unsigned start;
  unsigned end;
  unsigned n;
  if (s == 0) {
    return 0;
  }
  len = strlen(s);
  if (len == 0) {
    return 0;
  }
  start = 0;
  end = len - 1;
  while (start < len && (s[start] == ' ' || s[start] == '\t')) {
    start++;
  }
  while (end != 0 && (s[end] == ' ' || s[end] == '\t')) {
    end--;
  }
  if (start > end) {
    s[0] = 0;
    return 0;
  }
  n = end - start + 1;
  if (start != 0) {
    unsigned i;
    for (i = 0; i < n; i++) {
      s[i] = s[i + start];
    }
  }
  s[n] = 0;
  return n;
}

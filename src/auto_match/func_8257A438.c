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
extern int fn_82F66368(char *, unsigned, const char *, unsigned);
extern int fn_82F668D8(char *, unsigned, const char *, unsigned);

void fn_8257A438(char *path, char *out)
{
  int i = 0;
  unsigned char found = 0;
  unsigned len;
  out[0] = 0;
  len = strlen(path);
  while (len > 2) {
    if (path[i] == ':') {
      found = 1;
      break;
    }
    i++;
    len = strlen(path) - i;
  }
  if (!found) {
    fn_82F66368(out, 0x104, "Game:", 0x103);
    len = strlen(path);
    if (len != 0 && out[len - 1] != '\\') {
      fn_82F668D8(out, 0x104, "\\", 1);
    }
  }
  fn_82F668D8(out, 0x104, path, strlen(path));
}

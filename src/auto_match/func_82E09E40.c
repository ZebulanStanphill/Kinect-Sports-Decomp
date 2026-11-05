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
extern unsigned int fn_82CFBE40(char *);
extern int fn_82CFBC20(char *, char *, unsigned int);
extern char *lbl_83187004[];
int fn_82E09E40(char *s)
{
  int i = 0;
  char **tbl = lbl_83187004;
  while (tbl[i] != 0) {
    char *p = tbl[i];
    if (fn_82CFBC20(s, p, fn_82CFBE40(p)) == 0) return 1;
    i++;
  }
  return 0;
}

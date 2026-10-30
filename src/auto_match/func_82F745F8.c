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
extern void fn_82F72F40(void *);
extern void fn_82F728D0(void *, int);
extern void fn_82F73A48(void *, int);
extern char *lbl_832635C0;

typedef struct { int v; char a; char b; short c; } DN_82F745F8;

DN_82F745F8 *fn_82F745F8(DN_82F745F8 *param_1)
{
  char c;
  struct { DN_82F745F8 t; DN_82F745F8 u; } L;

  fn_82F72F40(&L.t);
  if (*lbl_832635C0++ == '@' && *lbl_832635C0++ == '_') {
    lbl_832635C0++;
    fn_82F73A48(&L.u, 0);
    fn_82F73A48(&L.u, 0);
    c = *lbl_832635C0;
    while (c != '\0' && c != '@') {
      lbl_832635C0++;
      c = *lbl_832635C0;
    }
    if (c == '\0') {
      lbl_832635C0--;
      fn_82F728D0(param_1, 1);
    }
    else {
      lbl_832635C0++;
      *param_1 = L.t;
      return param_1;
    }
  }
  else {
    param_1->b = 0;
    param_1->a = 2;
    param_1->v = 0;
  }
  return param_1;
}

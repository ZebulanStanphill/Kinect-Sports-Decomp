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
struct Buf_82240158;
typedef struct {
  char pad[0x24];
  __int64 (*sputn)(struct Buf_82240158 *, const char *, __int64);
} BufVt_82240158;
typedef struct Buf_82240158 { BufVt_82240158 *vt; } Buf_82240158;
typedef struct {
  int pad0;
  int pad1;
  char pad2[4];
  int iostate;
  char pad3[4];
  int flags;
  char pad4[0x20 - 0x18];
  __int64 width;
  char pad5[0x38 - 0x28];
  Buf_82240158 *rdbuf;
  char pad6[4];
  char fill;
} Ios_82240158;
typedef struct { int *vbtab; } Ostr_82240158;
typedef struct { int os; unsigned char ok; } Sentry_82240158;
extern void fn_8223FD30(Sentry_82240158 *, Ostr_82240158 *);
extern void fn_8223FE60(Sentry_82240158 *);
extern int fn_8223FFB8(Buf_82240158 *, char);
extern void fn_82240070(Ios_82240158 *, int, int);

#define IOS(o) ((Ios_82240158 *)((char *)(o) + (o)->vbtab[1]))

extern unsigned strlen(const char *);
Ostr_82240158 *fn_82240158(Ostr_82240158 *os, const char *s)
{
  int state = 0;
  const char *p;
  __int64 len, pad, w;
  Sentry_82240158 se;
  Ios_82240158 *ios;
  len = strlen(s);
  w = IOS(os)->width;
  if (w <= 0 || w <= len) pad = 0;
  else pad = w - len;
  fn_8223FD30(&se, os);
  if (se.ok == 0) {
    state = 4;
  } else {
    if ((IOS(os)->flags & 0x1c0) != 0x40) {
      for (; 0 < pad; pad--) {
        if (fn_8223FFB8(IOS(os)->rdbuf, IOS(os)->fill) == -1) goto fail;
      }
    }
    if (IOS(os)->rdbuf->vt->sputn(IOS(os)->rdbuf, s, len) == len) {
      for (; 0 < pad; pad--) {
        if (fn_8223FFB8(IOS(os)->rdbuf, IOS(os)->fill) == -1) goto fail;
      }
    } else {
fail:
      state = 4;
    }
    IOS(os)->width = 0;
  }
  ios = IOS(os);
  if (state != 0) {
    int st2 = ios->iostate | state;
    fn_82240070(ios, ios->rdbuf == 0 ? (st2 | 4) : st2, 0);
  }
  fn_8223FE60(&se);
  return os;
}

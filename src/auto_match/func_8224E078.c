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

typedef struct Str_8224E078 { char b[32]; } Str_8224E078;
typedef struct SS_8224E078 { int pad4; char buf[156]; } SS_8224E078;
extern void fn_828A9C98(void);
extern void fn_82230110(Str_8224E078 *s, const char *text);
extern void fn_82230300(Str_8224E078 *s, int built, unsigned int new_size);
extern void fn_82897DF8(void *, void *, void *);
extern void fn_8223CFC0(void *ss, int mode, int x);
extern void *fn_82240158(void *os, const char *s);
extern void *fn_82520AC8(void *os, int c);
extern void fn_822403C8(void *out, void *buf);
extern void fn_8223DCC8(void *ss);
extern int fn_828EA268(unsigned);

static __forceinline void Ini1(char *s, unsigned v)
{
    *(int *)(s + 0xc) = 0;
    *(unsigned char *)(s + 0x58) = 1;
    *(int *)(s + 0x5c) = 0;
    *(unsigned *)(s + 0x60) = v;
    *(int *)(s + 0x64) = fn_828EA268(v);
}
static __forceinline void Ini2(char *s, int v)
{
  s[0xc] = 0;
  s[0x58] = 0;
  *(unsigned char *)(s + 0x59) = v;
  *(int *)(s + 0x5c) = fn_828EA268(v);
}
static __forceinline void Ini3(char *s, int a, int v)
{
  s[0x58] = 0;
  s[0xc] = a;
  s[0x59] = v;
  *(int *)(s + 0x5c) = fn_828EA268(v);
}
static __forceinline void Ini4(char *s)
{
  s[0xc] = 0;
}
void fn_8224E078(char *o)
{
  Str_8224E078 s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, sa, sb;
  SS_8224E078 ss;
  char *p;
  unsigned i;

  fn_828A9C98();
  fn_82230110(&s0, "ProfileFlags");
  fn_82897DF8(o + 0x354, o, &s0);
  fn_82230300(&s0, 1, 0);
  fn_82230110(&s1, "ProfileFlags");
  fn_82897DF8(o + 0x854, o, &s1);
  fn_82230300(&s1, 1, 0);
  p = o + 0x404;
  i = 0;
  do {
    fn_8223CFC0(&ss, 2, 1);
    fn_82520AC8(fn_82240158(&ss, "ProfileCounter"), i);
    fn_822403C8(&s2, ss.buf);
    Ini1(p - 0x58, 0xffffffff);
    fn_82897DF8(p - 0x58, o, &s2);
    fn_82230300(&s2, 1, 0);
    fn_822403C8(&s3, ss.buf);
    Ini1(p + 0x4a8, 0xffffffff);
    fn_82897DF8(p + 0x4a8, o, &s3);
    fn_82230300(&s3, 1, 0);
    fn_8223DCC8(&ss);
    i++;
    p += 0x68;
  } while (i < 8);
  fn_82230110(&s4, "XAvatar Metadata");
  fn_82897DF8(o + 0x2fc, o, &s4);
  fn_82230300(&s4, 1, 0);
  fn_82230110(&s5, "XAvatar Metadata For Player 2");
  fn_82897DF8(o + 0x6ec, o, &s5);
  fn_82230300(&s5, 1, 0);
  fn_82230110(&s6, "XUID Player 2");
  fn_82897DF8(o + 0x744, o, &s6);
  fn_82230300(&s6, 1, 0);
  fn_82230110(&s7, "Gamertag 2");
  fn_82897DF8(o + 0x79c, o, &s7);
  fn_82230300(&s7, 1, 0);
  fn_82230110(&s8, "User Index 2");
  Ini2(o + 0x7f4, 0xff);
  fn_82897DF8(o + 0x7f4, o, &s8);
  fn_82230300(&s8, 1, 0);
  fn_82230110(&s9, "All 2nd Profile vars sent");
  { char *q = o + 0xbec; Ini4(q);
  fn_82897DF8(q, o, &s9); }
  fn_82230300(&s9, 1, 0);
  fn_82230110(&sa, "Voice Privilege");
  Ini3(o + 0xc44, 2, 3);
  fn_82897DF8(o + 0xc44, o, &sa);
  fn_82230300(&sa, 1, 0);
  fn_82230110(&sb, "Global Mute");
  { char *q = o + 0xca4; Ini4(q);
  fn_82897DF8(q, o, &sb); }
  fn_82230300(&sb, 1, 0);
}

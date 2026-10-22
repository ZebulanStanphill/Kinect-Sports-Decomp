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
extern int fn_8282AA10();
extern int fn_8282B1C8();
extern int fn_8282B788();
extern int fn_8282D970();
extern int fn_8282DA48();
extern int fn_8282DB10();
extern int fn_8282DD60();
extern int fn_8282E438();
extern int fn_82832B28();
extern int fn_82833780();


typedef struct { int size; int pad[4]; } Sec;
typedef struct { char pad0[0x51]; unsigned char f51; char pad52[2]; int f54; Sec sec[(0x2d8-0x58)/0x14]; int f2d8; char pad2dc[8]; int f2e4; int f2e8; char pad2ec[1000-0x2ec]; char f3e8; char pad3e9[6]; char f3ef; char f3f0; } S;
static void alloc(S *p, int *out, int n, unsigned char idx) { Sec *s = &p->sec[idx]; *out = p->f2e4 + p->f2d8; p->f2d8 += n; s->size = n + s->size; }
static void alloc2(S *p, int *out, int n, unsigned char idx) { *out = p->f2e4 + p->f2d8; p->f2d8 += n; p->sec[idx].size += n; }
static void skip(S *p, int n, unsigned char idx) { Sec *s = &p->sec[idx]; p->f2d8 += n; s->size = n + s->size; }
static void skip2(S *p, int n, unsigned char idx) { p->f2d8 += n; p->sec[idx].size += n; }
static void skip3(S *p, int n, unsigned char idx) { Sec *s = &p->sec[idx]; p->f2d8 += n; s->size += n; }
void fn_8282E5D8(S *p)
{
  p->f3e8 = 0;
  fn_8282D970(p);
  alloc2(p, &p->f2e8, p->f51 * 0x21, 0); skip2(p, p->f54, 0);
  fn_8282E438(p);
  fn_8282DA48(p);
  fn_8282DB10(p);
  if (p->f3ef) { fn_8282B788(p); fn_82832B28(p); }
  fn_8282B1C8(p);
  fn_8282AA10(p);
  if (p->f3f0) fn_82833780(p);
  fn_8282DD60(p);
}

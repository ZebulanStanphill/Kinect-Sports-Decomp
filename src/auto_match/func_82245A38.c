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
extern int fn_8223CFC0(void *, int, int);
extern void *fn_8223DCC8(void *);
extern void *fn_8223FBB0(void *, int);
extern void *fn_8223FCD8(void *, void *);
extern void *fn_82240158(void *, const char *);
extern void *fn_822403C8(void *, void *);
extern void *fn_82520AC8(void *, int);
extern void *fn_82F62578(void *, int);

typedef struct Str_82245A38 { char pad[8]; union { char buf[4]; char *ptr; } u; unsigned int n; } Str_82245A38;
typedef struct Ios_82245A38 { int *vt; char pad[0x10]; unsigned int flags; } Ios_82245A38;
typedef struct Strm_82245A38 { int a; char b[0x94]; } Strm_82245A38;

typedef struct IosB_82245A38 { char pad[0x14]; unsigned int flags; char pad2[0x28]; char fill; } IosB_82245A38;
static void setfill_82245A38(int *p, char c) { IosB_82245A38 *i = (IosB_82245A38 *)((int)p + *(int *)(*p + 4)); i->fill = c; }
static void setf_82245A38(int *p) { IosB_82245A38 *i = (IosB_82245A38 *)((int)p + *(int *)(*p + 4)); i->flags = (i->flags & 0xfffff1ff) | 0x800; }

void *fn_82245A38(void *param_1,int param_2,int param_3,Str_82245A38 *param_4)
{
  void *r;
  int *piVar2;
  unsigned char *puVar3;
  char tmp[16];
  Strm_82245A38 s;

  fn_8223CFC0(&s,2,1);
  if (param_4->n <= 4) {
    puVar3 = (unsigned char *)param_4->u.buf;
  }
  else {
    puVar3 = (unsigned char *)param_4->u.ptr;
  }
  r = fn_82240158(&s,"NetDefBits_c<");
  r = fn_82520AC8(r,1);
  fn_82240158(r,"> - {0x");
  piVar2 = (int *)fn_8223FCD8(&s,fn_82F62578(tmp,2));
  setfill_82245A38(piVar2, 0x30);
  setf_82245A38(piVar2);
  fn_8223FBB0(piVar2,*puVar3);
  fn_82240158(&s,"}");
  fn_822403C8(param_1,s.b);
  fn_8223DCC8(&s);
  return param_1;
}

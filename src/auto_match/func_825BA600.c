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
typedef struct Pair_825BA600 { int *p; void *rc; } Pair_825BA600;
typedef struct Ref_825BA600 { int f0; int f4; int f8; int fc; int f10; int f14; } Ref_825BA600;
typedef struct Ptr_825BA600 { Ref_825BA600 *p; void *rc; } Ptr_825BA600;
typedef struct Info_825BA600 { char pad[4]; int *f4; } Info_825BA600;
typedef struct Dst_825BA600 { char pad[0xb30]; int fb30; } Dst_825BA600;
typedef struct Sub_825BA600 { int f0; } Sub_825BA600;
typedef struct A_825BA600 {
  char pad[4]; char f4[6]; unsigned short fa; char pad1[0x13 - 0xc]; unsigned char f13; char pad2[0x34 - 0x14];
  void *f34; int f38;
} A_825BA600;
typedef struct B_825BA600 { char pad[0xd48]; int fd48; } B_825BA600;
extern void fn_822315A0(void *);
extern int fn_823AB158(int);
extern void fn_825200F0(void *, void *);
extern void fn_82522ED8(void *);
extern Dst_825BA600 *fn_82529A38(void *, void *, int);
extern Ptr_825BA600 *fn_8255BB98(void *, int);
extern unsigned char fn_8255C2E8(A_825BA600 *, B_825BA600 *, void *);
extern void *fn_8255C3D8(void *, void *, B_825BA600 *);
extern void fn_82564348(void *);
extern void *fn_82587AC0(void *);
extern void *fn_825B6CE0(void *);
extern unsigned char fn_827D6968(void *, void *, int);
extern void *fn_8288F9A0(void *, int);
extern void *fn_828A12E8(int);
extern void *lbl_83265A24;

void fn_825BA600(A_825BA600 *a, B_825BA600 *b)
{
  int h;
  char buf[16];
  Ptr_825BA600 hold1;
  Ptr_825BA600 hold2;
  unsigned char has;
  void *n;
  Dst_825BA600 *d;
  unsigned e;
  int x;
  Info_825BA600 *t;
  void *t3;

  h = b->fd48;
  if (a->f34 != 0) {
    fn_825200F0(buf, &a->f34);
    if (fn_827D6968(lbl_83265A24, buf, -1) != 0) {
      n = fn_825B6CE0(&a->f34);
      if (fn_8255C2E8(a, b, fn_8255C3D8(n, &a->f4, b)) != 0) {
        t3 = fn_82587AC0((char *)n + 0x4b);
        d = fn_82529A38(t3, n, 0);
        if (d != 0) {
          if (a->fa == 0) {
            has = fn_8255BB98(&hold1, h)->p != 0;
            if (hold1.rc != 0) {
              fn_822315A0(hold1.rc);
            }
            if (has) {
              x = fn_8255BB98(&hold2, h)->p->f8;
              t = fn_8288F9A0(fn_828A12E8(x), 1);
              e = *t->f4;
              if (hold2.rc != 0) {
                fn_822315A0(hold2.rc);
              }
              t = fn_8288F9A0(fn_828A12E8(x), 1);
              if (e != (unsigned)t->f4) {
                d->fb30 = fn_823AB158(*(int *)(e + 0x14));
              }
            }
          }
          if (a->f13 != 0 || a->f38 != 0) {
            fn_82564348(d);
          }
        }
      }
      fn_82522ED8(n);
    }
  }
}

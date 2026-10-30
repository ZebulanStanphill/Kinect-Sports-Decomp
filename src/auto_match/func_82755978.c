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
typedef struct Ent_82755978 {
  struct Src_82755978 *src;
  int len;
} Ent_82755978;
typedef struct Src_82755978 {
  char pad[0x154];
  void *f154;
} Src_82755978;
typedef struct List_82755978 {
  Ent_82755978 *ents;
  unsigned int count;
  int pad8;
  unsigned int fc;
} List_82755978;
typedef struct Range_82755978 {
  unsigned int first;
  int len;
} Range_82755978;
extern void fn_8268B330(void *);
extern void fn_8268B400(void *, unsigned int);
extern unsigned int fn_826BD078(unsigned int *);
extern unsigned char fn_827AED50(void *);
extern void fn_827AF0A0(Range_82755978 *, void *);
extern void fn_827AF0F8(void *, int);
extern void fn_827AF528(void *, void *, int, int);

void *fn_82755978(void *out, List_82755978 *l, unsigned char flag)
{
  struct {
    unsigned int cur;
    int pad[3];
    Range_82755978 r;
    int pad2[10];
    char it[48];
  } L;
  int base;
  unsigned int pos;
  unsigned int i;
  unsigned int hi, k, c;
  void *f;

  fn_8268B330(out);
  base = 0;
  pos = 0;
  i = 0;
  L.cur = (l->fc & 0xfffffffc) + 8;
  if (l->count != 0) {
    do {
      f = l->ents[i].src->f154;
      if (f != 0) {
        fn_827AF528(L.it, f, 0, -1);
        while (fn_827AED50(L.it) == 0) {
          fn_827AF0A0(&L.r, L.it);
          L.r.first = L.r.first + base;
          hi = L.r.len + L.r.first;
          if (hi > pos) {
            for (; pos < L.r.first; pos++) {
              if (fn_826BD078(&L.cur) == 10) {
                pos--;
              }
            }
            k = pos;
            if (k < hi) {
              do {
              do {
                c = fn_826BD078(&L.cur);
                if (flag != 0) {
                  if (c != 10) break;
                  fn_8268B400(out, 10);
                }
              } while (c == 10);
              fn_8268B400(out, c);
                k++;
              } while (k < hi);
            }
            pos = hi;
          }
          fn_827AF0F8(L.it, 0);
        }
        base = l->ents[i].len + base;
      }
      i++;
    } while (i < l->count);
  }
  return out;
}

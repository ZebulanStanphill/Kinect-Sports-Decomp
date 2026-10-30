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
extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_82C16C90(void *p);

typedef struct Five_82C09F08 { char pad[0xc]; void *p0, *p1, *p2, *p3, *p4; } Five_82C09F08;
typedef struct EntB_82C09F08 { int pad0; void *a; int pad1; void *b; } EntB_82C09F08;   /* 0x10 */
typedef struct ListB_82C09F08 { unsigned short count; short pad; EntB_82C09F08 *entries; } ListB_82C09F08;
typedef struct EntC_82C09F08 { char pad[0xc]; void *a; void *b; } EntC_82C09F08;      /* 0x14 */
typedef struct ListC_82C09F08 { unsigned short count; short pad; EntC_82C09F08 *entries; } ListC_82C09F08;
typedef struct Buf_82C09F08 { int pad; void *data; } Buf_82C09F08;
typedef struct State_82C09F08 {
  char pad0[0xcc];
  Five_82C09F08 *five;     /* +0xcc */
  ListB_82C09F08 *listb;   /* +0xd0 */
  char pad1[0xc];
  void *buf;               /* +0xe0 */
  char pad2[4];
  ListC_82C09F08 *listc;   /* +0xe8 */
  char pad3[0x15c];
  void *obj248;            /* +0x248 */
  char pad4[0x18];
  void *f264;              /* +0x264 */
  Buf_82C09F08 *f268;      /* +0x268 */
} State_82C09F08;

int fn_82C09F08(State_82C09F08 **param_1)
{
  State_82C09F08 *s;
  Five_82C09F08 *five;
  Buf_82C09F08 *b;
  unsigned int i;
  int off;
  void *p;

  if (param_1 != 0 && (s = *param_1) != 0) {
    fn_82C16C90(s->obj248);
    s->obj248 = 0;
    if (s->buf != 0) {
      fn_8265C990(s->buf, 0x248c8000);
      s->buf = 0;
    }
    five = s->five;
    if (five != 0) {
      fn_8265C990(five->p0, 0x248c8000);
      fn_8265C990(five->p1, 0x248c8000);
      fn_8265C990(five->p2, 0x248c8000);
      fn_8265C990(five->p3, 0x248c8000);
      fn_8265C990(five->p4, 0x248c8000);
      fn_8265C990(five, 0x248c8000);
      s->five = 0;
    }
    if (s->listb != 0) {
      if (s->listb->count != 0) {
        for (i = 0; i < s->listb->count; i++) {
          fn_8265C990(s->listb->entries[i].b, 0x248c8000);
          fn_8265C990(s->listb->entries[i].a, 0x248c8000);
          s->listb->entries[i].b = 0;
          s->listb->entries[i].a = 0;
        }
        fn_8265C990(s->listb->entries, 0x248c8000);
        s->listb->entries = 0;
      }
      fn_8265C990(s->listb, 0x248c8000);
      s->listb = 0;
    }
    if (s->listc != 0) {
      if (s->listc->count != 0) {
        for (i = 0; i < s->listc->count; i++) {
          if (s->listc->entries != 0) {
            p = s->listc->entries[i].a;
            if (p != 0)
              fn_8265C990(p, 0x248c8000);
            s->listc->entries[i].a = 0;
            p = s->listc->entries[i].b;
            if (p != 0)
              fn_8265C990(p, 0x248c8000);
            s->listc->entries[i].b = 0;
          }
        }
        fn_8265C990(s->listc->entries, 0x248c8000);
        s->listc->entries = 0;
      }
      fn_8265C990(s->listc, 0x248c8000);
      s->listc = 0;
    }
    if (s->f264 != 0)
      fn_8265C990(s->f264, 0x248c8000);
    b = s->f268;
    s->f264 = 0;
    if (b != 0) {
      if (b->data != 0)
        fn_8265C990(b->data, 0x248c8000);
      fn_8265C990(b, 0x248c8000);
    }
    s->f268 = 0;
    fn_8265C990(s, 0x248c8000);
    *param_1 = 0;
    return 0;
  }
  return 2;
}

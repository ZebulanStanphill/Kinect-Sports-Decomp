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
typedef struct Link_8268EA40 {
  struct Link_8268EA40 *next;
  struct Link_8268EA40 *prev;
  char pad[0x1c];
  int count;
} Link_8268EA40;

typedef struct Sub_8268EA40 {
  int pad0;
  int pad4;
  int count;
} Sub_8268EA40;

typedef struct Obj_8268EA40 {
  char pad[0xc];
  Sub_8268EA40 sub;
} Obj_8268EA40;

extern void fn_8268E408(void *, void *, void *);
extern void fn_8268E490(void *, void *);
extern void fn_8268E5C8(void *, void *);

void fn_8268EA40(Obj_8268EA40 *o, char *x)
{
  Link_8268EA40 *n = *(Link_8268EA40 **)(x + 0x10);
  Sub_8268EA40 *s = &o->sub;
  Link_8268EA40 *nx;
  s->count = s->count - n->count;
  nx = n->next;
  if (nx != n) {
    Link_8268EA40 *pv = n->prev;
    pv->next = nx;
    nx->prev = pv;
    fn_8268E408(s, n, nx);
  } else {
    fn_8268E490(s, n);
  }
  fn_8268E5C8((char *)o + 0x10, n);
}

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
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern char lbl_821BEBB8[];
typedef struct Obj_82499830 {
  void *vt;
  char pad[0x4c];
  char sub[0x30];
} Obj_82499830;
extern void *fn_82492818(void *, void *, int, void *, void *, int, int, __vector4);
extern void *fn_82499E30(void *, int *);
extern void fn_82499730(void *, void *);
extern void fn_82491E88(void *);

void fn_82499830(char *p, int unused, int v, int flag)
{
  if (flag != 0) {
    Obj_82499830 buf;
    char *q = *(char **)(*(char **)(p + 0xc0) + 0x118);
    void *r = fn_82492818(&buf, q + 0x36c, v, q + 0x160, q + 0x1e0, *(int *)(q + 0xb4),
                          *(int *)(q + 0x2ec), *(__vector4 *)(q + 0xa0));
    void *t = fn_82499E30(p + 0x90, &v);
    fn_82499730(t, r);
    buf.vt = lbl_821BEBB8;
    fn_82491E88(buf.sub);
  }
}

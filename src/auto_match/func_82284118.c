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
extern int fn_822315A0(unsigned int);
extern int fn_823F2E20(int *, int);
extern int fn_8266EC60(void);
extern int fn_8266EE08(void *, int, int, int, int, int);
extern float lbl_82192438[];

typedef struct Tmp_82284118 { int a; unsigned int b; } Tmp_82284118;

int *fn_82284118(int *self, int param_2, int param_3)
{
  Tmp_82284118 t;
  int *p;
  int i;

  self[0] = 0;
  self[1] = 0;
  *(float *)(self + 2) = lbl_82192438[0x12];
  fn_823F2E20(self, fn_8266EE08(&t, fn_8266EC60(), param_2, 0, param_3, 0));
  if (t.b != 0) {
    fn_822315A0(t.b);
  }
  p = self - 0x82;
  for (i = 6; i != 0; i--) {
    p[0x8b] = 0;
    p[0x8c] = 0;
    p[0x8f] = 0;
    p += 0x8d;
    *p = 0;
  }
  return self;
}

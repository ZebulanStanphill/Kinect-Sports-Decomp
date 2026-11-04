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
extern int fn_824BF8A8(void *, void *);
extern int fn_82A1EFC0(void *, int, int);

typedef struct Ev_823876D0 {
  const char *name;
  unsigned int type;
} Ev_823876D0;

void fn_823876D0(int *p, void *q)
{
  Ev_823876D0 ev;

  if (p[1] != 0) {
    ev.name = "showvideo";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[0] != 0) {
    ev.name = "getready_serving";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[4] != 0) {
    ev.name = "serving";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[5] != 0) {
    ev.name = "getready_serving";
    ev.type = 6;
    fn_824BF8A8(q, &ev);
    ev.name = "serving";
    ev.type = 8;
    fn_824BF8A8(q, &ev);
  }
  if (p[9] != 0) {
    ev.name = "blocking";
    ev.type = 8;
    fn_824BF8A8(q, &ev);
  }
  if (p[6] != 0 && p[0xb] != 0) {
    ev.name = "blocking";
    ev.type = 9;
    fn_824BF8A8(q, &ev);
    ev.name = "blocking";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  } else if (p[6] != 0) {
    ev.name = "returning";
    ev.type = 9;
    fn_824BF8A8(q, &ev);
    ev.name = "returning";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[7] != 0) {
    ev.name = "returning";
    ev.type = 8;
    fn_824BF8A8(q, &ev);
  }
  if (p[10] != 0) {
    ev.name = "spiking";
    ev.type = 9;
    fn_824BF8A8(q, &ev);
    ev.name = "spiking";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[8] != 0) {
    ev.name = "spiking";
    ev.type = 8;
    fn_824BF8A8(q, &ev);
  }
  fn_82A1EFC0(p, 0, 0x30);
}

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
extern int fn_82536590(int *, int);
extern int fn_828647D8(void);
extern void fn_82864898(void *);
extern void fn_82864988(void *, const char *);

void fn_82485238(int param_1)
{
  int id;
  char football[40];
  char boxing[40];
  char bowling[40];
  char tabletennis[40];
  char athletics[40];
  char volleyball[40];
  char *buf;

  switch (param_1) {
  case 4: case 0x13: case 0x14: case 0x15:
    fn_82864988(bowling, "Play_speech_frontend_host_select_bowling");
    id = fn_828647D8();
    buf = bowling;
    break;
  case 5: case 0x16: case 0x17:
    fn_82864988(boxing, "Play_speech_frontend_host_select_boxing");
    id = fn_828647D8();
    buf = boxing;
    break;
  case 6: case 10: case 0xb: case 0xc:
    fn_82864988(football, "Play_speech_frontend_host_select_football");
    id = fn_828647D8();
    buf = football;
    break;
  case 7: case 0xd: case 0xe: case 0xf:
    fn_82864988(tabletennis, "Play_speech_frontend_host_select_tabletennis");
    id = fn_828647D8();
    buf = tabletennis;
    break;
  case 8: case 0x18: case 0x1a: case 0x1b: case 0x1c: case 0x1d: case 0x1e:
    fn_82864988(athletics, "Play_speech_frontend_host_select_athletics");
    id = fn_828647D8();
    buf = athletics;
    break;
  case 9: case 0x10: case 0x11: case 0x12:
    fn_82864988(volleyball, "Play_speech_frontend_host_select_volleyball");
    id = fn_828647D8();
    buf = volleyball;
    break;
  default:
    return;
  }
  fn_82864898(buf);
  fn_82536590(&id, 0);
}

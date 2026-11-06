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
extern int fn_824BF8A8();
extern unsigned char *lbl_82191C00[];



void fn_824415A8(uint *param_1,unsigned param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  int bVar4;
  struct { char *p; uint tag; } value;
  
  puVar3 = lbl_82191C00[param_1[4]];
  pcVar1 = *(char **)(puVar3 + 0x1c);
  if ((*param_1 & 0x40) != 0) {
    value.tag = 7;
    value.p = pcVar1;
    fn_824BF8A8(param_2,&value.p);
  }
  if ((*param_1 & 0x80) != 0) {
    value.tag = 8;
    value.p = pcVar1;
    fn_824BF8A8(param_2,&value.p);
    bVar4 = 1;
  } else { bVar4 = 0; }
  if ((*param_1 & 0x100000) != 0) {
    value.tag = 7;
    value.p = "discus_video";
    fn_824BF8A8(param_2,&value.p);
  }
  if ((*param_1 & 8) != 0) {
    value.p = *(char **)(puVar3 + 0x18);
    value.tag = 7;
    fn_824BF8A8(param_2,&value.p);
  }
  if (bVar4) {
    value.p = *(char **)(puVar3 + 0x18);
    value.tag = 6;
    fn_824BF8A8(param_2,&value.p);
  }
  if ((*param_1 & 0x80) != 0) {
    value.p = *(char **)(puVar3 + 0x20);
    value.tag = 7;
    fn_824BF8A8(param_2,&value.p);
  }
  uVar2 = *param_1;
  if (((uVar2 >> 0xc & 1) != 0) || ((uVar2 & 0x2000) != 0)) {
    value.p = *(char **)(puVar3 + 0x20);
    value.tag = ~(uVar2 >> 0xc) & 1 | 8;
    fn_824BF8A8(param_2,&value.p);
  }
  return;
}


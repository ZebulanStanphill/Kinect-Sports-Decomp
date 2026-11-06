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
extern void *fn_82A28568(void *, int, unsigned int);
extern void *fn_82A2A360(void);
extern int *_errno(void);
extern int fn_82F6CB58();
extern int _NMSG_WRITE();
extern int _FF_MSGBANNER();
extern int fn_82F800C8();
extern int lbl_83263614;


void *fn_82F68BF0(unsigned int param_1)

{
  int iVar3;
  void *uVar1;
  void *lVar2;
  undefined4 *puVar4;
  unsigned int uVar5;
  
  if (param_1 <= 0xfffff000U) {
    do {
      iVar3 = (int)fn_82A2A360();
      if ((unsigned)iVar3 == 0) {
        _FF_MSGBANNER();
        _NMSG_WRITE(0x1e);
        fn_82F6CB58(0xff);
      }
      uVar5 = param_1 ? param_1 : 1;
      lVar2 = fn_82A28568(fn_82A2A360(),0,uVar5);
      if (lVar2 != 0) {
        break;
      }
      if (lbl_83263614 == 0) {
        puVar4 = (undefined4 *)_errno();
        *puVar4 = 0xc;
        break;
      }
      iVar3 = fn_82F800C8(param_1);
    } while (iVar3 != 0);
    if (!lVar2) {
      puVar4 = (undefined4 *)_errno();
      *puVar4 = 0xc;
    }
    return lVar2;
  }
  else {
    fn_82F800C8(param_1);
    puVar4 = (undefined4 *)_errno();
    *puVar4 = 0xc;
  }
  return 0;
}


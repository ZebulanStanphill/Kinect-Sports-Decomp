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
extern int master_selection();
extern int prepare_for_output_pass();
extern int finish_output_pass();


void jinit_master_decompress(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)*(int *)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x180) = puVar1;
  *puVar1 = prepare_for_output_pass;
  puVar1[1] = finish_output_pass;
  *(undefined1 *)(puVar1 + 2) = 0;
  master_selection(param_1);
  return;
}


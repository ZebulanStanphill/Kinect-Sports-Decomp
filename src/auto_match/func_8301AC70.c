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


static __forceinline int *find_8301AC70(int base,unsigned key) {
    int *node=*(int **)(base+(key%193+10)*4);
    for (;node;node=(int *)*node) {
        if ((unsigned)node[1]==key) return node+2;
    }
    return 0;
}
unsigned fn_8301AC70(int base,unsigned key,float value) {
    int *item=find_8301AC70(base,key);
    if (!item) return 2;
    *(float *)(*item+0x54)=value;
    return 1;
}

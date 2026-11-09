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
typedef struct Msg_82A2B180 {
    unsigned int id;          /* 0x00 */
    unsigned int pad04;
    unsigned __int64 value;   /* 0x08 */
    unsigned int extra;       /* 0x10 */
    unsigned int arg;         /* 0x14 */
} Msg_82A2B180;

extern unsigned int XMsgInProcessCall(unsigned int app, unsigned int msg, void *param1, void *param2);

void fn_82A2B180(unsigned int id, unsigned int arg, unsigned __int64 value, unsigned int extra)
{
    Msg_82A2B180 msg;

    msg.id = id;
    msg.value = value;
    msg.extra = extra;
    msg.arg = arg;
    XMsgInProcessCall(0xfe, 0x2c00d, &msg, 0);
}

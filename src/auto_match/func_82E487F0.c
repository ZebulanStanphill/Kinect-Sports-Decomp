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
typedef struct { int a, b; } RTL_CRITICAL_SECTION;
void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct Obj { int (**vt)(struct Obj *, int, unsigned *); } Obj;
typedef struct {
    unsigned short type;
    unsigned short pad[3];
    unsigned int value;
} Prop;
typedef struct {
    int pad[1];
    RTL_CRITICAL_SECTION cs;
} Store;

extern Prop *fn_82E47870(Store *s, int key);

int fn_82E487F0(Store *s, int key, int a, unsigned *out)
{
    int hr;
    Prop *p;
    *out = 0;
    RtlEnterCriticalSection(&s->cs);
    p = fn_82E47870(s, key);
    if (p != 0) {
        if (p->type == 0xd && p->value != 0) {
            hr = ((Obj *)p->value)->vt[0]((Obj *)p->value, a, out);
        } else {
            hr = 0xc00d36bd;
        }
    } else {
        hr = 0xc00d36e6;
    }
    RtlLeaveCriticalSection(&s->cs);
    return hr;
}

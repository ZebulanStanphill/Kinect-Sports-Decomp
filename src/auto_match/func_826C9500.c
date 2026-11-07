typedef unsigned char bool;
#define true 1
#define false 0

typedef struct Msg_826C9500 {
    int kind;
    int value;
    unsigned short a;
    unsigned char b;
    signed char c;
    unsigned char d;
    unsigned char e;
} Msg_826C9500;

extern unsigned char fn_826C7758(char *p, Msg_826C9500 *msg);

static __forceinline bool IsClear_826C9500(char *p)
{
    return ~(*(unsigned char *)(p + 0x66) >> 6) & 1;
}

static __forceinline bool IsBlocked_826C9500(char *p)
{
    return (*(unsigned int *)(p + 0x8c) & 0xc) != 0 || !IsClear_826C9500(p);
}

static __forceinline bool IsIdle_826C9500(char *p, bool blocked)
{
    if (blocked ||
        (*(int *)(p + 0xb8) != 0 &&
         *(char **)(*(char **)(p + 0xa0) + 0xa08) != p &&
         (*(char **)(p + 0x1b4) == 0 ||
          *(void **)(*(char **)(p + 0x1b4) + 0xc) == 0)))
        return false;
    return true;
}

int fn_826C9500(char *param_1, unsigned char param_2)
{
    int result;
    bool blocked;
    bool idle;
    Msg_826C9500 m1;
    Msg_826C9500 m2;

    result = 0;
    blocked = IsBlocked_826C9500(param_1);
    idle = IsIdle_826C9500(param_1, blocked);
    if (idle) {
        result = (param_2 == 0);
    } else if (param_2 != 0) {
        if (!blocked) {
            m1.value = 0;
            m1.a = 0;
            m1.kind = 2;
            m1.b = 0;
            m1.c = -1;
            m1.d = 0;
            m1.e = 0;
            if (fn_826C7758(param_1, &m1) != 0)
                goto done;
        }
        result = -1;
    } else {
        if (!blocked) {
            m2.value = 0;
            m2.a = 0;
            m2.kind = 2;
            m2.b = 0;
            m2.c = -1;
            m2.d = 0;
            m2.e = 0;
            if (fn_826C7758(param_1, &m2) != 0)
                result = 1;
        }
    }
done:
    return result;
}

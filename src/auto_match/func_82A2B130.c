typedef unsigned int DWORD;
typedef unsigned __int64 ULONGLONG;

typedef struct Params_82A2B130 {
    DWORD a;          /* 0x00 */
    ULONGLONG b;      /* 0x08 */
    DWORD c;          /* 0x10 */
    DWORD d;          /* 0x14 */
    DWORD e;          /* 0x18 */
    DWORD f;          /* 0x1C */
    DWORD pad[2];     /* 0x20 */
} Params_82A2B130;

extern unsigned int XMsgInProcessCall(unsigned int hApp, unsigned int dwMessage,
                                      void *pParam1, void *pParam2);

void fn_82A2B130(DWORD param_1, ULONGLONG param_2, DWORD param_3, DWORD param_4,
                 DWORD param_5, DWORD param_6)
{
    Params_82A2B130 p;

    p.a = param_1;
    p.b = param_2;
    p.c = param_3;
    p.d = param_4;
    p.e = param_5;
    p.f = param_6;
    XMsgInProcessCall(0xfe, 0x2c00c, &p, 0);
}

typedef unsigned int uint;
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SR_ASSERT(e, line) if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmregistry.cpp", line)

#define E_SSMS_NUM_SETTINGS 12

typedef void (*FreeFn_82B69A00)(void *context, void *p);

typedef struct SR_82B69A00 {
    void *context;
    FreeFn_82B69A00 FreeSysMem;
    uint values[E_SSMS_NUM_SETTINGS];
} SR_82B69A00;

uint fn_82B69A00(SR_82B69A00 *pSt, int eSetting)
{
    SR_ASSERT(pSt, 0xb6);
    SR_ASSERT(eSetting < E_SSMS_NUM_SETTINGS, 0xb7);
    return pSt->values[eSetting];
}

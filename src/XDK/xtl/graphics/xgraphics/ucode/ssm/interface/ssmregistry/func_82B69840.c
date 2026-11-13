extern void fn_82AB15D0(int level, const char *fmt, ...);

#define SR_ASSERT(e, line) if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmregistry.cpp", line)

typedef void *(*AllocFn_82B69840)(void *context, unsigned int size);
typedef void (*FreeFn_82B69840)(void *context, void *p);
typedef void (*QueryFn_82B69840)(void *context, const char *name, unsigned int *value);

typedef struct RegEntry_82B69840 {
    unsigned int defaultValue;
    const char *name;
} RegEntry_82B69840;

extern RegEntry_82B69840 lbl_83161020[12];

typedef struct SR_82B69840 {
    void *context;
    FreeFn_82B69840 FreeSysMem;
    unsigned int values[12];
} SR_82B69840;

SR_82B69840 *fn_82B69840(void *context, AllocFn_82B69840 AllocateSysMem, FreeFn_82B69840 FreeSysMem,
                         QueryFn_82B69840 QueryRegistry)
{
    SR_82B69840 *pSr;
    unsigned int i;
    unsigned int enable;

    SR_ASSERT(AllocateSysMem, 0x69);
    SR_ASSERT(FreeSysMem, 0x6a);
    SR_ASSERT(QueryRegistry, 0x6b);
    pSr = (SR_82B69840 *)AllocateSysMem(context, sizeof(SR_82B69840));
    if (pSr == 0) {
        SR_ASSERT(pSr, 0x71);
    } else {
        pSr->context = context;
        pSr->FreeSysMem = FreeSysMem;
        for (i = 0; i < 12; i++) {
            pSr->values[i] = lbl_83161020[i].defaultValue;
            QueryRegistry(context, lbl_83161020[i].name, &pSr->values[i]);
        }
        enable = 0;
        QueryRegistry(context, "SSMImmediatePacketFlagsEnable", &enable);
        if (enable == 0) {
            pSr->values[0] = 0;
        }
    }
    return pSr;
}

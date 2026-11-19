extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SSM_ASSERT(e, line)                                                                                            \
    if (!(e))                                                                                                          \
    fn_82AB15D0(                                                                                                       \
        0, "Assertion failed: %s (%s:%u)", #e,                                                                         \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmcallbacks.cpp", \
        line)

#define E_SSM_OK 0

typedef void *PSSM_OBJINFO;

typedef struct ShaderDesc_82AB46B0 {
    char pad0[0x10];
    void *a; /* 0x10 */
    void *b; /* 0x14 */
    void *c; /* 0x18 */
} ShaderDesc_82AB46B0;

extern void *fn_82AB4658(void *hASObjHandle);
extern void *fn_823AA458(PSSM_OBJINFO info);
extern void *fn_823AAD80(void *device);
extern void *fn_82CE4720(void *device);
extern void *fn_823AB470(void *device);
extern void *fn_823AB478(void *device);
extern void *fn_823AB480(void *device);
extern void *fn_82AB8588(void *device);
extern void *fn_8289DE38(void *device);
extern ShaderDesc_82AB46B0 *fn_82BA02A8(void *device);
extern unsigned int fn_82B69A00(void *state, int flag);
extern void *fn_82AB9898(void *manager, void *owner);
extern void *fn_82AB63F8(void *list);
extern void *fn_82AB66F8(void *list, void *item);
extern void *fn_82AB67A8(void *item);
extern unsigned int fn_82AB7718(void *entry, void *hASObjHandle);
extern int fn_82B697C0(void *tracker, void *hASObjHandle);
extern void *fn_82AB69F0(void *a, void *b, void *c, void *state, void *d, void *e, void *f, int g);
extern void fn_82AB6F58(void *pCS, void *owner);
extern int fn_82ABA320(void *cache, void *owner, void *hASObjHandle, void *pCS);
extern void fn_82AB6BC8(void *pCS);
extern int fn_82AB97B8(void *manager, void *owner, void *pCS);

#define GetDevice fn_823AA458

int fn_82AB46B0(void *owner, void *hASObjHandle)
{
    void *hSSMObject;
    void *manager;
    void *cache;
    void *tracker;
    void *d;
    void *e;
    void *f;
    void *state;
    ShaderDesc_82AB46B0 *desc;
    void *list;
    void *item;
    void *pCS;
    int hRet;
    void *descC;

    hSSMObject = fn_82AB4658(hASObjHandle);
    if (hSSMObject == 0) {
        return 0x16;
    }
    manager = fn_823AAD80(GetDevice((PSSM_OBJINFO)hSSMObject));
    cache = fn_82CE4720(GetDevice((PSSM_OBJINFO)hSSMObject));
    tracker = fn_823AB470(GetDevice((PSSM_OBJINFO)hSSMObject));
    d = fn_823AB478(GetDevice((PSSM_OBJINFO)hSSMObject));
    e = fn_823AB480(GetDevice((PSSM_OBJINFO)hSSMObject));
    f = fn_82AB8588(GetDevice((PSSM_OBJINFO)hSSMObject));
    state = fn_8289DE38(GetDevice((PSSM_OBJINFO)hSSMObject));
    desc = fn_82BA02A8(GetDevice((PSSM_OBJINFO)hSSMObject));
    if (fn_82B69A00(state, 9) == 0) {
        return 0;
    }
    if (fn_82B69A00(state, 1) != 0) {
        return 0;
    }
    list = fn_82AB9898(manager, owner);
    for (item = fn_82AB63F8(list); item != 0; item = fn_82AB66F8(list, item)) {
        if (fn_82AB7718(fn_82AB67A8(item), hASObjHandle) != 0) {
            return 0;
        }
    }
    hRet = fn_82B697C0(tracker, hASObjHandle);
    SSM_ASSERT(hRet == E_SSM_OK, 0x208);
    descC = desc->c;
    pCS = fn_82AB69F0(desc->a, desc->b, descC, state, d, e, f, 1);
    if (pCS == 0) {
        SSM_ASSERT(pCS, 0x213);
        return 0x10;
    }
    fn_82AB6F58(pCS, owner);
    hRet = fn_82ABA320(cache, owner, hASObjHandle, pCS);
    if (hRet != E_SSM_OK) {
        fn_82AB6BC8(pCS);
        return hRet;
    }
    hRet = fn_82AB97B8(manager, owner, pCS);
    SSM_ASSERT(hRet == E_SSM_OK, 0x244);
    return hRet;
}

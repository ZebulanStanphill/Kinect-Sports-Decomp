extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SSM_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmobject.cpp", line)

#define E_SSM_OK 0

typedef struct SSMObject_82AB9200 {
    int pad[8];
    void *hSSMDevice;
    void *list;
    unsigned int CurrentASKey;
} SSMObject_82AB9200;

extern void *fn_82AB50D0(void *list, unsigned int key);
extern int fn_82AB4970(void *as);

void fn_82AB9200(SSMObject_82AB9200 *pSSMObj)
{
    unsigned int key;
    void *as;
    int hRet;

    for (key = 0; key <= pSSMObj->CurrentASKey + 1; key++) {
        as = fn_82AB50D0(pSSMObj->list, key);
        if (as != 0) {
            SSM_ASSERT(key != 0 && key <= pSSMObj->CurrentASKey, 0x154);
            hRet = fn_82AB4970(as);
            SSM_ASSERT(hRet == E_SSM_OK, 0x159);
        }
    }
}

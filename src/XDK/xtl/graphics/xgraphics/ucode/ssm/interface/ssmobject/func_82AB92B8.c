extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SSM_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmobject.cpp", line)

#define E_SSM_OK 0

typedef struct SSMObject_82AB92B8 SSMObject_82AB92B8;
typedef struct Owner_82AB92B8 {
    int pad[4];
    void *ctx;
    int pad14;
    int (*release)(void *ctx, SSMObject_82AB92B8 *obj);
} Owner_82AB92B8;
struct SSMObject_82AB92B8 {
    int pad[8];
    void *owner;
    void *res;
};
extern void fn_82AB9200(SSMObject_82AB92B8 *obj);
extern void fn_82AB4E50(void *res);
extern void fn_82AB85C8(void *owner, SSMObject_82AB92B8 *obj);
extern Owner_82AB92B8 *fn_82BA02A8(void *owner);

int fn_82AB92B8(SSMObject_82AB92B8 *obj)
{
    Owner_82AB92B8 *o;
    int eRet;

    if (obj == 0) {
        return 0x11;
    }
    fn_82AB9200(obj);
    fn_82AB4E50(obj->res);
    fn_82AB85C8(obj->owner, obj);
    o = fn_82BA02A8(obj->owner);
    eRet = o->release(o->ctx, obj);
    SSM_ASSERT(eRet == E_SSM_OK, 0xfd);
    return eRet;
}

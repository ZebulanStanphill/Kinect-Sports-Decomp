extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
#define VREGINFO_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\vreginfo.cpp", line)

typedef struct Context_82BC16A8 Context_82BC16A8;

typedef struct VReg_82BC16A8 {
    void *vt;
    char pad4[0x10 - 0x4];
    int key;    /* 0x10: (_type << 16) + _usage */
} VReg_82BC16A8;

extern char lbl_820E34F0[];
extern void fn_82BC0928(VReg_82BC16A8 *o, int usage, int type, Context_82BC16A8 *context);

VReg_82BC16A8 *fn_82BC16A8(VReg_82BC16A8 *o, int _usage, int _type, Context_82BC16A8 *context)
{
    fn_82BC0928(o, _usage, _type, context);
    o->vt = lbl_820E34F0;
    VREGINFO_ASSERT(_type < (1<<15), 0x241);
    VREGINFO_ASSERT(_usage < (1<<16), 0x242);
    o->key = (_type << 16) + _usage;
    return o;
}

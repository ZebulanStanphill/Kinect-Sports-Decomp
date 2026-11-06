typedef struct Obj_82EEAC40 {
    char pad0[0x18];
    char reader[0x38 - 0x18];
    __int64 pos;
    __int64 start;
    char pad48[0xa0 - 0x48];
    char header[4];
} Obj_82EEAC40;

extern __int64 fn_82EE80A8(void *reader);
extern int fn_82EE88B0(Obj_82EEAC40 *o);

int fn_82EEAC40(Obj_82EEAC40 *o, unsigned int count, int (*init)(void *reader, void *header))
{
    int hr;
    unsigned int i;

    if (init == 0) {
        return 0x80070057;
    }
    o->pos = 0;
    o->start = fn_82EE80A8(o->reader);
    hr = init(o->reader, o->header);
    if (hr < 0) {
        return hr;
    }
    for (i = 0; i < count; i++) {
        hr = fn_82EE88B0(o);
        if (hr < 0) {
            return hr;
        }
    }
    return hr;
}

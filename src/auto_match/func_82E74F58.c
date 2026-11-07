typedef union LargeInt_82E74F58 {
    struct {
        unsigned int HighPart;
        unsigned int LowPart;
    } u;
    __int64 QuadPart;
} LargeInt_82E74F58;

typedef struct Vtbl_82E74F58 {
    void *slots[35];
    int (*GetPos)(void *self, LargeInt_82E74F58 *pos);
} Vtbl_82E74F58;

typedef struct Obj_82E74F58 {
    Vtbl_82E74F58 *vt;
} Obj_82E74F58;

int fn_82E74F58(void *param_1, Obj_82E74F58 *obj, __int64 offset, LargeInt_82E74F58 *out)
{
    int hr;
    LargeInt_82E74F58 pos;
    __int64 sum;

    if (obj == 0 || out == 0) {
        return 0x80004003;
    }
    out->QuadPart = 0;
    pos.QuadPart = 0;
    hr = obj->vt->GetPos(obj, &pos);
    if (hr < 0) {
        return hr;
    }
    sum = pos.QuadPart + offset;
    if (sum < 0) {
        return 0x80070057;
    }
    out->QuadPart = sum;
    return 0;
}

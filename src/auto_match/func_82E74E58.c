typedef struct {
    unsigned char pad0[0x5b0];
    unsigned __int64 minTime;
} Source_82E74E58;

typedef struct Clock_82E74E58 Clock_82E74E58;
typedef struct {
    void *slot0;
    void *slot4;
    void *slot8;
    int (*convert)(Clock_82E74E58 *self, void *arg);
} ClockVtbl_82E74E58;

struct Clock_82E74E58 {
    ClockVtbl_82E74E58 *vt;
    int unk4;
    unsigned __int64 start;
    Source_82E74E58 *source;
    unsigned char pad14[0x1c - 0x14];
    unsigned int offset;
    unsigned char pad20[0x38 - 0x20];
    unsigned __int64 lag;
    unsigned char pad40[0x5c - 0x40];
    void *timeline;
};

extern int fn_82EEAE00(void *timeline, int value, unsigned __int64 time, unsigned __int64 minTime, unsigned __int64 *out);

int fn_82E74E58(Clock_82E74E58 *self, unsigned __int64 time, void *arg, unsigned __int64 *out)
{
    int hr;
    unsigned __int64 start;
    unsigned __int64 minTime;
    unsigned __int64 result;
    if (out == 0)
        return 0x80004003;
    start = self->start;
    hr = 0;
    if (time - start * 10000 >= self->lag * 10000)
        self->lag = time / 10000 - start;
    minTime = self->source->minTime;
    if (time < minTime && start > 0)
        return 0xc00d4652;
    if (self->timeline != 0) {
        result = 0;
        hr = fn_82EEAE00(self->timeline, self->vt->convert(self, arg), time, minTime, &result);
        if (hr < 0)
            return hr;
        *out = result;
    } else {
        result = time - self->offset * 10000;
        if (result >= minTime)
            *out = result;
        else
            *out = minTime;
    }
    return hr;
}

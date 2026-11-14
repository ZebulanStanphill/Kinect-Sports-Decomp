extern const float lbl_82014C48;

typedef struct Entry_82766A48 {
    int pad0[2];
    unsigned short ticks;
    unsigned short padA;
} Entry_82766A48;

typedef struct Track_82766A48 Track_82766A48;
typedef struct TrackVtbl_82766A48 {
    void *slots[8];
    float (*getDefaultTime)(Track_82766A48 *self);
} TrackVtbl_82766A48;

struct Track_82766A48 {
    TrackVtbl_82766A48 *vt;
    int pad4[11];
    Entry_82766A48 *entries;
    unsigned int count;
};

float fn_82766A48(Track_82766A48 *self, int index)
{
    float time;
    if (index == -1)
        return lbl_82014C48;
    if (index < self->count) {
        time = self->entries[index].ticks * 0.05f;
        if (time != 0.0f)
            return time;
    }
    return self->vt->getDefaultTime(self);
}

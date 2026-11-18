#include <string.h>

typedef struct Info_82E73170 {
    unsigned short w[8];
} Info_82E73170;

typedef struct Source_82E73170 Source_82E73170;

typedef struct SourceVt_82E73170 {
    void *slots[10];
    int (*getInfo)(Source_82E73170 *self, Info_82E73170 *info);
} SourceVt_82E73170;

struct Source_82E73170 {
    SourceVt_82E73170 *vt;
};

typedef struct Sample_82E73170 Sample_82E73170;

typedef struct SampleVt_82E73170 {
    void *slot0;
    void (*attach)(Sample_82E73170 *self, Source_82E73170 *source);
} SampleVt_82E73170;

struct Sample_82E73170 {
    SampleVt_82E73170 *vt;
    int pad[5];
    unsigned __int64 time;
};

typedef struct Obj_82E73170 {
    char pad[0x1d8];
    Source_82E73170 *source;
    int pad2;
    unsigned __int64 minTime;
} Obj_82E73170;

void fn_82E73170(Obj_82E73170 *self, Sample_82E73170 *sample)
{
    unsigned __int64 time = sample->time;
    Info_82E73170 info;

    memset(&info, 0, sizeof(info));
    if (self->source->vt->getInfo(self->source, &info) >= 0) {
        if (info.w[5] == 0) {
            self->minTime = time;
        } else if (time < self->minTime) {
            self->minTime = time;
        }
        sample->vt->attach(sample, self->source);
    }
}

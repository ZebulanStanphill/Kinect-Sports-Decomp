typedef struct Format_82C03F68 Format_82C03F68;
typedef struct Stage_82C03F68 Stage_82C03F68;

typedef struct StageVtbl_82C03F68 {
    void *slots00[0x11];
    int (*SetThirdFormat)(Stage_82C03F68 *stage, Format_82C03F68 *format); /* 0x44 */
    int (*SetAudioFormat)(Stage_82C03F68 *stage, Format_82C03F68 *format); /* 0x48 */
    int (*SetVideoFormat)(Stage_82C03F68 *stage, Format_82C03F68 *format); /* 0x4c */
} StageVtbl_82C03F68;

struct Stage_82C03F68 {
    StageVtbl_82C03F68 *vt;
};

typedef struct Pool_82C03F68 {
    char reserved00[0x48];
} Pool_82C03F68;

typedef struct Pipeline_82C03F68 {
    char reserved00[0x38];
    Stage_82C03F68 *videoStage; /* 0x38 */
    Stage_82C03F68 *audioStage; /* 0x3c */
    Stage_82C03F68 *thirdStage; /* 0x40 */
    Pool_82C03F68 videoPool;    /* 0x44 */
    Pool_82C03F68 audioPool;    /* 0x8c */
    char reservedd4[0x78];
    unsigned int bitRate; /* 0x14c */
    float frameRate;      /* 0x150 */
} Pipeline_82C03F68;

extern float fn_82C00470(Format_82C03F68 *format);
extern unsigned int fn_828D45F8(Format_82C03F68 *format);
extern unsigned int fn_823AAD90(Format_82C03F68 *format);
extern unsigned int fn_823AA370(Format_82C03F68 *format);
extern int fn_82C0BFC8(Pool_82C03F68 *pool, int count, unsigned int size, int flags);

int fn_82C03F68(Pipeline_82C03F68 *self, Format_82C03F68 *video, Format_82C03F68 *audio,
                Format_82C03F68 *third)
{
    float frameRate = 30.0f;
    int hr = 0;

    if (video != 0)
        hr = self->videoStage->vt->SetVideoFormat(self->videoStage, video);
    if (audio != 0 && hr >= 0) {
        frameRate = fn_82C00470(audio);
        hr = self->audioStage->vt->SetAudioFormat(self->audioStage, audio);
    }
    if (third != 0 && hr >= 0)
        hr = self->thirdStage->vt->SetThirdFormat(self->thirdStage, third);
    if (video != 0 && hr >= 0) {
        unsigned int channels = fn_828D45F8(video);
        unsigned int bits = fn_823AAD90(video) == 0x18 ? 0x20 : fn_823AAD90(video);
        unsigned int bytes = bits >> 3;
        unsigned int rate = fn_823AA370(video);
        unsigned int size = ((unsigned int)((float)(rate * bytes) / frameRate) + bytes - 1) & ~(bytes - 1);

        self->bitRate = size * 8000 / (rate * bits);
        hr = fn_82C0BFC8(&self->videoPool, 5, size * channels + 8, 1);
    }
    if (audio != 0) {
        unsigned int size;

        if (hr < 0)
            return hr;
        if ((fn_828D45F8(audio) & 1) != 0 || (fn_823AA370(audio) & 1) != 0)
            return 0x80004001;
        size = fn_828D45F8(audio) * fn_823AA370(audio) * 12 / 8;
        hr = fn_82C0BFC8(&self->audioPool, 5, size + 8, 1);
    }
    if (hr >= 0)
        self->frameRate = frameRate;
    return hr;
}

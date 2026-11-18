struct Sample_82E74C50 {
    char pad0[0x10];            /* 0x00 */
    unsigned __int64 duration;  /* 0x10 */
    unsigned __int64 time;      /* 0x18 */
    unsigned short streamId;    /* 0x20 */
    short pad22;                /* 0x22 */
    int pad24[2];               /* 0x24 */
    unsigned int startPosition; /* 0x2c */
};

extern "C" long fn_82EEAF58(void *clock, unsigned int *rate);

class Stream_82E74C50
{
  public:
    long AdjustSampleTime(unsigned int position, Sample_82E74C50 *sample);

    char pad0[0x14];         /* 0x00 */
    unsigned short streamId; /* 0x14 */
    short pad16;             /* 0x16 */
    unsigned int sampleRate; /* 0x18 */
    char pad1C[0x40];        /* 0x1c */
    void *clock;             /* 0x5c */
};

long Stream_82E74C50::AdjustSampleTime(unsigned int position, Sample_82E74C50 *sample)
{
    unsigned int delta;
    unsigned int rate;
    unsigned __int64 time;
    unsigned __int64 limit;

    if (sample == 0) {
        return 0x80004003;
    }
    if (sample->streamId != streamId) {
        return 0x80070057;
    }
    if (position < sample->startPosition) {
        return 0x80070057;
    }
    delta = position - sample->startPosition;
    time = sample->time;
    limit = sample->duration * 10000;
    if (clock != 0) {
        rate = 0;
        if (fn_82EEAF58(clock, &rate) < 0) {
            rate = sampleRate;
        }
        time += (unsigned __int64)delta * 80000000 / rate;
    }
    if (time <= limit) {
        sample->time = time;
    } else {
        sample->time = limit;
    }
    return 0;
}

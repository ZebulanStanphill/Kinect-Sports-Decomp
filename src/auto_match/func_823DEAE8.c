typedef struct SampleLog_823DEAE8 {
    char pad0[0x1330];
    float limit;   /* 0x1330 */
    float elapsed; /* 0x1334 */
    char pad1338[0x1684 - 0x1338];
    int count;         /* 0x1684 */
    float distance[4]; /* 0x1688 */
    float time[4];     /* 0x1698 */
} SampleLog_823DEAE8;

typedef struct Recorder_823DEAE8 {
    SampleLog_823DEAE8 *log;
    char pad4[0x90];
    int distance;
    float time;
} Recorder_823DEAE8;

extern unsigned char fn_823D4E88(Recorder_823DEAE8 *recorder, float delta);
extern void fn_823CC298(void *owner, unsigned int event);

typedef struct Player_823DEAE8 {
    char pad0[0x1d0];
    int state;
} Player_823DEAE8;

typedef struct Session_823DEAE8 {
    char pad0[0x4b8];
    void *owner;
    char pad4bc[0xe00 - 0x4bc];
    unsigned char started;
    char pade01[0xb];
    int state;
    char pade10[4];
    Player_823DEAE8 *players[3]; /* 0xe14 */
    Recorder_823DEAE8 *recorder; /* 0xe20 */
} Session_823DEAE8;

typedef struct Context_823DEAE8 {
    char pad0[8];
    Session_823DEAE8 *session;
} Context_823DEAE8;

void fn_823DEAE8(Context_823DEAE8 *self, float delta)
{
    Session_823DEAE8 *session = self->session;

    if (session->started) {
        if (fn_823D4E88(session->recorder, delta)) {
            Recorder_823DEAE8 *recorder = session->recorder;
            SampleLog_823DEAE8 *log = recorder->log;
            float time;

            log->limit = 5.3f;
            log->elapsed = 0.0f;
            log = recorder->log;
            time = recorder->time;
            log->distance[log->count] = (float)recorder->distance;
            log->time[log->count] = time;
            ++log->count;
            session->state = 2;
        }
    } else {
        int i;
        for (i = 0; i < 3; ++i) {
            session->players[i]->state = 0;
        }
        session->started = 1;
        fn_823CC298(session->owner, 7);
    }
}

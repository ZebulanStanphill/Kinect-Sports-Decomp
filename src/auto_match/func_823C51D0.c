typedef struct State_823C51D0 {
    char pad[0x1680];
    int pending;        // 0x1680
    int status;         // 0x1684
    float scores[4];    // 0x1688
    float durations[4]; // 0x1698
} State_823C51D0;

extern int lbl_831D18A8[];
extern int lbl_83276554;
extern void fn_82264400(int matchCounter, int score0, float duration0, int score1, float duration1,
                        int score2, float duration2, int score3, float duration3);

void fn_823C51D0(State_823C51D0 *state)
{
    if (lbl_831D18A8[0x70 / 4] && state->pending) {
        float *score = state->scores;
        float *duration = state->durations;
        float *it;

        fn_82264400(lbl_83276554, (int)score[0], duration[0], (int)score[1], duration[1], (int)score[2],
                    duration[2], (int)score[3], duration[3]);

        state->status = 0;
        {
            float reset = -1.0f;
            for (it = score; it != duration; ++it)
                *it = reset;
            for (it = duration; it != (float *)(&state->durations + 1); ++it)
                *it = reset;
            state->pending = 0;
        }
    }
}

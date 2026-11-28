typedef struct State_83027A10 {
    int value;
    float weights[4];
    int count;
    float levels[4];
    short first;
    short second;
    unsigned short channels;
    unsigned short options;
} State_83027A10;

void fn_83027A10(State_83027A10 *state, unsigned short mode, unsigned short channels)
{
    unsigned char i = 0;
    unsigned int count;
    unsigned int mask;
    unsigned short options;

    state->value = 0;
    state->count = 0;
    state->first = 0;
    state->weights[0] = 0.0f;
    state->second = 0;
    state->weights[1] = 0.0f;
    state->weights[2] = 0.0f;
    state->weights[3] = 0.0f;
    do {
        state->levels[i++] = 0.0f;
    } while (i < 4);
    options = (state->options & 0xe7ff) | ((mode & 3) << 11);
    mask = (unsigned short)channels & 0xfff7;
    state->channels = mask;
    state->options = options;
    count = 0;
    while (mask) {
        ++count;
        mask &= mask - 1;
    }
    options = (options & 0x1fff) | (count << 13);
    state->options = (options & ~0x400u) | 0x400;
}

typedef struct Input_82954678 {
    int unused;
    int source;
    int reserved[2];
    unsigned int lane;
} Input_82954678;

typedef struct Source_82954678 {
    int unused;
    unsigned int flags;
} Source_82954678;

typedef struct State_82954678 {
    char reserved[0x10];
    Source_82954678 **sources;
    Input_82954678 **inputs;
} State_82954678;

int fn_82954678(State_82954678 *state, const int *indices, unsigned int count, unsigned int mask,
                unsigned int *result)
{
    int firstIndex = *indices;
    Input_82954678 *first = state->inputs[firstIndex];
    unsigned int channelCount = 0;
    unsigned int i;
    unsigned int shift;
    unsigned int swizzle;
    int channels[4];
    int lanes[4];

    if (state->sources[first->source]->flags & 0x80) {
        *result = 0xe40000;
        return 0;
    }
    if (mask & 0x10000) {
        channels[channelCount++] = 0;
    }
    if (mask & 0x20000) {
        channels[channelCount++] = 1;
    }
    if (mask & 0x40000) {
        channels[channelCount++] = 2;
    }
    if (mask & 0x80000) {
        channels[channelCount++] = 3;
    }
    if (count > channelCount) {
        count = channelCount;
    }
    for (i = 0; i < count; ++i) {
        if (state->inputs[firstIndex]->lane != state->inputs[indices[i]]->lane) {
            break;
        }
    }
    if (i < count) {
        for (i = 0; i < 4; ++i) {
            lanes[i] = i;
        }
    } else {
        for (i = 0; i < 4; ++i) {
            lanes[i] = first->lane;
        }
    }
    for (i = 0; i < count; ++i) {
        lanes[channels[i]] = state->inputs[indices[i]]->lane;
    }
    swizzle = 0;
    for (i = 0, shift = 16; i < 4; ++i, shift += 2) {
        swizzle |= (unsigned int)lanes[i] << shift;
    }
    *result = swizzle;
    return 0;
}

extern "C" {
void RtlEnterCriticalSection(void *);
void RtlLeaveCriticalSection(void *);
}

struct Buffer {
    int begin, end, current, count;
};
struct State {
    int pad;
    Buffer buffer;
    int pad2;
    int *pointer;
    int gap;
    unsigned flags;
    char rest[0x100];
};

extern "C" void fn_82CF7648(State *state, int begin, int size)
{
    RtlEnterCriticalSection((char *)state + 0x124);
    state->pointer = (int *)((char *)state + 0x24);
    state->flags = 0x80000020;
    Buffer *buffer = &state->buffer;
    buffer->begin = begin;
    buffer->current = begin;
    buffer->end = begin + size;
    buffer->count = 0;
    RtlLeaveCriticalSection((char *)state + 0x124);
}

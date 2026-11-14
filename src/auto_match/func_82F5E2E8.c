typedef struct {
    int state;
    int value;
    int result;
    int count;
} State_82F5E2E8;

void fn_82F5E2E8(State_82F5E2E8 *s, unsigned char start, int state)
{
    int value;
    if (start) {
        value = 1;
        s->state = state;
        s->value = 1;
        s->count = 2;
    } else if (--s->count < 0) {
        s->value = 0;
        value = 0;
        s->state = 0xe;
    } else {
        value = s->value;
    }
    s->result = value;
}

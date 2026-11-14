typedef struct State_82C127B8 {
    unsigned __int64 pos;       /* 0x00 */
    int pad8;
    int canSeekForward;         /* 0x0c */
    int pad10[4];
    void *canSeekBack;          /* 0x20 */
    unsigned int maxBack;       /* 0x24 */
    int pad28;
    unsigned int maxForward;    /* 0x2c */
} State_82C127B8;

typedef struct Obj_82C127B8 {
    char pad0[0x14];
    State_82C127B8 *state;      /* 0x14 */
} Obj_82C127B8;

int fn_82C127B8(Obj_82C127B8 *self, unsigned __int64 pos)
{
    State_82C127B8 *s = self->state;
    int hr = 0;

    if (pos > s->pos) {
        if (s->canSeekForward == 0) {
            hr = 0x80500003;
            goto done;
        }
        if (pos - s->pos > s->maxForward) {
            hr = 0x80500003;
            goto done;
        }
    }
    if (pos < s->pos) {
        if (s->canSeekBack == 0) {
            hr = 0x80500003;
            goto done;
        }
        if (s->pos - pos > s->maxBack) {
            hr = 0x80500003;
            goto done;
        }
    }
    s->pos = pos;
done:
    return hr;
}

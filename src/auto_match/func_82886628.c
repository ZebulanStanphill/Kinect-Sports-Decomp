typedef struct { char pad[0x74]; int head; int tail; } Q_82886628;
typedef struct { char pad[0x38]; Q_82886628 *q; } Obj_82886628;

void fn_82886628(Obj_82886628 *o, int value)
{
    Q_82886628 *q;
    o->q->tail = o->q->tail + 1;
    if (o->q->tail >= 0x14) {
        o->q->tail = 0;
    }
    q = o->q;
    if (o->q->tail == o->q->head || o->q->head < 0) {
        o->q->head = o->q->head + 1;
        if (o->q->head >= 0x14) {
            o->q->head = 0;
        }
    }
    *(int *)((o->q->tail + 9) * 4 + (int)o->q) = value;
}

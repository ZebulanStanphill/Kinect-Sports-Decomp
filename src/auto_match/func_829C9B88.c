typedef struct { int header[4]; } KEVENT_829C9B88;
typedef struct {
    KEVENT_829C9B88 event;
    int result;   /* 0x10 */
} Signal_829C9B88;
typedef struct {
    char pad0[0x10];
    Signal_829C9B88 *signal;
} Obj_829C9B88;

extern int KeSetEvent(void *event, int increment, unsigned char wait);

int fn_829C9B88(Obj_829C9B88 *o, int result)
{
    Signal_829C9B88 *s = o->signal;
    s->result = result;
    return KeSetEvent(s, 1, 0);
}

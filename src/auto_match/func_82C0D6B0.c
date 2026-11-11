extern long KeWaitForSingleObject(void *object, int reason, char mode, unsigned char alertable, void *timeout);

typedef struct {
    char pad[0x54];
    char event[0x10];
} Obj_82C0D6B0;

long fn_82C0D6B0(Obj_82C0D6B0 *o)
{
    return KeWaitForSingleObject(o->event, 3, 1, 0, 0);
}

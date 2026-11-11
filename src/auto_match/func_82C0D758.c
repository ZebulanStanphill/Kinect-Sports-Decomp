extern long KeWaitForSingleObject(void *object, int reason, char mode, unsigned char alertable, void *timeout);

typedef struct {
    char pad[0xc4];
    char event[0x10];
} Obj_82C0D758;

long fn_82C0D758(Obj_82C0D758 *o)
{
    return KeWaitForSingleObject(o->event, 3, 1, 0, 0);
}

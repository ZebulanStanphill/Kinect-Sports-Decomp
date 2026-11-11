extern long KeWaitForSingleObject(void *object, int reason, char mode, unsigned char alertable, void *timeout);

typedef struct {
    char pad[0xa4];
    char event[0x10];
} Obj_82C0D728;

long fn_82C0D728(Obj_82C0D728 *o)
{
    return KeWaitForSingleObject(o->event, 3, 1, 0, 0);
}

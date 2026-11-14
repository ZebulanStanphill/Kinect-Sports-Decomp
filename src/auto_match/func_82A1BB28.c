typedef struct Object_82A1BB28 {
    int unk0;
    int state;
} Object_82A1BB28;

extern int fn_82A2B5E8(Object_82A1BB28 *self, void *buffer, unsigned int *size, void *source, unsigned int max);

int fn_82A1BB28(Object_82A1BB28 *self, void *buffer, unsigned int *size, void *source, unsigned int max)
{
    int hr = 0x80004005;
    if (self->state == 1) {
        hr = fn_82A2B5E8(self, buffer, size, source, max);
    }
    return hr;
}

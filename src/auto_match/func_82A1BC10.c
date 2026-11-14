typedef struct Object_82A1BC10 {
    int unk0;
    int state;
} Object_82A1BC10;

extern int fn_82A2B6B0(Object_82A1BC10 *self, void *buffer, unsigned int *size, void *source, unsigned int max);

int fn_82A1BC10(Object_82A1BC10 *self, void *buffer, unsigned int *size, void *source, unsigned int max)
{
    int hr = 0x80004005;
    if (self->state == 1) {
        hr = fn_82A2B6B0(self, buffer, size, source, max);
    }
    return hr;
}

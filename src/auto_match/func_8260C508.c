typedef struct Loader_8260C508 {
    char pad0[0x10];
    unsigned int size; /* 0x10 */
    char pad14[0x34 - 0x14];
    int done; /* 0x34 */
    char pad38[0x40 - 0x38];
    void *manager; /* 0x40 */
    char pad44[0x48 - 0x44];
    int header[2]; /* 0x48 */
    int data[2];   /* 0x50 */
    int footer[2]; /* 0x58 */
    int request;   /* 0x60 */
    char pad64[0x1a0 - 0x64];
    char lock[0x1c]; /* 0x1a0 */
} Loader_8260C508;

extern void RtlEnterCriticalSection(void *section);
extern int fn_827D9EA8(int *request);
extern int fn_827DB6D0(void *manager, int *request, unsigned int size, int a, int b, int *out);
extern int fn_827DBA00(void *manager, int *request, int id, int a, int b, int c, int d, int e,
                       unsigned int size, int f, int g, int *out);
extern int fn_827DBD80(void *manager, int *request, unsigned int size, int a, int b, int *out);

int fn_8260C508(Loader_8260C508 *self)
{
    int hr;

    self->done = 0;
    RtlEnterCriticalSection(self->lock);
    hr = fn_827DB6D0(self->manager, &self->request, self->size, 0, 0, self->header);
    if (hr != 0) {
        return hr;
    }
    hr = fn_827DBA00(self->manager, &self->request, fn_827D9EA8(&self->request), 0, 0, 0, 0, 0, self->size, 0,
                     0, self->data);
    if (hr != 0) {
        return hr;
    }
    hr = fn_827DBD80(self->manager, &self->request, self->size, 0, 0, self->footer);
    if (hr != 0) {
        return hr;
    }
    return 0x3e5;
}

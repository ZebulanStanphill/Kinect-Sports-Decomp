extern void *memset(void *, int, unsigned int);
extern unsigned char fn_828ED1A0(void *);
extern unsigned int fn_82CE1D08(unsigned int, unsigned int, void *, void *);

typedef struct Object_828EDD40 {
    char padding[8];
    unsigned int state; // 0x08
    int paddingc;
    int enabled; // 0x10
    char padding14[0x44];
    unsigned int handle; // 0x58
    char padding5c[0x38];
    char request[0x3c]; // 0x94
    char paddingd0[0x3c];
    unsigned int overlap[7]; // 0x10c
    unsigned char active;    // 0x128
    unsigned char pending;   // 0x129
    char padding12a[0xba];
    unsigned int argument; // 0x1e4
} Object_828EDD40;

int fn_828EDD40(Object_828EDD40 *self)
{
    unsigned int result;
    int i;
    if (fn_828ED1A0(self)) {
        return 0;
    }
    if (!self->enabled) {
        return 0;
    }
    {
        unsigned int *overlap = self->overlap;
        char *request;
        for (i = 0; i < 7; i++) {
            overlap[i] = 0;
        }
        request = self->request;
        memset(request, 0, sizeof(self->request));
        result = fn_82CE1D08(self->handle, self->argument, request, overlap);
    }
    self->pending = 0;
    self->state = 2;
    if (result == 0 || result == 0x3e5) {
        self->active = 1;
        return 1;
    }
    self->active = 0;
    return 0;
}

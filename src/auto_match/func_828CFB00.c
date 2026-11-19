extern int XNetQosServiceLookup(unsigned int, unsigned int, void **);
extern int fn_82CE0750(unsigned int, void *, void *, void *, int, int, int, unsigned int, int, int, int,
                       void **);
extern void XNetQosRelease(void *);

typedef struct Object_828CFB00 {
    char padding[8];
    unsigned char service; // 0x08
    char padding9[0x3f];
    unsigned int address; // 0x48
    unsigned int key;     // 0x4c
    char session[0x2c];   // 0x50
    int state;            // 0x7c
    int padding80;
    void *result;       // 0x84
    unsigned int flags; // 0x88
} Object_828CFB00;

void fn_828CFB00(Object_828CFB00 *self)
{
    if (self->service) {
        if (XNetQosServiceLookup(0, 0, &self->result)) {
            if (self->result) {
                XNetQosRelease(self->result);
                self->result = 0;
            }
            self->state = 5;
            return;
        }
    } else {
        if (fn_82CE0750(1, &self->address, &self->key, self->session, 0, 0, 0, self->flags, 0, 0, 0,
                        &self->result)) {
            if (self->result) {
                XNetQosRelease(self->result);
                self->result = 0;
            }
            self->state = 5;
            return;
        }
    }
    self->state = 2;
}

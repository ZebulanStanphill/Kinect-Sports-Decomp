typedef struct String_830B4828 {
    union {
        char buffer[16];
        char *pointer;
    } text; /* 0x00 */

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
    char pad18[0x4];
} String_830B4828;

struct Enumerator_830B4828;

typedef struct EnumeratorVtbl_830B4828 {
    void *slot00[5];
    long (*IsDone)(struct Enumerator_830B4828 *self, unsigned int *done);                    /* 0x14 */
    long (*Read)(struct Enumerator_830B4828 *self, const char **text, unsigned int *length); /* 0x18 */
} EnumeratorVtbl_830B4828;

typedef struct Enumerator_830B4828 {
    EnumeratorVtbl_830B4828 *vt; /* 0x00 */
    unsigned int state;          /* 0x04 */
    char pad08[0x90];
    String_830B4828 first;  /* 0x98 */
    String_830B4828 second; /* 0xb4 */
    String_830B4828 third;  /* 0xd0 */
} Enumerator_830B4828;

extern long fn_830B4380(Enumerator_830B4828 *self);

static __forceinline const char *CStr_830B4828(String_830B4828 *s)
{
    return s->capacity < 16 ? s->text.buffer : s->text.pointer;
}

long fn_830B4828(Enumerator_830B4828 *self, const char **text, unsigned int *length)
{
    long hr;
    unsigned int done;

    if (text == 0 || length == 0) {
        return 0x80004003;
    }
    *text = 0;
    hr = 0;
    *length = 0;
    switch (self->state) {
    case 0:
        hr = fn_830B4380(self);
        if (hr < 0) {
            return hr;
        }
        *text = CStr_830B4828(&self->first);
        *length = self->first.size;
        self->state = 1;
        break;
    case 1:
        *text = CStr_830B4828(&self->second);
        *length = self->second.size;
        self->state = 2;
        break;
    case 2:
        hr = self->vt->Read(self, text, length);
        if (hr < 0) {
            return hr;
        }
        done = 0;
        hr = self->vt->IsDone(self, &done);
        if (hr < 0) {
            return hr;
        }
        if (done != 0) {
            return hr;
        }
        self->state = 3;
        break;
    case 3:
        *text = CStr_830B4828(&self->third);
        *length = self->third.size;
        self->state = 4;
        break;
    default:
        return 0x80040001;
    }
    return hr;
}

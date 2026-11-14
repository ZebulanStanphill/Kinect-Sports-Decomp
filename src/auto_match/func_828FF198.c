typedef struct Buffer_828FF198 Buffer_828FF198;
typedef struct BufferVtbl_828FF198 {
    void *f0[3];
    void *(*GetBufferPointer)(Buffer_828FF198 *self); /* 0x0c */
    unsigned int (*GetBufferSize)(Buffer_828FF198 *self); /* 0x10 */
} BufferVtbl_828FF198;
struct Buffer_828FF198 {
    BufferVtbl_828FF198 *vt;
};

typedef struct Obj_828FF198 {
    char pad0[0x3c];
    unsigned int flags;   /* 0x3c */
    char pad40[0x5c - 0x40];
    void *data;           /* 0x5c */
    int count;            /* 0x60 */
} Obj_828FF198;

extern void *memcpy(void *dst, const void *src, unsigned int size);
extern int fn_828F9A60(unsigned int size, Buffer_828FF198 **out);
extern int fn_828FCAC0(unsigned int flags, void *data, unsigned int size, Buffer_828FF198 **out,
                       Obj_828FF198 *self, void (*callback)(void), int arg);
extern void fn_828FF190(void);

/* returns the object's words as a buffer: copied straight into a new buffer
   when flag 0x100000 is set, otherwise through fn_828FCAC0 */
int fn_828FF198(Obj_828FF198 *self, Buffer_828FF198 **out, int arg)
{
    int hr;
    Buffer_828FF198 *buf;
    unsigned int size;
    void *data;

    if (self->flags & 0x100000) {
        hr = fn_828F9A60(self->count << 2, &buf);
        if (hr >= 0) {
            size = buf->vt->GetBufferSize(buf);
            data = self->data;
            memcpy(buf->vt->GetBufferPointer(buf), data, size);
            hr = 0;
            *out = buf;
        }
    } else {
        hr = fn_828FCAC0(self->flags, self->data, self->count << 2, out, self, fn_828FF190, arg);
    }
    return hr;
}

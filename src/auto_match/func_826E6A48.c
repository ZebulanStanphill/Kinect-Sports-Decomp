/* 64-bit tell of a stream object: widens the 32-bit position that the vtable slot 4 method
   (fn_826E6A30) returns. */
typedef struct Stream_826E6A48 Stream_826E6A48;

typedef struct StreamVt_826E6A48 {
    void *slots[4];
    int (*tell)(Stream_826E6A48 *self);
} StreamVt_826E6A48;

struct Stream_826E6A48 {
    StreamVt_826E6A48 *vt;
};

__int64 fn_826E6A48(Stream_826E6A48 *self)
{
    return self->vt->tell(self);
}

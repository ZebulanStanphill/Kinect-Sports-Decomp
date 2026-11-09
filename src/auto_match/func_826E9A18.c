/* 64-bit size of a stream object: widens the 32-bit size that the vtable slot 6 method
   (fn_826E6A78) returns. */
typedef struct Stream_826E9A18 Stream_826E9A18;

typedef struct StreamVt_826E9A18 {
    void *slots[6];
    int (*size)(Stream_826E9A18 *self);
} StreamVt_826E9A18;

struct Stream_826E9A18 {
    StreamVt_826E9A18 *vt;
};

__int64 fn_826E9A18(Stream_826E9A18 *self)
{
    return self->vt->size(self);
}

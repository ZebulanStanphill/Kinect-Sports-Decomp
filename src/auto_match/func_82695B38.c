typedef struct Value_82695B38 {
    unsigned char type; /* 0x00 */
    char pad01[3];
    void *object; /* 0x04 */
} Value_82695B38;

extern void fn_826C3448(void **string);
extern void fn_826820F0(void *object);

void fn_82695B38(Value_82695B38 *self)
{
    if (self->type == 8) {
        fn_826C3448(&self->object);
    } else if (self->type == 6 && self->object != 0) {
        fn_826820F0(self->object);
    } else if (self->type == 9) {
        fn_826820F0(self->object);
    }
}

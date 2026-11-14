typedef struct Owner_83057DB0 {
    char pad0[8];
    char *data; /* 0x08 */
} Owner_83057DB0;

extern void fn_8305B9A0(void *state, int count, double a, double b);

void fn_83057DB0(Owner_83057DB0 *self, double a, double b)
{
    fn_8305B9A0(self->data + 0xf34, 600, b, a);
}

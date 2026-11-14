typedef struct Owner_8305A680 {
    char pad0[8];
    char *data; /* 0x08 */
} Owner_8305A680;

extern void fn_8305B9A0(void *state, int count, double a, double b);

void fn_8305A680(Owner_8305A680 *self, double a, double b)
{
    fn_8305B9A0(self->data + 0x142c, 600, b, a);
}

typedef struct Elem_828DC720 {
    char data[0x34];
} Elem_828DC720;

typedef struct Self_828DC720 {
    char pad[0x88];
    Elem_828DC720 *begin;   /* 0x88 */
    Elem_828DC720 *end;     /* 0x8c */
} Self_828DC720;

unsigned char fn_828DC720(Self_828DC720 *self)
{
    return (unsigned int)(self->end - self->begin) >= 10;
}

typedef struct Stats_8289D9B8 { char pad[0x1f0]; int count; } Stats_8289D9B8;
typedef struct Object_8289D9B8 { char pad[0x50]; Stats_8289D9B8 *stats; } Object_8289D9B8;
extern void fn_828A06D8(Object_8289D9B8 *self);

void fn_8289D9B8(Object_8289D9B8 *self)
{
    Stats_8289D9B8 *s = self->stats;
    s->count++;
    fn_828A06D8(self);
}

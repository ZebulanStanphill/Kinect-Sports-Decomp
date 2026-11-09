typedef struct Stats_828AED78 { char pad[0x1f4]; int count; } Stats_828AED78;
typedef struct Object_828AED78 { char pad[0x50]; Stats_828AED78 *stats; } Object_828AED78;
extern void fn_828A06D8(Object_828AED78 *self);

void fn_828AED78(Object_828AED78 *self)
{
    Stats_828AED78 *s = self->stats;
    s->count++;
    fn_828A06D8(self);
}

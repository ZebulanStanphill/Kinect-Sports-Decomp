typedef struct Listener_82DC82C8 {
    void *vt;
} Listener_82DC82C8;

typedef struct Object_82DC82C8 {
    void *vt;                   /* 0x00 */
    int refs;                   /* 0x04 */
    Listener_82DC82C8 listener; /* 0x08 */
} Object_82DC82C8;

/* hkpWorld::removeWorldPostSimulationListener */
extern void fn_82D81528(void *world, Listener_82DC82C8 *listener);

void fn_82DC82C8(Object_82DC82C8 *self, void *world)
{
    fn_82D81528(world, self != 0 ? &self->listener : 0);
}

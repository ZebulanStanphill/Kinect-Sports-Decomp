typedef struct { char pad[0x14]; float time; } Event_825C4368;
typedef struct EventNode_825C4368 EventNode_825C4368;
struct EventNode_825C4368 { Event_825C4368 *event; int pad4; EventNode_825C4368 *next; };
typedef struct UpdateNode_825C4368 UpdateNode_825C4368;
struct UpdateNode_825C4368 { void *item; UpdateNode_825C4368 *next; };
typedef struct {
    char pad[0xb90];
    EventNode_825C4368 *events;
    UpdateNode_825C4368 *updates;
} World_825C4368;

extern void fn_825FB360(Event_825C4368 *event, World_825C4368 *world, float t);
extern void fn_82614908(void *item, float t, float dt);

void fn_825C4368(void *self, World_825C4368 *world, float t, float dt)
{
    EventNode_825C4368 *e;
    UpdateNode_825C4368 *u;

    for (e = world->events; e != 0; e = e->next) {
        if (t <= e->event->time) {
            fn_825FB360(e->event, world, t);
        }
    }
    for (u = world->updates; u != 0; u = u->next) {
        fn_82614908(u->item, t, dt);
    }
}

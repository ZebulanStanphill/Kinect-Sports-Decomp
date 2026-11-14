typedef struct Entity_82D9D100 { char pad[0xd0]; signed char quality; } Entity_82D9D100;
typedef struct World_82D9D100 World_82D9D100;
typedef struct Owner_82D9D100 {
    char pad0[0x18];
    World_82D9D100 *world;
    char pad1c[0x2c];
    Entity_82D9D100 **entities;
    int count;
} Owner_82D9D100;

typedef struct Listener_82D9D100 Listener_82D9D100;
typedef struct ListenerVtbl_82D9D100 {
    void *slots[9];
    unsigned char (*onRemoved)(Listener_82D9D100 *self, void *arg);
} ListenerVtbl_82D9D100;
struct Listener_82D9D100 { ListenerVtbl_82D9D100 *vt; };
typedef struct Context_82D9D100 { char pad[0x10]; Listener_82D9D100 *listener; } Context_82D9D100;

extern unsigned char *fn_82D81240(unsigned char *ret, World_82D9D100 *world, Entity_82D9D100 *entity);
extern Context_82D9D100 *fn_82CE5410(void);

/* remove every entity of at least minQuality (stopping when the listener refuses); track the highest quality kept */
void fn_82D9D100(Owner_82D9D100 *self, int minQuality, void *arg, int *maxQuality)
{
    int i;
    for (i = self->count - 1; i >= 0; i--) {
        Entity_82D9D100 *e = self->entities[i];
        int q = e->quality;
        if (q >= minQuality) {
            unsigned char removed;
            Listener_82D9D100 *l;
            fn_82D81240(&removed, self->world, e);
            l = fn_82CE5410()->listener;
            if (!l->vt->onRemoved(l, arg))
                return;
        } else {
            *maxQuality = *maxQuality > q ? *maxQuality : q;
        }
    }
}

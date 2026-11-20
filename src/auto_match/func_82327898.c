typedef struct MapNode_82327898 {
    struct MapNode_82327898 *left;   /* 0x00 */
    struct MapNode_82327898 *parent; /* 0x04 */
    struct MapNode_82327898 *right;  /* 0x08 */
    int key;                         /* 0x0c */
    int value;                       /* 0x10 */
} MapNode_82327898;

typedef struct MapIterator_82327898 {
    MapNode_82327898 *node;
} MapIterator_82327898;

typedef struct Attack_82327898 {
    struct Entity_82327898 *attacker; /* 0x00 */
    struct Entity_82327898 *target;   /* 0x04 */
    int kind;                         /* 0x08 */
    int id;                           /* 0x0c */
    int move;                         /* 0x10 */
    int f14;                          /* 0x14 */
    int f18;                          /* 0x18 */
    float strength;                   /* 0x1c */
} Attack_82327898;

typedef struct Entity_82327898 {
    char pad0[0xbc];
    struct Entity_82327898 *target; /* 0x0bc */
    char padc0[0x118 - 0xc0];
    char *model; /* 0x118 */
    char pad11c[0x2a0 - 0x11c];
    char moves[0x508 - 0x2a0]; /* 0x2a0 */
    char attacks[4];           /* 0x508 */
} Entity_82327898;

typedef struct Node_82327898 {
    struct Node_82327898 *next; /* 0x00 */
    struct Node_82327898 *prev; /* 0x04 */
    unsigned int value;         /* 0x08 */
} Node_82327898;

typedef struct List_82327898 {
    Node_82327898 *head; /* 0x00 */
    int size;            /* 0x04 */
} List_82327898;

typedef struct Owner_82327898 {
    char pad0[0x10];
    void *handle; /* 0x10 */
    char pad14[0xbc - 0x14];
    Entity_82327898 *entity; /* 0xbc */
    char padc0[0xd0 - 0xc0];
    List_82327898 list; /* 0xd0 */
} Owner_82327898;

extern const float lbl_8218E8E8[5];
extern void *fn_828A12E8(void *handle);
extern Entity_82327898 *fn_8288DCC0(void *map, void *key);
extern void fn_82321138(void *attacks, Attack_82327898 *attack);
extern MapIterator_82327898 *fn_823223C0(MapIterator_82327898 *out, void *map, int *key);
extern void fn_822C0AA0(Entity_82327898 *entity, int move, int value);
extern void fn_8234B0C8(char *context, const char *text, float weight);
extern void fn_8265CA20(void *p);
extern void fn_828B55B0(void *lock);

void fn_82327898(Owner_82327898 *self, int id, int move, int f18, int f14, void *lock, int kind,
                 float strength, unsigned int value)
{
    Entity_82327898 *entity = self->entity;
    Entity_82327898 *other = fn_8288DCC0(fn_828A12E8(self->handle), lock);
    Entity_82327898 *target;

    if (other != 0 && (target = other->target) != 0) {
        Attack_82327898 attack;
        int key;
        MapIterator_82327898 found;

        attack.strength = strength;
        attack.attacker = entity;
        attack.target = target;
        attack.kind = kind;
        attack.id = id;
        attack.move = move;
        attack.f14 = f14;
        attack.f18 = f18;
        fn_82321138(entity->attacks, &attack);
        key = id;
        fn_823223C0(&found, entity->moves, &key);
        fn_822C0AA0(entity, move, found.node->value);
        fn_8234B0C8(target->model + 0x2c0, "attack", lbl_8218E8E8[0]);
    }
    {
        List_82327898 *list = &self->list;
        Node_82327898 *head = list->head;
        Node_82327898 *n = head->next;

        while (n != head) {
            if (n->value == value) {
                Node_82327898 *dead = n;
                Node_82327898 *prev = dead->prev;

                n = dead->next;
                prev->next = n;
                n->prev = prev;
                fn_8265CA20(dead);
                list->size--;
            } else {
                n = n->next;
            }
        }
    }
    fn_828B55B0(lock);
}

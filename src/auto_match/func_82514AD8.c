/* For each of the four players: when the player's controller id is known and listed, makes sure
   the player (and a linked one) is registered when enable is set; otherwise destroys the first
   registered object that belongs to the player. The cursor keeps its owner beside the node, so the
   owner is read again after every advance; the node stays in a register across the end() calls only
   when the iterator advance fn_82248B90 is linked with link-time code generation. */
typedef struct Object_82514AD8 Object_82514AD8;

typedef struct ObjectVtable_82514AD8 {
    void (*destroy)(Object_82514AD8 *self, int flags); /* 0x0 */
} ObjectVtable_82514AD8;

struct Object_82514AD8 {
    ObjectVtable_82514AD8 *vtable;
};

typedef struct Node_82514AD8 {
    struct Node_82514AD8 *left; /* 0x00 */
    char pad04[0x10];
    Object_82514AD8 *value; /* 0x14 */
} Node_82514AD8;

typedef struct Map_82514AD8 {
    int unknown0;
    Node_82514AD8 *head; /* 0x4 */
} Map_82514AD8;

typedef struct Manager_82514AD8 {
    char pad00[0x60];
    char list[4]; /* 0x60 */
} Manager_82514AD8;

typedef struct Cursor_82514AD8 {
    Manager_82514AD8 *owner;
    Node_82514AD8 *node;
} Cursor_82514AD8;

typedef struct IdList_82514AD8 {
    unsigned int ids[9];
    unsigned int count; /* 0x24 */
} IdList_82514AD8;

extern IdList_82514AD8 lbl_83265988;

extern void *fn_828A9948(Manager_82514AD8 *self, unsigned int player);
extern unsigned int fn_828EB518(unsigned int player);
extern unsigned char fn_828EA610(unsigned int id);
extern unsigned int fn_82AB8588(unsigned int id);
extern int fn_823AA2A8(void *list);
extern void fn_828A9288(Manager_82514AD8 *self, unsigned int id, int first);
extern void *fn_828A12E8(Manager_82514AD8 *self);
extern Map_82514AD8 *fn_8288F9A0(void *holder, int kind);
extern void *fn_823AB158(Object_82514AD8 *object);
extern unsigned int fn_823AB478(void *owner);
extern void fn_82248B90(Node_82514AD8 **node);

static __forceinline unsigned char IsListed(unsigned int id)
{
    unsigned int i;

    for (i = 0; i < lbl_83265988.count; i++) {
        if (lbl_83265988.ids[i] == id) {
            return 1;
        }
    }
    return 0;
}

static __forceinline int NotEnd(Cursor_82514AD8 *cursor)
{
    if (cursor->node != fn_8288F9A0(fn_828A12E8(cursor->owner), 1)->head) {
        return 1;
    }
    return 0;
}

void fn_82514AD8(Manager_82514AD8 *self, unsigned char enable)
{
    unsigned int player;

    for (player = 0; player < 4; player++) {
        void *existing = fn_828A9948(self, player);
        unsigned char linked = 0;
        unsigned int linkedId = 0;
        void *linkedEntry = 0;
        unsigned int id = fn_828EB518(player);

        if (id != 0) {
            id = IsListed(id) ? id : 0;
            if (id != 0) {
                if (fn_828EA610(id)) {
                    linked = 1;
                    linkedId = fn_828EB518(fn_82AB8588(id));
                    linkedEntry = fn_828A9948(self, fn_82AB8588(id));
                }
                if (!linked || (linkedId != 0 && linkedEntry != 0)) {
                    if (linked && linkedEntry == 0 && enable) {
                        fn_828A9288(self, linkedId, fn_823AA2A8(self->list) == 0);
                    }
                    if (existing == 0 && enable) {
                        fn_828A9288(self, id, fn_823AA2A8(self->list) == 0);
                    }
                    continue;
                }
            }
        }
        {
            Cursor_82514AD8 cursor;

            cursor.owner = self;
            cursor.node = fn_8288F9A0(fn_828A12E8(self), 1)->head->left;
            while (NotEnd(&cursor)) {
                Object_82514AD8 *object = cursor.node->value;

                if (fn_823AB478(fn_823AB158(object)) == player) {
                    if (object != 0) {
                        object->vtable->destroy(object, 1);
                    }
                    break;
                }
                fn_82248B90(&cursor.node);
            }
        }
    }
}

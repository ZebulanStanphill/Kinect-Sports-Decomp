typedef struct Listener_82528E38 Listener_82528E38;
struct Listener_82528E38 {
    Listener_82528E38 *prev;       /* 0x00 */
    Listener_82528E38 *next;       /* 0x04 */
    unsigned int id;               /* 0x08 */
    void (*callback)(void *msg);   /* 0x0c */
    int context;                   /* 0x10 */
};

typedef struct Registry_82528E38 {
    int unk0;
    struct {
        Listener_82528E38 *prev;
        Listener_82528E38 *next;
        void *handle;
    } groups[3];
} Registry_82528E38;

extern Registry_82528E38 lbl_8327F7F4;
extern Listener_82528E38 *fn_82522D98(unsigned int size);

static __forceinline void Append(Listener_82528E38 *last, Listener_82528E38 *node)
{
    while ((int)last->next != 0) {
        last = last->next;
    }
    last->next = node;
    node->prev = last;
    node->next = 0;
}

void fn_82528E38(Listener_82528E38 **out, unsigned int id, void (*callback)(void *msg), int context)
{
    Listener_82528E38 *node;

    node = fn_82522D98(sizeof(Listener_82528E38));
    *out = node;
    node->prev = 0;
    node->next = 0;
    Append((Listener_82528E38 *)&lbl_8327F7F4.groups[0], *out);
    (*out)->callback = callback;
    (*out)->id = id;
    (*out)->context = context;
}

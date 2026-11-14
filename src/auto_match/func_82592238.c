typedef struct Link_82592238 {
    int prev;
    struct Link_82592238 *next;
} Link_82592238;

typedef struct Owner_82592238 {
    char pad[0x98];
    Link_82592238 list;
} Owner_82592238;

typedef struct Self_82592238 {
    char pad[0x30];
    Owner_82592238 *owner;
    char pad34[0x1c];
    Link_82592238 link;
} Self_82592238;

extern unsigned int lbl_8327F644[15];

void fn_82592238(Self_82592238 *self, unsigned int *event)
{
    switch ((int)event[0]) {
    case 6:
        event[2] = (unsigned int)self->owner;
        break;
    case 0x46:
        if (event[2] == (unsigned int)self)
            self->owner = 0;
        break;
    case 0x4b: {
        Link_82592238 *link = &self->link;
        Link_82592238 *tail;
        if (link->prev != 0)
            return;
        tail = &self->owner->list;
        while ((int)tail->next != 0)
            tail = tail->next;
        tail->next = link;
        link->prev = (int)tail;
        link->next = 0;
        break;
    }
    case 0x52:
        return;
    case 0x53:
        if (lbl_8327F644[13] != event[2])
            lbl_8327F644[13] = event[2];
        break;
    case 0x5a:
        self->owner = (Owner_82592238 *)event[2];
        break;
    }
}

typedef struct Group_829686B0 {
    char pad0[0x20];
    int *slots;
} Group_829686B0;

typedef struct Node_829686B0 {
    int pad0;
    int group;
    int pad8;
    int row;
    int column;
    int next;
    char pad18[0x30];
    unsigned int position;
    int previous;
    int following;
} Node_829686B0;

typedef struct Graph_829686B0 {
    char pad0[0x10];
    Group_829686B0 **groups;
    Node_829686B0 **nodes;
} Graph_829686B0;

extern void fn_82968610(Graph_829686B0 *self, int index, unsigned int position);

void fn_829686B0(Graph_829686B0 *self, int index, unsigned int position)
{
    Node_829686B0 *node = self->nodes[index];
    Group_829686B0 *group = self->groups[node->group];
    int *slots;
    int *slot;

    node->position = position;
    slots = group->slots;
    if (slots != 0) {
        slot = &slots[node->row * 4 + node->column];
        if (*slot != -1) {
            node->previous = *slot;
            self->nodes[*slot]->following = index;
        }
        *slot = index;
    }
    if (node->next != -1) {
        fn_82968610(self, node->next, position);
    }
}

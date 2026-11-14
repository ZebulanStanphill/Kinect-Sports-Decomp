typedef struct Body_82DC9F60 {
    char pad0[0x12];
    unsigned char flags;
} Body_82DC9F60;

typedef struct Entity_82DC9F60 {
    char pad0[0x30];
    Body_82DC9F60 *body;
} Entity_82DC9F60;

typedef struct Command_82DC9F60 {
    unsigned char type;
    char pad1[0xf];
} Command_82DC9F60;

typedef struct AddCommand_82DC9F60 {
    unsigned char type;
    Entity_82DC9F60 *entity;
    unsigned int flags;
    int pad0c;
} AddCommand_82DC9F60;

typedef struct RemoveCommand_82DC9F60 {
    unsigned char type;
    Entity_82DC9F60 *entity;
    int pad08[2];
} RemoveCommand_82DC9F60;

extern void fn_82D8E8F0(void *self, Entity_82DC9F60 *entity);
extern void fn_82D8EA98(void *self, Entity_82DC9F60 *entity);

void fn_82DC9F60(void *self, Command_82DC9F60 *begin, int size)
{
    Command_82DC9F60 *end = (Command_82DC9F60 *)((char *)begin + size);
    Command_82DC9F60 *command = begin;
    while (command < end) {
        switch (command->type) {
        case 0: {
            AddCommand_82DC9F60 *c = (AddCommand_82DC9F60 *)command;
            Entity_82DC9F60 *e = c->entity;
            unsigned int f = c->flags;
            fn_82D8E8F0(self, e);
            e->body->flags |= f;
            command = (Command_82DC9F60 *)(c + 1);
            break;
        }
        case 1: {
            RemoveCommand_82DC9F60 *c = (RemoveCommand_82DC9F60 *)command;
            fn_82D8EA98(self, c->entity);
            command = (Command_82DC9F60 *)(c + 1);
            break;
        }
        default:
            return;
        }
    }
}

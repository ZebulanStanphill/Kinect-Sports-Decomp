typedef struct Body_82D985C0 {
    char pad00[0x10];
    float position[4];
    float velocity[4];
} Body_82D985C0;

typedef struct Entity_82D985C0 {
    char pad00[8];
    void *world; /* 0x08 */
} Entity_82D985C0;

typedef struct Constraint_82D985C0 {
    char pad00[0x14];
    Entity_82D985C0 *entities[2]; /* 0x14 */
} Constraint_82D985C0;

typedef struct Contact_82D985C0 {
    char pad00[0x30];
    Body_82D985C0 *bodyA;
    Body_82D985C0 *bodyB;
    char pad38[0x10];
    Constraint_82D985C0 *constraint;
    char *runtime;
} Contact_82D985C0;

typedef struct Runtime_82D985C0 {
    unsigned char initialized;
    char pad01[3];
    float positionA[3];
    float positionB[3];
    float velocityA[3];
    float velocityB[3];
} Runtime_82D985C0;

typedef struct Atom_82D985C0 {
    unsigned short type;
} Atom_82D985C0;

typedef struct Info_82D985C0 {
    char pad00[0x10];
    Atom_82D985C0 *atom;
    int size;
} Info_82D985C0;

typedef struct Data_82D985C0 Data_82D985C0;

typedef struct Vtable_82D985C0 {
    void *slots[15];
    void (*getInfo)(Data_82D985C0 *, Info_82D985C0 *);
} Vtable_82D985C0;

struct Data_82D985C0 {
    Vtable_82D985C0 *vtable;
};

typedef struct Owner_82D985C0 {
    char pad00[0x18];
    Data_82D985C0 *data;
    unsigned short offset;
    char pad1e[6];
    unsigned char update;
} Owner_82D985C0;

extern void fn_830A21E8(Contact_82D985C0 *, int *, unsigned int, unsigned char);
extern void fn_830A2398(Atom_82D985C0 *, int, Contact_82D985C0 *, int *);
extern void fn_830A4688(Atom_82D985C0 *, Contact_82D985C0 *, int, int *);
extern unsigned char *fn_82D890C8(unsigned char *, void *, Constraint_82D985C0 *);

void fn_82D985C0(Owner_82D985C0 *self, Contact_82D985C0 *contact, int *output)
{
    struct {
        unsigned char result[16];
        Info_82D985C0 info;
    } local;

    Runtime_82D985C0 *runtime = (Runtime_82D985C0 *)(self->offset + contact->runtime);
    if (runtime->initialized == 0) {
        Body_82D985C0 *a = contact->bodyA;
        Body_82D985C0 *b = contact->bodyB;
        runtime->positionA[0] = a->position[0];
        runtime->positionA[1] = a->position[1];
        runtime->positionA[2] = a->position[2];
        runtime->positionB[0] = b->position[0];
        runtime->positionB[1] = b->position[1];
        runtime->positionB[2] = b->position[2];
        runtime->velocityA[0] = a->velocity[0];
        runtime->velocityA[1] = a->velocity[1];
        runtime->velocityA[2] = a->velocity[2];
        runtime->velocityB[0] = b->velocity[0];
        runtime->velocityB[1] = b->velocity[1];
        runtime->velocityB[2] = b->velocity[2];
        self->data->vtable->getInfo(self->data, &local.info);
        if (local.info.atom->type == 0x16) {
            fn_830A4688(local.info.atom, contact, 1, output);
        } else {
            fn_830A2398(local.info.atom, local.info.size, contact, output);
        }
    } else {
        fn_830A21E8(contact, output, 0, 8);
        if (self->update != 0) {
            Constraint_82D985C0 *constraint = contact->constraint;
            fn_82D890C8(local.result, constraint->entities[0]->world, constraint);
        }
    }
}

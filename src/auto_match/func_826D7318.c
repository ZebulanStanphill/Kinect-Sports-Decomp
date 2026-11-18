typedef struct Character_826D7318 Character_826D7318;

typedef struct CharacterVtbl_826D7318 {
    void *slots[0x8c / 4];
    void (*slot8C)(Character_826D7318 *self, float value, int flags); /* 0x8c */
} CharacterVtbl_826D7318;

struct Character_826D7318 {
    CharacterVtbl_826D7318 *vt; /* 0x0 */
    char pad4[0x14 - 0x4];
    int heap; /* 0x14 */
};

typedef struct Movie_826D7318 {
    char pad0[0xc];
    int root; /* 0xc */
    char pad10[0x14 - 0x10];
    unsigned int flags; /* 0x14 */
} Movie_826D7318;

typedef struct Owner_826D7318 Owner_826D7318;

typedef struct OwnerVtbl_826D7318 {
    void *slots[0x30 / 4];
    void *(*getContext)(Owner_826D7318 *self); /* 0x30 */
} OwnerVtbl_826D7318;

struct Owner_826D7318 {
    OwnerVtbl_826D7318 *vt; /* 0x0 */
    char pad4[0x1c - 0x4];
    Movie_826D7318 *movie; /* 0x1c */
};

extern Character_826D7318 *fn_826D6888(void *context, int id, unsigned char flag);
extern char *fn_8267B890(int heap, int size, int flags);
extern void *fn_826D4148(void *mem, int root, Owner_826D7318 *owner, Character_826D7318 *character,
                         void *arg5, int *flags, int arg7);
extern void fn_826CDDC0(void *instance, unsigned int level);
extern void fn_82703090(Character_826D7318 *character, int arg2, void *instance);
extern void fn_826F6E98(Character_826D7318 *character);
extern void fn_8267C498(void *instance);
extern void fn_8267C4F0(void *p);

Character_826D7318 *fn_826D7318(Owner_826D7318 *owner, int id, unsigned char reset)
{
    unsigned int movieFlags;
    Character_826D7318 *character;
    char *mem;
    void *instance;
    int createFlags;

    movieFlags = owner->movie->flags;
    character = fn_826D6888(owner->vt->getContext(owner), id, (movieFlags >> 28) & 1);
    if (character == 0) {
        return 0;
    }
    mem = fn_8267B890(character->heap, 0x1d8, 0);
    if (mem != 0) {
        createFlags = 0x40000;
        instance = fn_826D4148(mem, owner->movie->root, owner, character, 0, &createFlags, 0);
    } else {
        instance = 0;
    }
    if (instance == 0) {
        fn_8267C4F0(character);
        return 0;
    }
    fn_826CDDC0(instance, 0);
    fn_82703090(character, 0, instance);
    fn_826F6E98(character);
    if (reset) {
        character->vt->slot8C(character, 0.0f, 0);
    }
    fn_8267C498(instance);
    return character;
}

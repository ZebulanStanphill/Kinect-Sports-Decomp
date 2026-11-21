/* Rolls the entry's chance with the shared random seed; on success either copies the entry's name
   and picks a random value between its minimum and maximum, or (minimum not above zero) plays the
   name directly. */
typedef struct String_824C9E38 {
    union {
        char buffer[16];
        char *pointer;
    } text; /* 0x00 */

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
    int unknown18;         /* 0x18 */
} String_824C9E38;

typedef struct Entry_824C9E38 {
    String_824C9E38 name; /* 0x00 */
    float minimum;        /* 0x1c */
    float maximum;        /* 0x20 */
    float chance;         /* 0x24 */
} Entry_824C9E38;

typedef struct Player_824C9E38 {
    char pad00[0x24];
    String_824C9E38 name; /* 0x24 */
    float value;          /* 0x40 */
} Player_824C9E38;

extern unsigned int lbl_83265A28;
extern float lbl_821CA45C[];

extern int fn_82520780(unsigned int *seed, float chance);
extern void fn_82230218(String_824C9E38 *self, const String_824C9E38 *source, unsigned int position,
                        unsigned int count);
extern void fn_824C9D48(Player_824C9E38 *self, const char *name);

static __forceinline float NextRandom(unsigned int *seed)
{
    float k = lbl_821CA45C[1];

    union {
        unsigned int i;
        float f;
    } value;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    value.i = *seed & 0x7fffff | 0x3f800000;
    return value.f - k;
}

static __forceinline float RandomBetween(unsigned int *seed, float minimum, float maximum)
{
    return minimum + (maximum - minimum) * NextRandom(seed);
}

int fn_824C9E38(Player_824C9E38 *self, const Entry_824C9E38 *entry)
{
    if (!fn_82520780(&lbl_83265A28, entry->chance)) {
        return 0;
    }
    if (entry->minimum > 0.0f) {
        fn_82230218(&self->name, &entry->name, 0, 0xffffffff);
        self->value = RandomBetween(&lbl_83265A28, entry->minimum, entry->maximum);
    } else {
        fn_824C9D48(self, entry->name.capacity >= 16 ? entry->name.text.pointer : entry->name.text.buffer);
    }
    return 1;
}

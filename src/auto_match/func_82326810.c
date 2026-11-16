typedef struct Temporary_82326810 {
    int words[2];
} Temporary_82326810;
typedef struct Object_82326810 Object_82326810;

struct Object_82326810 {
    struct {
        void (*release)(Object_82326810 *self, int flags);
    } *vtable;
};

typedef struct Owner_82326810 {
    char padding[0x40];
    int source[2];
    float duration;
} Owner_82326810;

extern const float lbl_821CA45C[2];
extern void fn_8255F880(Temporary_82326810 *temporary, void *source);
extern Object_82326810 *fn_8255F8D0(Temporary_82326810 *temporary, float start, float end, int flags);
extern float fn_827F6328(Object_82326810 *object);
extern void fn_82522ED8(Object_82326810 *object);

float fn_82326810(Owner_82326810 *self)
{
    Temporary_82326810 temporary;
    Object_82326810 *object;
    float duration;
    float result;
    fn_8255F880(&temporary, self->source);
    object = fn_8255F8D0(&temporary, 0.0f, lbl_821CA45C[1], 0);
    duration = self->duration;
    result = fn_827F6328(object) * (lbl_821CA45C[1] / duration);
    if (object != 0) {
        object->vtable->release(object, 0);
        fn_82522ED8(object);
    }
    return result;
}

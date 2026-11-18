typedef struct Character_82F72E58 {
    void *vtable;
    unsigned char value;
} Character_82F72E58;

typedef struct State_82F72E58 {
    void *object;
    unsigned char status;
    unsigned char pending;
} State_82F72E58;

extern char lbl_832635A0[];
extern char lbl_82169D58[];
extern void *fn_82F72318(void *, unsigned int, int);
extern void *fn_82F72C10(void *, const unsigned char *, unsigned int);

static __forceinline Character_82F72E58 *Initialize(Character_82F72E58 *self, unsigned char value)
{
    self->vtable = lbl_82169D58;
    self->value = value;
    return self;
}

/* Builds the matcher for a text: a single-character object or a string object. Status 2 means no
   text, status 3 a failure (an object already present, or no memory). */
void fn_82F72E58(State_82F72E58 *self, const unsigned char *text, unsigned int count)
{
    if (self->object != 0) {
        self->pending = 0;
        self->status = 3;
        self->object = 0;
        return;
    }
    if (text != 0 && (int)count != 0) {
        if (count >= 1) {
            if (count != 1) {
                void *memory = fn_82F72318(lbl_832635A0, 0xc, 0);
                void *object = memory ? fn_82F72C10(memory, text, count) : 0;

                self->object = object;
                if (object != 0) {
                    return;
                }
                self->status = 3;
                return;
            }
            {
                Character_82F72E58 *memory = (Character_82F72E58 *)fn_82F72318(lbl_832635A0, 8, 0);
                Character_82F72E58 *character = memory ? Initialize(memory, *text) : 0;

                self->object = character;
                if (character != 0) {
                    return;
                }
            }
        }
        self->status = 3;
        return;
    }
    self->status = 2;
}

typedef struct Image_8274CFA0 Image_8274CFA0;

typedef struct Vtable_8274CFA0 {
    void *reserved;                              /* 0x00 */
    unsigned int (*GetWidth)(Image_8274CFA0 *);  /* 0x04 */
    unsigned int (*GetHeight)(Image_8274CFA0 *); /* 0x08 */
} Vtable_8274CFA0;

struct Image_8274CFA0 {
    Vtable_8274CFA0 *vtable; /* 0x00 */
};

typedef struct State_8274CFA0 {
    char padding[0xc]; /* 0x00 */
    int image;         /* 0x0c */
} State_8274CFA0;

typedef struct Object_8274CFA0 {
    char padding[0x20]; /* 0x00 */
    int state;          /* 0x20 */
} Object_8274CFA0;

typedef struct String_8274CFA0 {
    const char *text; /* 0x00 */
} String_8274CFA0;

extern char lbl_8200EAF0[];
extern char lbl_8200EAE8[];
extern int strcmp(const char *, const char *);
extern void fn_82681898(void *, double);
extern int fn_82713EE8(Object_8274CFA0 *, void *, String_8274CFA0 **, void *);

int fn_8274CFA0(Object_8274CFA0 *self, void *environment, String_8274CFA0 **name, void *out)
{
    State_8274CFA0 *state = (State_8274CFA0 *)self->state;
    if (self->state != 0) {
        const char *text = (*name)->text;
        if (strcmp(text, lbl_8200EAF0) == 0) {
            Image_8274CFA0 *image = (Image_8274CFA0 *)state->image;
            unsigned int width = state->image != 0 ? image->vtable->GetWidth(image) : 0;
            fn_82681898(out, (double)width);
            return 1;
        }
        if (strcmp(text, lbl_8200EAE8) == 0) {
            Image_8274CFA0 *image = (Image_8274CFA0 *)state->image;
            unsigned int height = state->image != 0 ? image->vtable->GetHeight(image) : 0;
            fn_82681898(out, (double)height);
            return 1;
        }
    }
    return fn_82713EE8(self, environment, name, out);
}

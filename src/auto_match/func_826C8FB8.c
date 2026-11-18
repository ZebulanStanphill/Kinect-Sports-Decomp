typedef struct Rect_826C8FB8 {
    float x;
    float y;
    float w;
    float h;
} Rect_826C8FB8;

typedef struct Mat23_826C8FB8 {
    float m[6];
} Mat23_826C8FB8;

typedef struct Character_826C8FB8 Character_826C8FB8;

typedef struct CharacterVtbl_826C8FB8 {
    void *slots[0xd4 / 4];
    void (*GetBounds)(Rect_826C8FB8 *out, Character_826C8FB8 *self); /* 0xd4 */
} CharacterVtbl_826C8FB8;

struct Character_826C8FB8 {
    CharacterVtbl_826C8FB8 *vtbl;
    char pad4[0x44 - 0x4];
    Mat23_826C8FB8 matrix; /* 0x44 */
};

extern Character_826C8FB8 *fn_826C8688(void *source);
extern void fn_8268CC00(Mat23_826C8FB8 *m);
extern void fn_8268D280(const Mat23_826C8FB8 *m, Rect_826C8FB8 *out, const Rect_826C8FB8 *in);
extern void fn_826A1158(Rect_826C8FB8 *out, void *source);

Rect_826C8FB8 *fn_826C8FB8(Rect_826C8FB8 *out, void *source)
{
    Character_826C8FB8 *character;
    Mat23_826C8FB8 m;
    Rect_826C8FB8 bounds;

    character = fn_826C8688(source);
    fn_8268CC00(&m);
    if (character != 0) {
        m.m[0] = character->matrix.m[0];
        m.m[1] = character->matrix.m[1];
        m.m[2] = character->matrix.m[2];
        m.m[3] = character->matrix.m[3];
        m.m[4] = character->matrix.m[4];
        m.m[5] = character->matrix.m[5];
        character->vtbl->GetBounds(&bounds, character);
        out->x = 0.0f;
        out->y = 0.0f;
        out->w = 0.0f;
        out->h = 0.0f;
        fn_8268D280(&m, out, &bounds);
    } else {
        fn_826A1158(out, source);
    }
    return out;
}

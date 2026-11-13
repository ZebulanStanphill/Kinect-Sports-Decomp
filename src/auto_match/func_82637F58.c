typedef struct Obj_82637F58 {
    char pad0[0x10];
    unsigned __int64 dirty;     /* 0x10 */
    char pad18[0x2904 - 0x18];
    float value;                /* 0x2904 */
} Obj_82637F58;

extern const float lbl_821954B0[0x28a];

/* Stores a value in hundredths as a float (lbl_821954B0[8] is 0.01f) and marks it dirty. */
void fn_82637F58(Obj_82637F58 *self, unsigned int value)
{
    self->value = (float)value * lbl_821954B0[8];
    { unsigned __int64 *d = &self->dirty; *d |= 0x8000000; }
}

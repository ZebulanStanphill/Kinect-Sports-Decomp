typedef struct Obj_82B80EE0 {
    char pad0[0x2c];
    float values[1]; /* 0x2c */
} Obj_82B80EE0;

extern int fn_82B80C68(float value, int arg);

int fn_82B80EE0(Obj_82B80EE0 *self, int index, int arg)
{
    return fn_82B80C68(self->values[index], arg);
}

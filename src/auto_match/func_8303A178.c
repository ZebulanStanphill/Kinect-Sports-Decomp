typedef struct Obj_8303A178 {
    int pad[9];
    unsigned int rate; /* 0x24 */
} Obj_8303A178;

extern float lbl_82054148;

void fn_8303A178(Obj_8303A178 *self, unsigned int *value)
{
    *value = (unsigned int)((float)*value * ((float)self->rate * lbl_82054148) + 0.5f);
}
